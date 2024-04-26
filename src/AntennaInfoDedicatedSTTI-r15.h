/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_AntennaInfoDedicatedSTTI_r15_H_
#define	_AntennaInfoDedicatedSTTI_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include <BIT_STRING.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AntennaInfoDedicatedSTTI_r15_PR {
	AntennaInfoDedicatedSTTI_r15_PR_NOTHING,	/* No components present */
	AntennaInfoDedicatedSTTI_r15_PR_release,
	AntennaInfoDedicatedSTTI_r15_PR_setup
} AntennaInfoDedicatedSTTI_r15_PR;
typedef enum AntennaInfoDedicatedSTTI_r15__setup__transmissionModeDL_MBSFN_r15 {
	AntennaInfoDedicatedSTTI_r15__setup__transmissionModeDL_MBSFN_r15_tm9	= 0,
	AntennaInfoDedicatedSTTI_r15__setup__transmissionModeDL_MBSFN_r15_tm10	= 1
} e_AntennaInfoDedicatedSTTI_r15__setup__transmissionModeDL_MBSFN_r15;
typedef enum AntennaInfoDedicatedSTTI_r15__setup__transmissionModeDL_nonMBSFN_r15 {
	AntennaInfoDedicatedSTTI_r15__setup__transmissionModeDL_nonMBSFN_r15_tm1	= 0,
	AntennaInfoDedicatedSTTI_r15__setup__transmissionModeDL_nonMBSFN_r15_tm2	= 1,
	AntennaInfoDedicatedSTTI_r15__setup__transmissionModeDL_nonMBSFN_r15_tm3	= 2,
	AntennaInfoDedicatedSTTI_r15__setup__transmissionModeDL_nonMBSFN_r15_tm4	= 3,
	AntennaInfoDedicatedSTTI_r15__setup__transmissionModeDL_nonMBSFN_r15_tm6	= 4,
	AntennaInfoDedicatedSTTI_r15__setup__transmissionModeDL_nonMBSFN_r15_tm8	= 5,
	AntennaInfoDedicatedSTTI_r15__setup__transmissionModeDL_nonMBSFN_r15_tm9	= 6,
	AntennaInfoDedicatedSTTI_r15__setup__transmissionModeDL_nonMBSFN_r15_tm10	= 7
} e_AntennaInfoDedicatedSTTI_r15__setup__transmissionModeDL_nonMBSFN_r15;
typedef enum AntennaInfoDedicatedSTTI_r15__setup__codebookSubsetRestriction_PR {
	AntennaInfoDedicatedSTTI_r15__setup__codebookSubsetRestriction_PR_NOTHING,	/* No components present */
	AntennaInfoDedicatedSTTI_r15__setup__codebookSubsetRestriction_PR_n2TxAntenna_tm3_r15,
	AntennaInfoDedicatedSTTI_r15__setup__codebookSubsetRestriction_PR_n4TxAntenna_tm3_r15,
	AntennaInfoDedicatedSTTI_r15__setup__codebookSubsetRestriction_PR_n2TxAntenna_tm4_r15,
	AntennaInfoDedicatedSTTI_r15__setup__codebookSubsetRestriction_PR_n4TxAntenna_tm4_r15,
	AntennaInfoDedicatedSTTI_r15__setup__codebookSubsetRestriction_PR_n2TxAntenna_tm5_r15,
	AntennaInfoDedicatedSTTI_r15__setup__codebookSubsetRestriction_PR_n4TxAntenna_tm5_r15,
	AntennaInfoDedicatedSTTI_r15__setup__codebookSubsetRestriction_PR_n2TxAntenna_tm6_r15,
	AntennaInfoDedicatedSTTI_r15__setup__codebookSubsetRestriction_PR_n4TxAntenna_tm6_r15,
	AntennaInfoDedicatedSTTI_r15__setup__codebookSubsetRestriction_PR_n2TxAntenna_tm8_r15,
	AntennaInfoDedicatedSTTI_r15__setup__codebookSubsetRestriction_PR_n4TxAntenna_tm8_r15,
	AntennaInfoDedicatedSTTI_r15__setup__codebookSubsetRestriction_PR_n2TxAntenna_tm9and10_r15,
	AntennaInfoDedicatedSTTI_r15__setup__codebookSubsetRestriction_PR_n4TxAntenna_tm9and10_r15,
	AntennaInfoDedicatedSTTI_r15__setup__codebookSubsetRestriction_PR_n8TxAntenna_tm9and10_r15
} AntennaInfoDedicatedSTTI_r15__setup__codebookSubsetRestriction_PR;
typedef enum AntennaInfoDedicatedSTTI_r15__setup__maxLayersMIMO_STTI_r15 {
	AntennaInfoDedicatedSTTI_r15__setup__maxLayersMIMO_STTI_r15_twoLayers	= 0,
	AntennaInfoDedicatedSTTI_r15__setup__maxLayersMIMO_STTI_r15_fourLayers	= 1
} e_AntennaInfoDedicatedSTTI_r15__setup__maxLayersMIMO_STTI_r15;

