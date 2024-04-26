/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "AffectedCarrierFreqCombInfoMRDC-r15.h"

#include "AffectedCarrierFreqComb-r15.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_interferenceDirectionMRDC_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_interferenceDirectionMRDC_r15_value2enum_3[] = {
	{ 0,	8,	"eutra-nr" },
	{ 1,	2,	"nr" },
	{ 2,	5,	"other" },
	{ 3,	14,	"eutra-nr-other" },
	{ 4,	8,	"nr-other" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_interferenceDirectionMRDC_r15_enum2value_3[] = {
	0,	/* eutra-nr(0) */
	3,	/* eutra-nr-other(3) */
	1,	/* nr(1) */
	4,	/* nr-other(4) */
	2,	/* other(2) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5	/* spare3(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_interferenceDirectionMRDC_r15_specs_3 = {
	asn_MAP_interferenceDirectionMRDC_r15_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_interferenceDirectionMRDC_r15_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_interferenceDirectionMRDC_r15_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_interferenceDirectionMRDC_r15_3 = {
	"interferenceDirectionMRDC-r15",
	"interferenceDirectionMRDC-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_interferenceDirectionMRDC_r15_tags_3,
	sizeof(asn_DEF_interferenceDirectionMRDC_r15_tags_3)
		/sizeof(asn_DEF_interferenceDirectionMRDC_r15_tags_3[0]) - 1, /* 1 */
	asn_DEF_interferenceDirectionMRDC_r15_tags_3,	/* Same as above */
	sizeof(asn_DEF_interferenceDirectionMRDC_r15_tags_3)
		/sizeof(asn_DEF_interferenceDirectionMRDC_r15_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_interferenceDirectionMRDC_r15_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_interferenceDirectionMRDC_r15_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_affectedCarrierFreqCombMRDC_r15_12[] = {
	{ ATF_POINTER, 1, offsetof(struct AffectedCarrierFreqCombInfoMRDC_r15__affectedCarrierFreqCombMRDC_r15, affectedCarrierFreqCombEUTRA_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AffectedCarrierFreqComb_r15,
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
		"affectedCarrierFreqCombEUTRA-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AffectedCarrierFreqCombInfoMRDC_r15__affectedCarrierFreqCombMRDC_r15, affectedCarrierFreqCombNR_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AffectedCarrierFreqCombNR_r15,
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
		"affectedCarrierFreqCombNR-r15"
		},
};
static const int asn_MAP_affectedCarrierFreqCombMRDC_r15_oms_12[] = { 0 };
static const ber_tlv_tag_t asn_DEF_affectedCarrierFreqCombMRDC_r15_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_affectedCarrierFreqCombMRDC_r15_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* affectedCarrierFreqCombEUTRA-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* affectedCarrierFreqCombNR-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_affectedCarrierFreqCombMRDC_r15_specs_12 = {
	sizeof(struct AffectedCarrierFreqCombInfoMRDC_r15__affectedCarrierFreqCombMRDC_r15),
	offsetof(struct AffectedCarrierFreqCombInfoMRDC_r15__affectedCarrierFreqCombMRDC_r15, _asn_ctx),
	asn_MAP_affectedCarrierFreqCombMRDC_r15_tag2el_12,
	2,	/* Count of tags in the map */
	asn_MAP_affectedCarrierFreqCombMRDC_r15_oms_12,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_affectedCarrierFreqCombMRDC_r15_12 = {
	"affectedCarrierFreqCombMRDC-r15",
	"affectedCarrierFreqCombMRDC-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_affectedCarrierFreqCombMRDC_r15_tags_12,
	sizeof(asn_DEF_affectedCarrierFreqCombMRDC_r15_tags_12)
		/sizeof(asn_DEF_affectedCarrierFreqCombMRDC_r15_tags_12[0]) - 1, /* 1 */
	asn_DEF_affectedCarrierFreqCombMRDC_r15_tags_12,	/* Same as above */
	sizeof(asn_DEF_affectedCarrierFreqCombMRDC_r15_tags_12)
		/sizeof(asn_DEF_affectedCarrierFreqCombMRDC_r15_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_affectedCarrierFreqCombMRDC_r15_12,
	2,	/* Elements count */
	&asn_SPC_affectedCarrierFreqCombMRDC_r15_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_AffectedCarrierFreqCombInfoMRDC_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AffectedCarrierFreqCombInfoMRDC_r15, victimSystemType_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VictimSystemType_r11,
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
		"victimSystemType-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AffectedCarrierFreqCombInfoMRDC_r15, interferenceDirectionMRDC_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_interferenceDirectionMRDC_r15_3,
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
		"interferenceDirectionMRDC-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct AffectedCarrierFreqCombInfoMRDC_r15, affectedCarrierFreqCombMRDC_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_affectedCarrierFreqCombMRDC_r15_12,
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
		"affectedCarrierFreqCombMRDC-r15"
		},
};
static const int asn_MAP_AffectedCarrierFreqCombInfoMRDC_r15_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_AffectedCarrierFreqCombInfoMRDC_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AffectedCarrierFreqCombInfoMRDC_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* victimSystemType-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* interferenceDirectionMRDC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* affectedCarrierFreqCombMRDC-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_AffectedCarrierFreqCombInfoMRDC_r15_specs_1 = {
	sizeof(struct AffectedCarrierFreqCombInfoMRDC_r15),
	offsetof(struct AffectedCarrierFreqCombInfoMRDC_r15, _asn_ctx),
	asn_MAP_AffectedCarrierFreqCombInfoMRDC_r15_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_AffectedCarrierFreqCombInfoMRDC_r15_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AffectedCarrierFreqCombInfoMRDC_r15 = {
	"AffectedCarrierFreqCombInfoMRDC-r15",
	"AffectedCarrierFreqCombInfoMRDC-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_AffectedCarrierFreqCombInfoMRDC_r15_tags_1,
	sizeof(asn_DEF_AffectedCarrierFreqCombInfoMRDC_r15_tags_1)
		/sizeof(asn_DEF_AffectedCarrierFreqCombInfoMRDC_r15_tags_1[0]), /* 1 */
	asn_DEF_AffectedCarrierFreqCombInfoMRDC_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_AffectedCarrierFreqCombInfoMRDC_r15_tags_1)
		/sizeof(asn_DEF_AffectedCarrierFreqCombInfoMRDC_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_AffectedCarrierFreqCombInfoMRDC_r15_1,
	3,	/* Elements count */
	&asn_SPC_AffectedCarrierFreqCombInfoMRDC_r15_specs_1	/* Additional specs */
};

