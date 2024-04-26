/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_MobilityParameters_r14_H_
#define	_MobilityParameters_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MobilityParameters_r14__makeBeforeBreak_r14 {
	MobilityParameters_r14__makeBeforeBreak_r14_supported	= 0
} e_MobilityParameters_r14__makeBeforeBreak_r14;
typedef enum MobilityParameters_r14__rach_Less_r14 {
	MobilityParameters_r14__rach_Less_r14_supported	= 0
} e_MobilityParameters_r14__rach_Less_r14;

/* MobilityParameters-r14 */
typedef struct MobilityParameters_r14 {
	long	*makeBeforeBreak_r14;	/* OPTIONAL */
	long	*rach_Less_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MobilityParameters_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_makeBeforeBreak_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rach_Less_r14_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MobilityParameters_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_MobilityParameters_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_MobilityParameters_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MobilityParameters_r14_H_ */
#include <asn_internal.h>
