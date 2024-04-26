/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_PCCH_Config_NB_r14_H_
#define	_PCCH_Config_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "PagingWeight-NB-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PCCH_Config_NB_r14__npdcch_NumRepetitionPaging_r14 {
	PCCH_Config_NB_r14__npdcch_NumRepetitionPaging_r14_r1	= 0,
	PCCH_Config_NB_r14__npdcch_NumRepetitionPaging_r14_r2	= 1,
	PCCH_Config_NB_r14__npdcch_NumRepetitionPaging_r14_r4	= 2,
	PCCH_Config_NB_r14__npdcch_NumRepetitionPaging_r14_r8	= 3,
	PCCH_Config_NB_r14__npdcch_NumRepetitionPaging_r14_r16	= 4,
	PCCH_Config_NB_r14__npdcch_NumRepetitionPaging_r14_r32	= 5,
	PCCH_Config_NB_r14__npdcch_NumRepetitionPaging_r14_r64	= 6,
	PCCH_Config_NB_r14__npdcch_NumRepetitionPaging_r14_r128	= 7,
	PCCH_Config_NB_r14__npdcch_NumRepetitionPaging_r14_r256	= 8,
	PCCH_Config_NB_r14__npdcch_NumRepetitionPaging_r14_r512	= 9,
	PCCH_Config_NB_r14__npdcch_NumRepetitionPaging_r14_r1024	= 10,
	PCCH_Config_NB_r14__npdcch_NumRepetitionPaging_r14_r2048	= 11,
	PCCH_Config_NB_r14__npdcch_NumRepetitionPaging_r14_spare4	= 12,
	PCCH_Config_NB_r14__npdcch_NumRepetitionPaging_r14_spare3	= 13,
	PCCH_Config_NB_r14__npdcch_NumRepetitionPaging_r14_spare2	= 14,
	PCCH_Config_NB_r14__npdcch_NumRepetitionPaging_r14_spare1	= 15
} e_PCCH_Config_NB_r14__npdcch_NumRepetitionPaging_r14;

/* PCCH-Config-NB-r14 */
typedef struct PCCH_Config_NB_r14 {
	long	*npdcch_NumRepetitionPaging_r14;	/* OPTIONAL */
	PagingWeight_NB_r14_t	 pagingWeight_r14;	/* DEFAULT 0 */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PCCH_Config_NB_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_npdcch_NumRepetitionPaging_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PCCH_Config_NB_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_PCCH_Config_NB_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_PCCH_Config_NB_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PCCH_Config_NB_r14_H_ */
#include <asn_internal.h>
