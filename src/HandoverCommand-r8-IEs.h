/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_HandoverCommand_r8_IEs_H_
#define	_HandoverCommand_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HandoverCommand-r8-IEs */
typedef struct HandoverCommand_r8_IEs {
	OCTET_STRING_t	 handoverCommandMessage;
	struct HandoverCommand_r8_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverCommand_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverCommand_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_HandoverCommand_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_HandoverCommand_r8_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverCommand_r8_IEs_H_ */
#include <asn_internal.h>
