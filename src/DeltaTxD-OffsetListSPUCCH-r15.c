/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "DeltaTxD-OffsetListSPUCCH-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_deltaTxD_OffsetSPUCCH_Format1_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_deltaTxD_OffsetSPUCCH_Format1a_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_deltaTxD_OffsetSPUCCH_Format1b_r15_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_deltaTxD_OffsetSPUCCH_Format3_r15_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_deltaTxD_OffsetSPUCCH_Format1_r15_value2enum_2[] = {
	{ 0,	3,	"dB0" },
	{ 1,	4,	"dB-2" }
};
static const unsigned int asn_MAP_deltaTxD_OffsetSPUCCH_Format1_r15_enum2value_2[] = {
	1,	/* dB-2(1) */
	0	/* dB0(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_deltaTxD_OffsetSPUCCH_Format1_r15_specs_2 = {
	asn_MAP_deltaTxD_OffsetSPUCCH_Format1_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_deltaTxD_OffsetSPUCCH_Format1_r15_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_deltaTxD_OffsetSPUCCH_Format1_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deltaTxD_OffsetSPUCCH_Format1_r15_2 = {
	"deltaTxD-OffsetSPUCCH-Format1-r15",
	"deltaTxD-OffsetSPUCCH-Format1-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_deltaTxD_OffsetSPUCCH_Format1_r15_tags_2,
	sizeof(asn_DEF_deltaTxD_OffsetSPUCCH_Format1_r15_tags_2)
		/sizeof(asn_DEF_deltaTxD_OffsetSPUCCH_Format1_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_deltaTxD_OffsetSPUCCH_Format1_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_deltaTxD_OffsetSPUCCH_Format1_r15_tags_2)
		/sizeof(asn_DEF_deltaTxD_OffsetSPUCCH_Format1_r15_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_deltaTxD_OffsetSPUCCH_Format1_r15_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deltaTxD_OffsetSPUCCH_Format1_r15_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_deltaTxD_OffsetSPUCCH_Format1a_r15_value2enum_5[] = {
	{ 0,	3,	"dB0" },
	{ 1,	4,	"dB-2" }
};
static const unsigned int asn_MAP_deltaTxD_OffsetSPUCCH_Format1a_r15_enum2value_5[] = {
	1,	/* dB-2(1) */
	0	/* dB0(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_deltaTxD_OffsetSPUCCH_Format1a_r15_specs_5 = {
	asn_MAP_deltaTxD_OffsetSPUCCH_Format1a_r15_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_deltaTxD_OffsetSPUCCH_Format1a_r15_enum2value_5,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_deltaTxD_OffsetSPUCCH_Format1a_r15_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deltaTxD_OffsetSPUCCH_Format1a_r15_5 = {
	"deltaTxD-OffsetSPUCCH-Format1a-r15",
	"deltaTxD-OffsetSPUCCH-Format1a-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_deltaTxD_OffsetSPUCCH_Format1a_r15_tags_5,
	sizeof(asn_DEF_deltaTxD_OffsetSPUCCH_Format1a_r15_tags_5)
		/sizeof(asn_DEF_deltaTxD_OffsetSPUCCH_Format1a_r15_tags_5[0]) - 1, /* 1 */
	asn_DEF_deltaTxD_OffsetSPUCCH_Format1a_r15_tags_5,	/* Same as above */
	sizeof(asn_DEF_deltaTxD_OffsetSPUCCH_Format1a_r15_tags_5)
		/sizeof(asn_DEF_deltaTxD_OffsetSPUCCH_Format1a_r15_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_deltaTxD_OffsetSPUCCH_Format1a_r15_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deltaTxD_OffsetSPUCCH_Format1a_r15_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_deltaTxD_OffsetSPUCCH_Format1b_r15_value2enum_8[] = {
	{ 0,	3,	"dB0" },
	{ 1,	4,	"dB-2" }
};
static const unsigned int asn_MAP_deltaTxD_OffsetSPUCCH_Format1b_r15_enum2value_8[] = {
	1,	/* dB-2(1) */
	0	/* dB0(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_deltaTxD_OffsetSPUCCH_Format1b_r15_specs_8 = {
	asn_MAP_deltaTxD_OffsetSPUCCH_Format1b_r15_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_deltaTxD_OffsetSPUCCH_Format1b_r15_enum2value_8,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_deltaTxD_OffsetSPUCCH_Format1b_r15_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deltaTxD_OffsetSPUCCH_Format1b_r15_8 = {
	"deltaTxD-OffsetSPUCCH-Format1b-r15",
	"deltaTxD-OffsetSPUCCH-Format1b-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_deltaTxD_OffsetSPUCCH_Format1b_r15_tags_8,
	sizeof(asn_DEF_deltaTxD_OffsetSPUCCH_Format1b_r15_tags_8)
		/sizeof(asn_DEF_deltaTxD_OffsetSPUCCH_Format1b_r15_tags_8[0]) - 1, /* 1 */
	asn_DEF_deltaTxD_OffsetSPUCCH_Format1b_r15_tags_8,	/* Same as above */
	sizeof(asn_DEF_deltaTxD_OffsetSPUCCH_Format1b_r15_tags_8)
		/sizeof(asn_DEF_deltaTxD_OffsetSPUCCH_Format1b_r15_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_deltaTxD_OffsetSPUCCH_Format1b_r15_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deltaTxD_OffsetSPUCCH_Format1b_r15_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_deltaTxD_OffsetSPUCCH_Format3_r15_value2enum_11[] = {
	{ 0,	3,	"dB0" },
	{ 1,	4,	"dB-2" }
};
static const unsigned int asn_MAP_deltaTxD_OffsetSPUCCH_Format3_r15_enum2value_11[] = {
	1,	/* dB-2(1) */
	0	/* dB0(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_deltaTxD_OffsetSPUCCH_Format3_r15_specs_11 = {
	asn_MAP_deltaTxD_OffsetSPUCCH_Format3_r15_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_deltaTxD_OffsetSPUCCH_Format3_r15_enum2value_11,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_deltaTxD_OffsetSPUCCH_Format3_r15_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deltaTxD_OffsetSPUCCH_Format3_r15_11 = {
	"deltaTxD-OffsetSPUCCH-Format3-r15",
	"deltaTxD-OffsetSPUCCH-Format3-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_deltaTxD_OffsetSPUCCH_Format3_r15_tags_11,
	sizeof(asn_DEF_deltaTxD_OffsetSPUCCH_Format3_r15_tags_11)
		/sizeof(asn_DEF_deltaTxD_OffsetSPUCCH_Format3_r15_tags_11[0]) - 1, /* 1 */
	asn_DEF_deltaTxD_OffsetSPUCCH_Format3_r15_tags_11,	/* Same as above */
	sizeof(asn_DEF_deltaTxD_OffsetSPUCCH_Format3_r15_tags_11)
		/sizeof(asn_DEF_deltaTxD_OffsetSPUCCH_Format3_r15_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_deltaTxD_OffsetSPUCCH_Format3_r15_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deltaTxD_OffsetSPUCCH_Format3_r15_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DeltaTxD_OffsetListSPUCCH_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DeltaTxD_OffsetListSPUCCH_r15, deltaTxD_OffsetSPUCCH_Format1_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deltaTxD_OffsetSPUCCH_Format1_r15_2,
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
		"deltaTxD-OffsetSPUCCH-Format1-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DeltaTxD_OffsetListSPUCCH_r15, deltaTxD_OffsetSPUCCH_Format1a_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deltaTxD_OffsetSPUCCH_Format1a_r15_5,
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
		"deltaTxD-OffsetSPUCCH-Format1a-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DeltaTxD_OffsetListSPUCCH_r15, deltaTxD_OffsetSPUCCH_Format1b_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deltaTxD_OffsetSPUCCH_Format1b_r15_8,
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
		"deltaTxD-OffsetSPUCCH-Format1b-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DeltaTxD_OffsetListSPUCCH_r15, deltaTxD_OffsetSPUCCH_Format3_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deltaTxD_OffsetSPUCCH_Format3_r15_11,
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
		"deltaTxD-OffsetSPUCCH-Format3-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_DeltaTxD_OffsetListSPUCCH_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DeltaTxD_OffsetListSPUCCH_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* deltaTxD-OffsetSPUCCH-Format1-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* deltaTxD-OffsetSPUCCH-Format1a-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* deltaTxD-OffsetSPUCCH-Format1b-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* deltaTxD-OffsetSPUCCH-Format3-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_DeltaTxD_OffsetListSPUCCH_r15_specs_1 = {
	sizeof(struct DeltaTxD_OffsetListSPUCCH_r15),
	offsetof(struct DeltaTxD_OffsetListSPUCCH_r15, _asn_ctx),
	asn_MAP_DeltaTxD_OffsetListSPUCCH_r15_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DeltaTxD_OffsetListSPUCCH_r15 = {
	"DeltaTxD-OffsetListSPUCCH-r15",
	"DeltaTxD-OffsetListSPUCCH-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_DeltaTxD_OffsetListSPUCCH_r15_tags_1,
	sizeof(asn_DEF_DeltaTxD_OffsetListSPUCCH_r15_tags_1)
		/sizeof(asn_DEF_DeltaTxD_OffsetListSPUCCH_r15_tags_1[0]), /* 1 */
	asn_DEF_DeltaTxD_OffsetListSPUCCH_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_DeltaTxD_OffsetListSPUCCH_r15_tags_1)
		/sizeof(asn_DEF_DeltaTxD_OffsetListSPUCCH_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_DeltaTxD_OffsetListSPUCCH_r15_1,
	4,	/* Elements count */
	&asn_SPC_DeltaTxD_OffsetListSPUCCH_r15_specs_1	/* Additional specs */
};

