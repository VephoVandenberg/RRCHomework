/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_RedirectedCarrierInfo_NB_r13_H_
#define	_RedirectedCarrierInfo_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CarrierFreq-NB-r13.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RedirectedCarrierInfo-NB-r13 */
typedef CarrierFreq_NB_r13_t	 RedirectedCarrierInfo_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RedirectedCarrierInfo_NB_r13;
asn_struct_free_f RedirectedCarrierInfo_NB_r13_free;
asn_struct_print_f RedirectedCarrierInfo_NB_r13_print;
asn_constr_check_f RedirectedCarrierInfo_NB_r13_constraint;
ber_type_decoder_f RedirectedCarrierInfo_NB_r13_decode_ber;
der_type_encoder_f RedirectedCarrierInfo_NB_r13_encode_der;
xer_type_decoder_f RedirectedCarrierInfo_NB_r13_decode_xer;
xer_type_encoder_f RedirectedCarrierInfo_NB_r13_encode_xer;
jer_type_encoder_f RedirectedCarrierInfo_NB_r13_encode_jer;
per_type_decoder_f RedirectedCarrierInfo_NB_r13_decode_uper;
per_type_encoder_f RedirectedCarrierInfo_NB_r13_encode_uper;
per_type_decoder_f RedirectedCarrierInfo_NB_r13_decode_aper;
per_type_encoder_f RedirectedCarrierInfo_NB_r13_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RedirectedCarrierInfo_NB_r13_H_ */
#include <asn_internal.h>