/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_TimeToTrigger_H_
#define	_TimeToTrigger_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TimeToTrigger {
	TimeToTrigger_ms0	= 0,
	TimeToTrigger_ms40	= 1,
	TimeToTrigger_ms64	= 2,
	TimeToTrigger_ms80	= 3,
	TimeToTrigger_ms100	= 4,
	TimeToTrigger_ms128	= 5,
	TimeToTrigger_ms160	= 6,
	TimeToTrigger_ms256	= 7,
	TimeToTrigger_ms320	= 8,
	TimeToTrigger_ms480	= 9,
	TimeToTrigger_ms512	= 10,
	TimeToTrigger_ms640	= 11,
	TimeToTrigger_ms1024	= 12,
	TimeToTrigger_ms1280	= 13,
	TimeToTrigger_ms2560	= 14,
	TimeToTrigger_ms5120	= 15
} e_TimeToTrigger;

/* TimeToTrigger */
typedef long	 TimeToTrigger_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TimeToTrigger_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TimeToTrigger;
extern const asn_INTEGER_specifics_t asn_SPC_TimeToTrigger_specs_1;
asn_struct_free_f TimeToTrigger_free;
asn_struct_print_f TimeToTrigger_print;
asn_constr_check_f TimeToTrigger_constraint;
ber_type_decoder_f TimeToTrigger_decode_ber;
der_type_encoder_f TimeToTrigger_encode_der;
xer_type_decoder_f TimeToTrigger_decode_xer;
xer_type_encoder_f TimeToTrigger_encode_xer;
jer_type_encoder_f TimeToTrigger_encode_jer;
per_type_decoder_f TimeToTrigger_decode_uper;
per_type_encoder_f TimeToTrigger_encode_uper;
per_type_decoder_f TimeToTrigger_decode_aper;
per_type_encoder_f TimeToTrigger_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimeToTrigger_H_ */
#include <asn_internal.h>
