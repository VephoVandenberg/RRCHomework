/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_NAICS_Capability_Entry_r12_H_
#define	_NAICS_Capability_Entry_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12 {
	NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n50	= 0,
	NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n75	= 1,
	NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n100	= 2,
	NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n125	= 3,
	NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n150	= 4,
	NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n175	= 5,
	NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n200	= 6,
	NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n225	= 7,
	NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n250	= 8,
	NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n275	= 9,
	NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n300	= 10,
	NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n350	= 11,
	NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n400	= 12,
	NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n450	= 13,
	NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n500	= 14,
	NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_spare	= 15
} e_NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12;

/* NAICS-Capability-Entry-r12 */
typedef struct NAICS_Capability_Entry_r12 {
	long	 numberOfNAICS_CapableCC_r12;
	long	 numberOfAggregatedPRB_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NAICS_Capability_Entry_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_numberOfAggregatedPRB_r12_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NAICS_Capability_Entry_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_NAICS_Capability_Entry_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_NAICS_Capability_Entry_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NAICS_Capability_Entry_r12_H_ */
#include <asn_internal.h>
