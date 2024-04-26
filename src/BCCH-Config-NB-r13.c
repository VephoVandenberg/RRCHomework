/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "BCCH-Config-NB-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_modificationPeriodCoeff_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_modificationPeriodCoeff_r13_value2enum_2[] = {
	{ 0,	3,	"n16" },
	{ 1,	3,	"n32" },
	{ 2,	3,	"n64" },
	{ 3,	4,	"n128" }
};
static const unsigned int asn_MAP_modificationPeriodCoeff_r13_enum2value_2[] = {
	3,	/* n128(3) */
	0,	/* n16(0) */
	1,	/* n32(1) */
	2	/* n64(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_modificationPeriodCoeff_r13_specs_2 = {
	asn_MAP_modificationPeriodCoeff_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_modificationPeriodCoeff_r13_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_modificationPeriodCoeff_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modificationPeriodCoeff_r13_2 = {
	"modificationPeriodCoeff-r13",
	"modificationPeriodCoeff-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_modificationPeriodCoeff_r13_tags_2,
	sizeof(asn_DEF_modificationPeriodCoeff_r13_tags_2)
		/sizeof(asn_DEF_modificationPeriodCoeff_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_modificationPeriodCoeff_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_modificationPeriodCoeff_r13_tags_2)
		/sizeof(asn_DEF_modificationPeriodCoeff_r13_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_modificationPeriodCoeff_r13_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_modificationPeriodCoeff_r13_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BCCH_Config_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BCCH_Config_NB_r13, modificationPeriodCoeff_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_modificationPeriodCoeff_r13_2,
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
		"modificationPeriodCoeff-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_BCCH_Config_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BCCH_Config_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* modificationPeriodCoeff-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_BCCH_Config_NB_r13_specs_1 = {
	sizeof(struct BCCH_Config_NB_r13),
	offsetof(struct BCCH_Config_NB_r13, _asn_ctx),
	asn_MAP_BCCH_Config_NB_r13_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BCCH_Config_NB_r13 = {
	"BCCH-Config-NB-r13",
	"BCCH-Config-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_BCCH_Config_NB_r13_tags_1,
	sizeof(asn_DEF_BCCH_Config_NB_r13_tags_1)
		/sizeof(asn_DEF_BCCH_Config_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_BCCH_Config_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_BCCH_Config_NB_r13_tags_1)
		/sizeof(asn_DEF_BCCH_Config_NB_r13_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_BCCH_Config_NB_r13_1,
	1,	/* Elements count */
	&asn_SPC_BCCH_Config_NB_r13_specs_1	/* Additional specs */
};

