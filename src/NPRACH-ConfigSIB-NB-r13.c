/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "NPRACH-ConfigSIB-NB-r13.h"

#include "RSRP-ThresholdsNPRACH-InfoList-NB-r13.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_nprach_CP_Length_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_nprach_CP_Length_r13_value2enum_2[] = {
	{ 0,	8,	"us66dot7" },
	{ 1,	9,	"us266dot7" }
};
static const unsigned int asn_MAP_nprach_CP_Length_r13_enum2value_2[] = {
	1,	/* us266dot7(1) */
	0	/* us66dot7(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_nprach_CP_Length_r13_specs_2 = {
	asn_MAP_nprach_CP_Length_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_nprach_CP_Length_r13_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nprach_CP_Length_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nprach_CP_Length_r13_2 = {
	"nprach-CP-Length-r13",
	"nprach-CP-Length-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_nprach_CP_Length_r13_tags_2,
	sizeof(asn_DEF_nprach_CP_Length_r13_tags_2)
		/sizeof(asn_DEF_nprach_CP_Length_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_nprach_CP_Length_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_nprach_CP_Length_r13_tags_2)
		/sizeof(asn_DEF_nprach_CP_Length_r13_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_nprach_CP_Length_r13_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nprach_CP_Length_r13_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NPRACH_ConfigSIB_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NPRACH_ConfigSIB_NB_r13, nprach_CP_Length_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nprach_CP_Length_r13_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"nprach-CP-Length-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct NPRACH_ConfigSIB_NB_r13, rsrp_ThresholdsPrachInfoList_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_ThresholdsNPRACH_InfoList_NB_r13,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"rsrp-ThresholdsPrachInfoList-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NPRACH_ConfigSIB_NB_r13, nprach_ParametersList_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPRACH_ParametersList_NB_r13,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"nprach-ParametersList-r13"
		},
};
static const int asn_MAP_NPRACH_ConfigSIB_NB_r13_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_NPRACH_ConfigSIB_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NPRACH_ConfigSIB_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nprach-CP-Length-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rsrp-ThresholdsPrachInfoList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nprach-ParametersList-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_NPRACH_ConfigSIB_NB_r13_specs_1 = {
	sizeof(struct NPRACH_ConfigSIB_NB_r13),
	offsetof(struct NPRACH_ConfigSIB_NB_r13, _asn_ctx),
	asn_MAP_NPRACH_ConfigSIB_NB_r13_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NPRACH_ConfigSIB_NB_r13_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NPRACH_ConfigSIB_NB_r13 = {
	"NPRACH-ConfigSIB-NB-r13",
	"NPRACH-ConfigSIB-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_NPRACH_ConfigSIB_NB_r13_tags_1,
	sizeof(asn_DEF_NPRACH_ConfigSIB_NB_r13_tags_1)
		/sizeof(asn_DEF_NPRACH_ConfigSIB_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_NPRACH_ConfigSIB_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_NPRACH_ConfigSIB_NB_r13_tags_1)
		/sizeof(asn_DEF_NPRACH_ConfigSIB_NB_r13_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NPRACH_ConfigSIB_NB_r13_1,
	3,	/* Elements count */
	&asn_SPC_NPRACH_ConfigSIB_NB_r13_specs_1	/* Additional specs */
};

