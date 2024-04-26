/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_PhyLayerParameters_v1130_H_
#define	_PhyLayerParameters_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhyLayerParameters_v1130__crs_InterfHandl_r11 {
	PhyLayerParameters_v1130__crs_InterfHandl_r11_supported	= 0
} e_PhyLayerParameters_v1130__crs_InterfHandl_r11;
typedef enum PhyLayerParameters_v1130__ePDCCH_r11 {
	PhyLayerParameters_v1130__ePDCCH_r11_supported	= 0
} e_PhyLayerParameters_v1130__ePDCCH_r11;
typedef enum PhyLayerParameters_v1130__multiACK_CSI_Reporting_r11 {
	PhyLayerParameters_v1130__multiACK_CSI_Reporting_r11_supported	= 0
} e_PhyLayerParameters_v1130__multiACK_CSI_Reporting_r11;
typedef enum PhyLayerParameters_v1130__ss_CCH_InterfHandl_r11 {
	PhyLayerParameters_v1130__ss_CCH_InterfHandl_r11_supported	= 0
} e_PhyLayerParameters_v1130__ss_CCH_InterfHandl_r11;
typedef enum PhyLayerParameters_v1130__tdd_SpecialSubframe_r11 {
	PhyLayerParameters_v1130__tdd_SpecialSubframe_r11_supported	= 0
} e_PhyLayerParameters_v1130__tdd_SpecialSubframe_r11;
typedef enum PhyLayerParameters_v1130__txDiv_PUCCH1b_ChSelect_r11 {
	PhyLayerParameters_v1130__txDiv_PUCCH1b_ChSelect_r11_supported	= 0
} e_PhyLayerParameters_v1130__txDiv_PUCCH1b_ChSelect_r11;
typedef enum PhyLayerParameters_v1130__ul_CoMP_r11 {
	PhyLayerParameters_v1130__ul_CoMP_r11_supported	= 0
} e_PhyLayerParameters_v1130__ul_CoMP_r11;

/* PhyLayerParameters-v1130 */
typedef struct PhyLayerParameters_v1130 {
	long	*crs_InterfHandl_r11;	/* OPTIONAL */
	long	*ePDCCH_r11;	/* OPTIONAL */
	long	*multiACK_CSI_Reporting_r11;	/* OPTIONAL */
	long	*ss_CCH_InterfHandl_r11;	/* OPTIONAL */
	long	*tdd_SpecialSubframe_r11;	/* OPTIONAL */
	long	*txDiv_PUCCH1b_ChSelect_r11;	/* OPTIONAL */
	long	*ul_CoMP_r11;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhyLayerParameters_v1130_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_crs_InterfHandl_r11_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ePDCCH_r11_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_multiACK_CSI_Reporting_r11_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ss_CCH_InterfHandl_r11_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_tdd_SpecialSubframe_r11_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_txDiv_PUCCH1b_ChSelect_r11_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_CoMP_r11_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_PhyLayerParameters_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_PhyLayerParameters_v1130_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _PhyLayerParameters_v1130_H_ */
#include <asn_internal.h>
