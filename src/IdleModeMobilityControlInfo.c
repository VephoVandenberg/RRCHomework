/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "IdleModeMobilityControlInfo.h"

#include "FreqPriorityListEUTRA.h"
#include "FreqsPriorityListGERAN.h"
#include "FreqPriorityListUTRA-FDD.h"
#include "FreqPriorityListUTRA-TDD.h"
#include "BandClassPriorityListHRPD.h"
#include "BandClassPriorityList1XRTT.h"
#include "FreqPriorityListExtEUTRA-r12.h"
#include "FreqPriorityListEUTRA-v1310.h"
#include "FreqPriorityListExtEUTRA-v1310.h"
#include "FreqPriorityListNR-r15.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_t320_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_t320_value2enum_8[] = {
	{ 0,	4,	"min5" },
	{ 1,	5,	"min10" },
	{ 2,	5,	"min20" },
	{ 3,	5,	"min30" },
	{ 4,	5,	"min60" },
	{ 5,	6,	"min120" },
	{ 6,	6,	"min180" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_t320_enum2value_8[] = {
	1,	/* min10(1) */
	5,	/* min120(5) */
	6,	/* min180(6) */
	2,	/* min20(2) */
	3,	/* min30(3) */
	0,	/* min5(0) */
	4,	/* min60(4) */
	7	/* spare1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_t320_specs_8 = {
	asn_MAP_t320_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_t320_enum2value_8,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_t320_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t320_8 = {
	"t320",
	"t320",
	&asn_OP_NativeEnumerated,
	asn_DEF_t320_tags_8,
	sizeof(asn_DEF_t320_tags_8)
		/sizeof(asn_DEF_t320_tags_8[0]) - 1, /* 1 */
	asn_DEF_t320_tags_8,	/* Same as above */
	sizeof(asn_DEF_t320_tags_8)
		/sizeof(asn_DEF_t320_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_t320_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t320_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_18[] = {
	{ ATF_POINTER, 1, offsetof(struct IdleModeMobilityControlInfo__ext1, freqPriorityListExtEUTRA_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqPriorityListExtEUTRA_r12,
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
		"freqPriorityListExtEUTRA-r12"
		},
};
static const int asn_MAP_ext1_oms_18[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* freqPriorityListExtEUTRA-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_18 = {
	sizeof(struct IdleModeMobilityControlInfo__ext1),
	offsetof(struct IdleModeMobilityControlInfo__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_18,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_18,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_18 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_18,
	sizeof(asn_DEF_ext1_tags_18)
		/sizeof(asn_DEF_ext1_tags_18[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_18,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_18)
		/sizeof(asn_DEF_ext1_tags_18[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext1_18,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_20[] = {
	{ ATF_POINTER, 2, offsetof(struct IdleModeMobilityControlInfo__ext2, freqPriorityListEUTRA_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqPriorityListEUTRA_v1310,
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
		"freqPriorityListEUTRA-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct IdleModeMobilityControlInfo__ext2, freqPriorityListExtEUTRA_v1310),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqPriorityListExtEUTRA_v1310,
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
		"freqPriorityListExtEUTRA-v1310"
		},
};
static const int asn_MAP_ext2_oms_20[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* freqPriorityListEUTRA-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* freqPriorityListExtEUTRA-v1310 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_20 = {
	sizeof(struct IdleModeMobilityControlInfo__ext2),
	offsetof(struct IdleModeMobilityControlInfo__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_20,
	2,	/* Count of tags in the map */
	asn_MAP_ext2_oms_20,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_20 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_20,
	sizeof(asn_DEF_ext2_tags_20)
		/sizeof(asn_DEF_ext2_tags_20[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_20,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_20)
		/sizeof(asn_DEF_ext2_tags_20[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext2_20,
	2,	/* Elements count */
	&asn_SPC_ext2_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_23[] = {
	{ ATF_POINTER, 1, offsetof(struct IdleModeMobilityControlInfo__ext3, freqPriorityListNR_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqPriorityListNR_r15,
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
		"freqPriorityListNR-r15"
		},
};
static const int asn_MAP_ext3_oms_23[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext3_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_23[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* freqPriorityListNR-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_23 = {
	sizeof(struct IdleModeMobilityControlInfo__ext3),
	offsetof(struct IdleModeMobilityControlInfo__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_23,
	1,	/* Count of tags in the map */
	asn_MAP_ext3_oms_23,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_23 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_ext3_tags_23,
	sizeof(asn_DEF_ext3_tags_23)
		/sizeof(asn_DEF_ext3_tags_23[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_23,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_23)
		/sizeof(asn_DEF_ext3_tags_23[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext3_23,
	1,	/* Elements count */
	&asn_SPC_ext3_specs_23	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_IdleModeMobilityControlInfo_1[] = {
	{ ATF_POINTER, 10, offsetof(struct IdleModeMobilityControlInfo, freqPriorityListEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqPriorityListEUTRA,
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
		"freqPriorityListEUTRA"
		},
	{ ATF_POINTER, 9, offsetof(struct IdleModeMobilityControlInfo, freqPriorityListGERAN),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqsPriorityListGERAN,
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
		"freqPriorityListGERAN"
		},
	{ ATF_POINTER, 8, offsetof(struct IdleModeMobilityControlInfo, freqPriorityListUTRA_FDD),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqPriorityListUTRA_FDD,
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
		"freqPriorityListUTRA-FDD"
		},
	{ ATF_POINTER, 7, offsetof(struct IdleModeMobilityControlInfo, freqPriorityListUTRA_TDD),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqPriorityListUTRA_TDD,
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
		"freqPriorityListUTRA-TDD"
		},
	{ ATF_POINTER, 6, offsetof(struct IdleModeMobilityControlInfo, bandClassPriorityListHRPD),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandClassPriorityListHRPD,
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
		"bandClassPriorityListHRPD"
		},
	{ ATF_POINTER, 5, offsetof(struct IdleModeMobilityControlInfo, bandClassPriorityList1XRTT),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandClassPriorityList1XRTT,
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
		"bandClassPriorityList1XRTT"
		},
	{ ATF_POINTER, 4, offsetof(struct IdleModeMobilityControlInfo, t320),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t320_8,
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
		"t320"
		},
	{ ATF_POINTER, 3, offsetof(struct IdleModeMobilityControlInfo, ext1),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_ext1_18,
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
		"ext1"
		},
	{ ATF_POINTER, 2, offsetof(struct IdleModeMobilityControlInfo, ext2),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_ext2_20,
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
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct IdleModeMobilityControlInfo, ext3),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_ext3_23,
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
		"ext3"
		},
};
static const int asn_MAP_IdleModeMobilityControlInfo_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_IdleModeMobilityControlInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IdleModeMobilityControlInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* freqPriorityListEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* freqPriorityListGERAN */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* freqPriorityListUTRA-FDD */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* freqPriorityListUTRA-TDD */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* bandClassPriorityListHRPD */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* bandClassPriorityList1XRTT */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* t320 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* ext3 */
};
asn_SEQUENCE_specifics_t asn_SPC_IdleModeMobilityControlInfo_specs_1 = {
	sizeof(struct IdleModeMobilityControlInfo),
	offsetof(struct IdleModeMobilityControlInfo, _asn_ctx),
	asn_MAP_IdleModeMobilityControlInfo_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_IdleModeMobilityControlInfo_oms_1,	/* Optional members */
	7, 3,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_IdleModeMobilityControlInfo = {
	"IdleModeMobilityControlInfo",
	"IdleModeMobilityControlInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_IdleModeMobilityControlInfo_tags_1,
	sizeof(asn_DEF_IdleModeMobilityControlInfo_tags_1)
		/sizeof(asn_DEF_IdleModeMobilityControlInfo_tags_1[0]), /* 1 */
	asn_DEF_IdleModeMobilityControlInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_IdleModeMobilityControlInfo_tags_1)
		/sizeof(asn_DEF_IdleModeMobilityControlInfo_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_IdleModeMobilityControlInfo_1,
	10,	/* Elements count */
	&asn_SPC_IdleModeMobilityControlInfo_specs_1	/* Additional specs */
};

