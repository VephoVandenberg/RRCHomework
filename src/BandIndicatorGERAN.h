/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_BandIndicatorGERAN_H_
#define	_BandIndicatorGERAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BandIndicatorGERAN {
	BandIndicatorGERAN_dcs1800	= 0,
	BandIndicatorGERAN_pcs1900	= 1
} e_BandIndicatorGERAN;

/* BandIndicatorGERAN */
typedef long	 BandIndicatorGERAN_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_BandIndicatorGERAN_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_BandIndicatorGERAN;
extern const asn_INTEGER_specifics_t asn_SPC_BandIndicatorGERAN_specs_1;
asn_struct_free_f BandIndicatorGERAN_free;
asn_struct_print_f BandIndicatorGERAN_print;
asn_constr_check_f BandIndicatorGERAN_constraint;
ber_type_decoder_f BandIndicatorGERAN_decode_ber;
der_type_encoder_f BandIndicatorGERAN_encode_der;
xer_type_decoder_f BandIndicatorGERAN_decode_xer;
xer_type_encoder_f BandIndicatorGERAN_encode_xer;
jer_type_encoder_f BandIndicatorGERAN_encode_jer;
per_type_decoder_f BandIndicatorGERAN_decode_uper;
per_type_encoder_f BandIndicatorGERAN_encode_uper;
per_type_decoder_f BandIndicatorGERAN_decode_aper;
per_type_encoder_f BandIndicatorGERAN_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _BandIndicatorGERAN_H_ */
#include <asn_internal.h>
