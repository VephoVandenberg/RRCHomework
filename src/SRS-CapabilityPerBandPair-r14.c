/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "SRS-CapabilityPerBandPair-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_rf_RetuningTimeDL_r14_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_rf_RetuningTimeUL_r14_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_rf_RetuningTimeDL_r14_value2enum_3[] = {
	{ 0,	2,	"n0" },
	{ 1,	6,	"n0dot5" },
	{ 2,	2,	"n1" },
	{ 3,	6,	"n1dot5" },
	{ 4,	2,	"n2" },
	{ 5,	6,	"n2dot5" },
	{ 6,	2,	"n3" },
	{ 7,	6,	"n3dot5" },
	{ 8,	2,	"n4" },
	{ 9,	6,	"n4dot5" },
	{ 10,	2,	"n5" },
	{ 11,	6,	"n5dot5" },
	{ 12,	2,	"n6" },
	{ 13,	6,	"n6dot5" },
	{ 14,	2,	"n7" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_rf_RetuningTimeDL_r14_enum2value_3[] = {
	0,	/* n0(0) */
	1,	/* n0dot5(1) */
	2,	/* n1(2) */
	3,	/* n1dot5(3) */
	4,	/* n2(4) */
	5,	/* n2dot5(5) */
	6,	/* n3(6) */
	7,	/* n3dot5(7) */
	8,	/* n4(8) */
	9,	/* n4dot5(9) */
	10,	/* n5(10) */
	11,	/* n5dot5(11) */
	12,	/* n6(12) */
	13,	/* n6dot5(13) */
	14,	/* n7(14) */
	15	/* spare1(15) */
};
static const asn_INTEGER_specifics_t asn_SPC_rf_RetuningTimeDL_r14_specs_3 = {
	asn_MAP_rf_RetuningTimeDL_r14_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_rf_RetuningTimeDL_r14_enum2value_3,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rf_RetuningTimeDL_r14_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rf_RetuningTimeDL_r14_3 = {
	"rf-RetuningTimeDL-r14",
	"rf-RetuningTimeDL-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_rf_RetuningTimeDL_r14_tags_3,
	sizeof(asn_DEF_rf_RetuningTimeDL_r14_tags_3)
		/sizeof(asn_DEF_rf_RetuningTimeDL_r14_tags_3[0]) - 1, /* 1 */
	asn_DEF_rf_RetuningTimeDL_r14_tags_3,	/* Same as above */
	sizeof(asn_DEF_rf_RetuningTimeDL_r14_tags_3)
		/sizeof(asn_DEF_rf_RetuningTimeDL_r14_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_rf_RetuningTimeDL_r14_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rf_RetuningTimeDL_r14_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_rf_RetuningTimeUL_r14_value2enum_20[] = {
	{ 0,	2,	"n0" },
	{ 1,	6,	"n0dot5" },
	{ 2,	2,	"n1" },
	{ 3,	6,	"n1dot5" },
	{ 4,	2,	"n2" },
	{ 5,	6,	"n2dot5" },
	{ 6,	2,	"n3" },
	{ 7,	6,	"n3dot5" },
	{ 8,	2,	"n4" },
	{ 9,	6,	"n4dot5" },
	{ 10,	2,	"n5" },
	{ 11,	6,	"n5dot5" },
	{ 12,	2,	"n6" },
	{ 13,	6,	"n6dot5" },
	{ 14,	2,	"n7" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_rf_RetuningTimeUL_r14_enum2value_20[] = {
	0,	/* n0(0) */
	1,	/* n0dot5(1) */
	2,	/* n1(2) */
	3,	/* n1dot5(3) */
	4,	/* n2(4) */
	5,	/* n2dot5(5) */
	6,	/* n3(6) */
	7,	/* n3dot5(7) */
	8,	/* n4(8) */
	9,	/* n4dot5(9) */
	10,	/* n5(10) */
	11,	/* n5dot5(11) */
	12,	/* n6(12) */
	13,	/* n6dot5(13) */
	14,	/* n7(14) */
	15	/* spare1(15) */
};
static const asn_INTEGER_specifics_t asn_SPC_rf_RetuningTimeUL_r14_specs_20 = {
	asn_MAP_rf_RetuningTimeUL_r14_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_rf_RetuningTimeUL_r14_enum2value_20,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rf_RetuningTimeUL_r14_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rf_RetuningTimeUL_r14_20 = {
	"rf-RetuningTimeUL-r14",
	"rf-RetuningTimeUL-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_rf_RetuningTimeUL_r14_tags_20,
	sizeof(asn_DEF_rf_RetuningTimeUL_r14_tags_20)
		/sizeof(asn_DEF_rf_RetuningTimeUL_r14_tags_20[0]) - 1, /* 1 */
	asn_DEF_rf_RetuningTimeUL_r14_tags_20,	/* Same as above */
	sizeof(asn_DEF_rf_RetuningTimeUL_r14_tags_20)
		/sizeof(asn_DEF_rf_RetuningTimeUL_r14_tags_20[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_rf_RetuningTimeUL_r14_constr_20,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rf_RetuningTimeUL_r14_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_retuningInfo_2[] = {
	{ ATF_POINTER, 2, offsetof(struct SRS_CapabilityPerBandPair_r14__retuningInfo, rf_RetuningTimeDL_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rf_RetuningTimeDL_r14_3,
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
		"rf-RetuningTimeDL-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SRS_CapabilityPerBandPair_r14__retuningInfo, rf_RetuningTimeUL_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rf_RetuningTimeUL_r14_20,
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
		"rf-RetuningTimeUL-r14"
		},
};
static const int asn_MAP_retuningInfo_oms_2[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_retuningInfo_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_retuningInfo_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rf-RetuningTimeDL-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rf-RetuningTimeUL-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_retuningInfo_specs_2 = {
	sizeof(struct SRS_CapabilityPerBandPair_r14__retuningInfo),
	offsetof(struct SRS_CapabilityPerBandPair_r14__retuningInfo, _asn_ctx),
	asn_MAP_retuningInfo_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_retuningInfo_oms_2,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_retuningInfo_2 = {
	"retuningInfo",
	"retuningInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_retuningInfo_tags_2,
	sizeof(asn_DEF_retuningInfo_tags_2)
		/sizeof(asn_DEF_retuningInfo_tags_2[0]) - 1, /* 1 */
	asn_DEF_retuningInfo_tags_2,	/* Same as above */
	sizeof(asn_DEF_retuningInfo_tags_2)
		/sizeof(asn_DEF_retuningInfo_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_retuningInfo_2,
	2,	/* Elements count */
	&asn_SPC_retuningInfo_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SRS_CapabilityPerBandPair_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_CapabilityPerBandPair_r14, retuningInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_retuningInfo_2,
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
		"retuningInfo"
		},
};
static const ber_tlv_tag_t asn_DEF_SRS_CapabilityPerBandPair_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SRS_CapabilityPerBandPair_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* retuningInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_SRS_CapabilityPerBandPair_r14_specs_1 = {
	sizeof(struct SRS_CapabilityPerBandPair_r14),
	offsetof(struct SRS_CapabilityPerBandPair_r14, _asn_ctx),
	asn_MAP_SRS_CapabilityPerBandPair_r14_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SRS_CapabilityPerBandPair_r14 = {
	"SRS-CapabilityPerBandPair-r14",
	"SRS-CapabilityPerBandPair-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_SRS_CapabilityPerBandPair_r14_tags_1,
	sizeof(asn_DEF_SRS_CapabilityPerBandPair_r14_tags_1)
		/sizeof(asn_DEF_SRS_CapabilityPerBandPair_r14_tags_1[0]), /* 1 */
	asn_DEF_SRS_CapabilityPerBandPair_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SRS_CapabilityPerBandPair_r14_tags_1)
		/sizeof(asn_DEF_SRS_CapabilityPerBandPair_r14_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SRS_CapabilityPerBandPair_r14_1,
	1,	/* Elements count */
	&asn_SPC_SRS_CapabilityPerBandPair_r14_specs_1	/* Additional specs */
};

