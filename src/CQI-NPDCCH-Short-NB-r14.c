/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "CQI-NPDCCH-Short-NB-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_CQI_NPDCCH_Short_NB_r14_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_CQI_NPDCCH_Short_NB_r14_value2enum_1[] = {
	{ 0,	14,	"noMeasurements" },
	{ 1,	14,	"candidateRep-1" },
	{ 2,	14,	"candidateRep-2" },
	{ 3,	14,	"candidateRep-3" }
};
static const unsigned int asn_MAP_CQI_NPDCCH_Short_NB_r14_enum2value_1[] = {
	1,	/* candidateRep-1(1) */
	2,	/* candidateRep-2(2) */
	3,	/* candidateRep-3(3) */
	0	/* noMeasurements(0) */
};
const asn_INTEGER_specifics_t asn_SPC_CQI_NPDCCH_Short_NB_r14_specs_1 = {
	asn_MAP_CQI_NPDCCH_Short_NB_r14_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_CQI_NPDCCH_Short_NB_r14_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_CQI_NPDCCH_Short_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_CQI_NPDCCH_Short_NB_r14 = {
	"CQI-NPDCCH-Short-NB-r14",
	"CQI-NPDCCH-Short-NB-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_CQI_NPDCCH_Short_NB_r14_tags_1,
	sizeof(asn_DEF_CQI_NPDCCH_Short_NB_r14_tags_1)
		/sizeof(asn_DEF_CQI_NPDCCH_Short_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_CQI_NPDCCH_Short_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_CQI_NPDCCH_Short_NB_r14_tags_1)
		/sizeof(asn_DEF_CQI_NPDCCH_Short_NB_r14_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_CQI_NPDCCH_Short_NB_r14_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_CQI_NPDCCH_Short_NB_r14_specs_1	/* Additional specs */
};
