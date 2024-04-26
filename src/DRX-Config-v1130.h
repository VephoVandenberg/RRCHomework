/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_DRX_Config_v1130_H_
#define	_DRX_Config_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DRX_Config_v1130__drx_RetransmissionTimer_v1130 {
	DRX_Config_v1130__drx_RetransmissionTimer_v1130_psf0_v1130	= 0
} e_DRX_Config_v1130__drx_RetransmissionTimer_v1130;
typedef enum DRX_Config_v1130__longDRX_CycleStartOffset_v1130_PR {
	DRX_Config_v1130__longDRX_CycleStartOffset_v1130_PR_NOTHING,	/* No components present */
	DRX_Config_v1130__longDRX_CycleStartOffset_v1130_PR_sf60_v1130,
	DRX_Config_v1130__longDRX_CycleStartOffset_v1130_PR_sf70_v1130
} DRX_Config_v1130__longDRX_CycleStartOffset_v1130_PR;
typedef enum DRX_Config_v1130__shortDRX_Cycle_v1130 {
	DRX_Config_v1130__shortDRX_Cycle_v1130_sf4_v1130	= 0
} e_DRX_Config_v1130__shortDRX_Cycle_v1130;

/* DRX-Config-v1130 */
typedef struct DRX_Config_v1130 {
	long	*drx_RetransmissionTimer_v1130;	/* OPTIONAL */
	struct DRX_Config_v1130__longDRX_CycleStartOffset_v1130 {
		DRX_Config_v1130__longDRX_CycleStartOffset_v1130_PR present;
		union DRX_Config_v1130__longDRX_CycleStartOffset_v1130_u {
			long	 sf60_v1130;
			long	 sf70_v1130;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *longDRX_CycleStartOffset_v1130;
	long	*shortDRX_Cycle_v1130;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRX_Config_v1130_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_drx_RetransmissionTimer_v1130_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_shortDRX_Cycle_v1130_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DRX_Config_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_DRX_Config_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_DRX_Config_v1130_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _DRX_Config_v1130_H_ */
#include <asn_internal.h>
