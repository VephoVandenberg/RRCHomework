/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_SlotOrSubslotPDSCH_Config_r15_H_
#define	_SlotOrSubslotPDSCH_Config_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SlotOrSubslotPDSCH_Config_r15_PR {
	SlotOrSubslotPDSCH_Config_r15_PR_NOTHING,	/* No components present */
	SlotOrSubslotPDSCH_Config_r15_PR_release,
	SlotOrSubslotPDSCH_Config_r15_PR_setup
} SlotOrSubslotPDSCH_Config_r15_PR;
typedef enum SlotOrSubslotPDSCH_Config_r15__setup__altCQI_TableSTTI_r15 {
	SlotOrSubslotPDSCH_Config_r15__setup__altCQI_TableSTTI_r15_allSubframes	= 0,
	SlotOrSubslotPDSCH_Config_r15__setup__altCQI_TableSTTI_r15_csi_SubframeSet1	= 1,
	SlotOrSubslotPDSCH_Config_r15__setup__altCQI_TableSTTI_r15_csi_SubframeSet2	= 2,
	SlotOrSubslotPDSCH_Config_r15__setup__altCQI_TableSTTI_r15_spare1	= 3
} e_SlotOrSubslotPDSCH_Config_r15__setup__altCQI_TableSTTI_r15;
typedef enum SlotOrSubslotPDSCH_Config_r15__setup__altCQI_Table1024QAM_STTI_r15 {
	SlotOrSubslotPDSCH_Config_r15__setup__altCQI_Table1024QAM_STTI_r15_allSubframes	= 0,
	SlotOrSubslotPDSCH_Config_r15__setup__altCQI_Table1024QAM_STTI_r15_csi_SubframeSet1	= 1,
	SlotOrSubslotPDSCH_Config_r15__setup__altCQI_Table1024QAM_STTI_r15_csi_SubframeSet2	= 2,
	SlotOrSubslotPDSCH_Config_r15__setup__altCQI_Table1024QAM_STTI_r15_spare1	= 3
} e_SlotOrSubslotPDSCH_Config_r15__setup__altCQI_Table1024QAM_STTI_r15;
typedef enum SlotOrSubslotPDSCH_Config_r15__setup__resourceAllocation_r15 {
	SlotOrSubslotPDSCH_Config_r15__setup__resourceAllocation_r15_resourceAllocationType0	= 0,
	SlotOrSubslotPDSCH_Config_r15__setup__resourceAllocation_r15_resourceAllocationType2	= 1
} e_SlotOrSubslotPDSCH_Config_r15__setup__resourceAllocation_r15;
typedef enum SlotOrSubslotPDSCH_Config_r15__setup__tbsIndexAlt_STTI_r15 {
	SlotOrSubslotPDSCH_Config_r15__setup__tbsIndexAlt_STTI_r15_a33	= 0
} e_SlotOrSubslotPDSCH_Config_r15__setup__tbsIndexAlt_STTI_r15;
typedef enum SlotOrSubslotPDSCH_Config_r15__setup__tbsIndexAlt2_STTI_r15 {
	SlotOrSubslotPDSCH_Config_r15__setup__tbsIndexAlt2_STTI_r15_b33	= 0
} e_SlotOrSubslotPDSCH_Config_r15__setup__tbsIndexAlt2_STTI_r15;
typedef enum SlotOrSubslotPDSCH_Config_r15__setup__tbsIndexAlt3_STTI_r15 {
	SlotOrSubslotPDSCH_Config_r15__setup__tbsIndexAlt3_STTI_r15_a37	= 0
} e_SlotOrSubslotPDSCH_Config_r15__setup__tbsIndexAlt3_STTI_r15;

/* SlotOrSubslotPDSCH-Config-r15 */
typedef struct SlotOrSubslotPDSCH_Config_r15 {
	SlotOrSubslotPDSCH_Config_r15_PR present;
	union SlotOrSubslotPDSCH_Config_r15_u {
		NULL_t	 release;
		struct SlotOrSubslotPDSCH_Config_r15__setup {
			long	*altCQI_TableSTTI_r15;	/* OPTIONAL */
			long	*altCQI_Table1024QAM_STTI_r15;	/* OPTIONAL */
			long	*resourceAllocation_r15;	/* OPTIONAL */
			long	*tbsIndexAlt_STTI_r15;	/* OPTIONAL */
			long	*tbsIndexAlt2_STTI_r15;	/* OPTIONAL */
			long	*tbsIndexAlt3_STTI_r15;	/* OPTIONAL */
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SlotOrSubslotPDSCH_Config_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_altCQI_TableSTTI_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_altCQI_Table1024QAM_STTI_r15_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_resourceAllocation_r15_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_tbsIndexAlt_STTI_r15_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_tbsIndexAlt2_STTI_r15_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_tbsIndexAlt3_STTI_r15_21;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SlotOrSubslotPDSCH_Config_r15;
extern asn_CHOICE_specifics_t asn_SPC_SlotOrSubslotPDSCH_Config_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SlotOrSubslotPDSCH_Config_r15_1[2];
extern asn_per_constraints_t asn_PER_type_SlotOrSubslotPDSCH_Config_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SlotOrSubslotPDSCH_Config_r15_H_ */
#include <asn_internal.h>