/* AntennaInfoDedicatedSTTI-r15 */
typedef struct AntennaInfoDedicatedSTTI_r15 {
	AntennaInfoDedicatedSTTI_r15_PR present;
	union AntennaInfoDedicatedSTTI_r15_u {
		NULL_t	 release;
		struct AntennaInfoDedicatedSTTI_r15__setup {
			long	*transmissionModeDL_MBSFN_r15;	/* OPTIONAL */
			long	*transmissionModeDL_nonMBSFN_r15;	/* OPTIONAL */
			struct AntennaInfoDedicatedSTTI_r15__setup__codebookSubsetRestriction {
				AntennaInfoDedicatedSTTI_r15__setup__codebookSubsetRestriction_PR present;
				union AntennaInfoDedicatedSTTI_r15__setup__codebookSubsetRestriction_u {
					BIT_STRING_t	 n2TxAntenna_tm3_r15;
					BIT_STRING_t	 n4TxAntenna_tm3_r15;
					BIT_STRING_t	 n2TxAntenna_tm4_r15;
					BIT_STRING_t	 n4TxAntenna_tm4_r15;
					BIT_STRING_t	 n2TxAntenna_tm5_r15;
					BIT_STRING_t	 n4TxAntenna_tm5_r15;
					BIT_STRING_t	 n2TxAntenna_tm6_r15;
					BIT_STRING_t	 n4TxAntenna_tm6_r15;
					BIT_STRING_t	 n2TxAntenna_tm8_r15;
					BIT_STRING_t	 n4TxAntenna_tm8_r15;
					BIT_STRING_t	 n2TxAntenna_tm9and10_r15;
					BIT_STRING_t	 n4TxAntenna_tm9and10_r15;
					BIT_STRING_t	 n8TxAntenna_tm9and10_r15;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *codebookSubsetRestriction;
			long	*maxLayersMIMO_STTI_r15;	/* OPTIONAL */
			BOOLEAN_t	 slotSubslotPDSCH_TxDiv_2Layer_r15;
			BOOLEAN_t	 slotSubslotPDSCH_TxDiv_4Layer_r15;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AntennaInfoDedicatedSTTI_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_transmissionModeDL_MBSFN_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_transmissionModeDL_nonMBSFN_r15_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxLayersMIMO_STTI_r15_30;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_AntennaInfoDedicatedSTTI_r15;
extern asn_CHOICE_specifics_t asn_SPC_AntennaInfoDedicatedSTTI_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_AntennaInfoDedicatedSTTI_r15_1[2];
extern asn_per_constraints_t asn_PER_type_AntennaInfoDedicatedSTTI_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _AntennaInfoDedicatedSTTI_r15_H_ */
#include <asn_internal.h>