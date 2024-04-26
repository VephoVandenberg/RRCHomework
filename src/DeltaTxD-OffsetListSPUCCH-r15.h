/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_DeltaTxD_OffsetListSPUCCH_r15_H_
#define	_DeltaTxD_OffsetListSPUCCH_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1_r15 {
	DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1_r15_dB0	= 0,
	DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1_r15_dB_2	= 1
} e_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1_r15;
typedef enum DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1a_r15 {
	DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1a_r15_dB0	= 0,
	DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1a_r15_dB_2	= 1
} e_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1a_r15;
typedef enum DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1b_r15 {
	DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1b_r15_dB0	= 0,
	DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1b_r15_dB_2	= 1
} e_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format1b_r15;
typedef enum DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format3_r15 {
	DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format3_r15_dB0	= 0,
	DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format3_r15_dB_2	= 1
} e_DeltaTxD_OffsetListSPUCCH_r15__deltaTxD_OffsetSPUCCH_Format3_r15;

/* DeltaTxD-OffsetListSPUCCH-r15 */
typedef struct DeltaTxD_OffsetListSPUCCH_r15 {
	long	 deltaTxD_OffsetSPUCCH_Format1_r15;
	long	 deltaTxD_OffsetSPUCCH_Format1a_r15;
	long	 deltaTxD_OffsetSPUCCH_Format1b_r15;
	long	 deltaTxD_OffsetSPUCCH_Format3_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DeltaTxD_OffsetListSPUCCH_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaTxD_OffsetSPUCCH_Format1_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaTxD_OffsetSPUCCH_Format1a_r15_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaTxD_OffsetSPUCCH_Format1b_r15_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaTxD_OffsetSPUCCH_Format3_r15_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DeltaTxD_OffsetListSPUCCH_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_DeltaTxD_OffsetListSPUCCH_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_DeltaTxD_OffsetListSPUCCH_r15_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _DeltaTxD_OffsetListSPUCCH_r15_H_ */
#include <asn_internal.h>
