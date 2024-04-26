#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#include <RRCConnectionRequest.h>
#include <RRCConnectionSetup.h>

const int g_bufferSize = 1024;

int getSocketServer(int port);
int acceptConnection(int socketFDescriptor);
void getRRCConnectionRequest(int ConnectionFDescriptor); 
void sendRRCConnectionSetup(int ConnectionFDescriptor);

int main(int argc, const char **argv) 
{
    int socket = getSocketServer(8888);               
    while (true)
    {
        int fileDescriptor = acceptConnection(socket);
        getRRCConnectionRequest(fileDescriptor);
        sendRRCConnectionSetup(fileDescriptor);

        close(fileDescriptor);
    }
    close(socket);                                                                                                                                                                   
    return 0;
}

ssize_t receiveMessage(int socketFDescriptor, uint8_t* buffer, size_t size);
ssize_t sendMessage(int socketFDescriptor, uint8_t* buffer, ssize_t size);

int getSocketServer(int port) 
{
    int socketFDescriptor = socket(AF_INET, SOCK_STREAM, 0);

    if (socketFDescriptor < 0) 
    {
        perror("ERROR::can't create socket");
        exit(EXIT_FAILURE);
    }

    struct sockaddr_in ServerAddress;
    ServerAddress.sin_family = AF_INET;
    ServerAddress.sin_port = htons(port);
    ServerAddress.sin_addr.s_addr = INADDR_ANY;

    if (bind(socketFDescriptor, (struct sockaddr*)&ServerAddress, sizeof(ServerAddress)) < 0) 
    {
        perror("ERROR::can't bind socket");
        exit(EXIT_FAILURE);
    }

    if (listen(socketFDescriptor, 5) < 0) 
    {
        perror("ERROR::can't listen for connections");
        exit(EXIT_FAILURE);
    }

    return socketFDescriptor;
}

int acceptConnection(int socketFDescriptor) 
{
    int ConnectionFDescriptor = accept(socketFDescriptor, NULL, NULL);

    if (ConnectionFDescriptor < 0)
    {
        perror("ERROR::can't accept connection");
        exit(EXIT_FAILURE);
    }

    return ConnectionFDescriptor;
}

void getRRCConnectionRequest(int ConnectionFDescriptor) 
{
    uint8_t buffer[g_bufferSize];
    ssize_t size = receiveMessage(ConnectionFDescriptor, buffer, sizeof(buffer));
    RRCConnectionRequest_t* RRCRequest = NULL;
    asn_dec_rval_t DecodeTry = asn_decode(NULL, ATS_DER, &asn_DEF_RRCConnectionRequest, (void**)&RRCRequest, buffer, size);

    if (DecodeTry.code != RC_OK)
    {
        fprintf(stderr, "ERROR::can't decode RRC Connection Request\n");
        close(ConnectionFDescriptor);
        exit(EXIT_FAILURE);
    }
    printf("Success->RRCCOnnectionRequest::Recieved\n");

    ASN_STRUCT_FREE(asn_DEF_RRCConnectionRequest, RRCRequest);
}

void sendRRCConnectionSetup(int ConnectionFDescriptor)
{
    RRCConnectionSetup_t RRCSetup;
    memset(&RRCSetup, 0, sizeof(RRCConnectionSetup_t));
    RRCSetup.rrc_TransactionIdentifier = 1;
    RRCSetup.criticalExtensions.present = RRCConnectionSetup__criticalExtensions_PR_c1;
    RRCSetup.criticalExtensions.choice.c1.present = RRCConnectionSetup__criticalExtensions__c1_PR_rrcConnectionSetup_r8;
    uint8_t buffer[g_bufferSize];
    asn_enc_rval_t EncodeTry = der_encode_to_buffer(&asn_DEF_RRCConnectionSetup, &RRCSetup, buffer, sizeof(buffer));

    if (EncodeTry.encoded < 0) 
    {
        fprintf(stderr, "ERROR::can't encode RRC Connection Setup\n");
        close(ConnectionFDescriptor);
        exit(EXIT_FAILURE);
    }
    printf("Success->RRCConnectionSetup::Sent\n");

    sendMessage(ConnectionFDescriptor, buffer, EncodeTry.encoded);

}


ssize_t receiveMessage(int socketFDescriptor, uint8_t* buffer, size_t size)
{
    ssize_t ReceiveTry = recv(socketFDescriptor, buffer, size, 0);

    if (ReceiveTry < 0) {
        perror("ERROR: can't receive message");
        exit(EXIT_FAILURE);
    }

    return ReceiveTry;
}

ssize_t sendMessage(int socketFDescriptor, uint8_t* buffer, ssize_t size) 
{
    ssize_t SendTry = send(socketFDescriptor, buffer, size, 0);

    if (SendTry < 0) 
    {
        perror("ERROR: can't send message");
        exit(EXIT_FAILURE);
    }

    return SendTry;
}

