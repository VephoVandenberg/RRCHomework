/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_ObtainLocationConfig_r11_H_
#define	_ObtainLocationConfig_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ObtainLocationConfig_r11__obtainLocation_r11 {
	ObtainLocationConfig_r11__obtainLocation_r11_setup	= 0
} e_ObtainLocationConfig_r11__obtainLocation_r11;

/* ObtainLocationConfig-r11 */
typedef struct ObtainLocationConfig_r11 {
	long	*obtainLocation_r11;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ObtainLocationConfig_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_obtainLocation_r11_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ObtainLocationConfig_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_ObtainLocationConfig_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_ObtainLocationConfig_r11_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _ObtainLocationConfig_r11_H_ */
#include <asn_internal.h>
