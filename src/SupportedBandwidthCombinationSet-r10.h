/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_SupportedBandwidthCombinationSet_r10_H_
#define	_SupportedBandwidthCombinationSet_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SupportedBandwidthCombinationSet-r10 */
typedef BIT_STRING_t	 SupportedBandwidthCombinationSet_r10_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SupportedBandwidthCombinationSet_r10_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandwidthCombinationSet_r10;
asn_struct_free_f SupportedBandwidthCombinationSet_r10_free;
asn_struct_print_f SupportedBandwidthCombinationSet_r10_print;
asn_constr_check_f SupportedBandwidthCombinationSet_r10_constraint;
ber_type_decoder_f SupportedBandwidthCombinationSet_r10_decode_ber;
der_type_encoder_f SupportedBandwidthCombinationSet_r10_encode_der;
xer_type_decoder_f SupportedBandwidthCombinationSet_r10_decode_xer;
xer_type_encoder_f SupportedBandwidthCombinationSet_r10_encode_xer;
jer_type_encoder_f SupportedBandwidthCombinationSet_r10_encode_jer;
per_type_decoder_f SupportedBandwidthCombinationSet_r10_decode_uper;
per_type_encoder_f SupportedBandwidthCombinationSet_r10_encode_uper;
per_type_decoder_f SupportedBandwidthCombinationSet_r10_decode_aper;
per_type_encoder_f SupportedBandwidthCombinationSet_r10_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBandwidthCombinationSet_r10_H_ */
#include <asn_internal.h>
