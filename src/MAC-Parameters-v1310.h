/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_MAC_Parameters_v1310_H_
#define	_MAC_Parameters_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MAC_Parameters_v1310__extendedMAC_LengthField_r13 {
	MAC_Parameters_v1310__extendedMAC_LengthField_r13_supported	= 0
} e_MAC_Parameters_v1310__extendedMAC_LengthField_r13;
typedef enum MAC_Parameters_v1310__extendedLongDRX_r13 {
	MAC_Parameters_v1310__extendedLongDRX_r13_supported	= 0
} e_MAC_Parameters_v1310__extendedLongDRX_r13;

/* MAC-Parameters-v1310 */
typedef struct MAC_Parameters_v1310 {
	long	*extendedMAC_LengthField_r13;	/* OPTIONAL */
	long	*extendedLongDRX_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_Parameters_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_extendedMAC_LengthField_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_extendedLongDRX_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MAC_Parameters_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_MAC_Parameters_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_MAC_Parameters_v1310_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MAC_Parameters_v1310_H_ */
#include <asn_internal.h>
