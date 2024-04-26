/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_IDC_Config_r11_H_
#define	_IDC_Config_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <NULL.h>
#include "CandidateServingFreqListNR-r15.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IDC_Config_r11__idc_Indication_r11 {
	IDC_Config_r11__idc_Indication_r11_setup	= 0
} e_IDC_Config_r11__idc_Indication_r11;
typedef enum IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11 {
	IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11_n2	= 0,
	IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11_n5	= 1,
	IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11_n10	= 2,
	IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11_n15	= 3,
	IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11_n20	= 4,
	IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11_n30	= 5,
	IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11_spare2	= 6,
	IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11_spare1	= 7
} e_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11;
typedef enum IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11 {
	IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11_sf200	= 0,
	IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11_sf500	= 1,
	IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11_sf1000	= 2,
	IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11_sf2000	= 3,
	IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11_spare4	= 4,
	IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11_spare3	= 5,
	IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11_spare2	= 6,
	IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11_spare1	= 7
} e_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11;
typedef enum IDC_Config_r11__ext1__idc_Indication_UL_CA_r11 {
	IDC_Config_r11__ext1__idc_Indication_UL_CA_r11_setup	= 0
} e_IDC_Config_r11__ext1__idc_Indication_UL_CA_r11;
typedef enum IDC_Config_r11__ext2__idc_HardwareSharingIndication_r13 {
	IDC_Config_r11__ext2__idc_HardwareSharingIndication_r13_setup	= 0
} e_IDC_Config_r11__ext2__idc_HardwareSharingIndication_r13;
typedef enum IDC_Config_r11__ext3__idc_Indication_MRDC_r15_PR {
	IDC_Config_r11__ext3__idc_Indication_MRDC_r15_PR_NOTHING,	/* No components present */
	IDC_Config_r11__ext3__idc_Indication_MRDC_r15_PR_release,
	IDC_Config_r11__ext3__idc_Indication_MRDC_r15_PR_setup
} IDC_Config_r11__ext3__idc_Indication_MRDC_r15_PR;

/* IDC-Config-r11 */
typedef struct IDC_Config_r11 {
	long	*idc_Indication_r11;	/* OPTIONAL */
	struct IDC_Config_r11__autonomousDenialParameters_r11 {
		long	 autonomousDenialSubframes_r11;
		long	 autonomousDenialValidity_r11;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *autonomousDenialParameters_r11;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct IDC_Config_r11__ext1 {
		long	*idc_Indication_UL_CA_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct IDC_Config_r11__ext2 {
		long	*idc_HardwareSharingIndication_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct IDC_Config_r11__ext3 {
		struct IDC_Config_r11__ext3__idc_Indication_MRDC_r15 {
			IDC_Config_r11__ext3__idc_Indication_MRDC_r15_PR present;
			union IDC_Config_r11__ext3__idc_Indication_MRDC_r15_u {
				NULL_t	 release;
				CandidateServingFreqListNR_r15_t	 setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *idc_Indication_MRDC_r15;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IDC_Config_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_idc_Indication_r11_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_autonomousDenialSubframes_r11_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_autonomousDenialValidity_r11_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_idc_Indication_UL_CA_r11_25;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_idc_HardwareSharingIndication_r13_28;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IDC_Config_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_IDC_Config_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_IDC_Config_r11_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _IDC_Config_r11_H_ */
#include <asn_internal.h>
