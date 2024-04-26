/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_BandCombinationParameters_v1090_H_
#define	_BandCombinationParameters_v1090_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandParameters_v1090;

/* BandCombinationParameters-v1090 */
typedef struct BandCombinationParameters_v1090 {
	A_SEQUENCE_OF(struct BandParameters_v1090) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombinationParameters_v1090_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandCombinationParameters_v1090;
extern asn_SET_OF_specifics_t asn_SPC_BandCombinationParameters_v1090_specs_1;
extern asn_TYPE_member_t asn_MBR_BandCombinationParameters_v1090_1[1];
extern asn_per_constraints_t asn_PER_type_BandCombinationParameters_v1090_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _BandCombinationParameters_v1090_H_ */
#include <asn_internal.h>
