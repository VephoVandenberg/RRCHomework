/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_PCCH_Config_v1310_H_
#define	_PCCH_Config_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13 {
	PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13_r1	= 0,
	PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13_r2	= 1,
	PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13_r4	= 2,
	PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13_r8	= 3,
	PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13_r16	= 4,
	PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13_r32	= 5,
	PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13_r64	= 6,
	PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13_r128	= 7,
	PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13_r256	= 8
} e_PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13;
typedef enum PCCH_Config_v1310__nB_v1310 {
	PCCH_Config_v1310__nB_v1310_one64thT	= 0,
	PCCH_Config_v1310__nB_v1310_one128thT	= 1,
	PCCH_Config_v1310__nB_v1310_one256thT	= 2
} e_PCCH_Config_v1310__nB_v1310;

/* PCCH-Config-v1310 */
typedef struct PCCH_Config_v1310 {
	long	 paging_narrowBands_r13;
	long	 mpdcch_NumRepetition_Paging_r13;
	long	*nB_v1310;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PCCH_Config_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mpdcch_NumRepetition_Paging_r13_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nB_v1310_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PCCH_Config_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_PCCH_Config_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_PCCH_Config_v1310_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PCCH_Config_v1310_H_ */
#include <asn_internal.h>
