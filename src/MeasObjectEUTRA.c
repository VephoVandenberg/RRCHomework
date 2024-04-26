/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "MeasObjectEUTRA.h"

#include "CellIndexList.h"
#include "CellsToAddModList.h"
#include "BlackCellsToAddModList.h"
#include "MeasSubframePatternConfigNeigh-r10.h"
#include "AltTTT-CellsToAddModList-r12.h"
#include "MeasDS-Config-r12.h"
#include "WhiteCellsToAddModList-r13.h"
#include "RMTC-Config-r13.h"
#include "Tx-ResourcePoolMeasList-r14.h"
#include "MeasSensing-Config-r15.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_setup_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_t312_r12_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static int asn_DFL_6_cmp_15(const void *sptr) {
	const Q_OffsetRange_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 15 */
	return (*st != 15);
}
static int asn_DFL_6_set_15(void **sptr) {
	Q_OffsetRange_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 15 */
	*st = 15;
	return 0;
}
static asn_TYPE_member_t asn_MBR_ext1_13[] = {
	{ ATF_POINTER, 2, offsetof(struct MeasObjectEUTRA__ext1, measCycleSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasCycleSCell_r10,
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
		"measCycleSCell-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectEUTRA__ext1, measSubframePatternConfigNeigh_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasSubframePatternConfigNeigh_r10,
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
		"measSubframePatternConfigNeigh-r10"
		},
};
static const int asn_MAP_ext1_oms_13[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measCycleSCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measSubframePatternConfigNeigh-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_13 = {
	sizeof(struct MeasObjectEUTRA__ext1),
	offsetof(struct MeasObjectEUTRA__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_13,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_13,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_13 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_13,
	sizeof(asn_DEF_ext1_tags_13)
		/sizeof(asn_DEF_ext1_tags_13[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_13,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_13)
		/sizeof(asn_DEF_ext1_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext1_13,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_16[] = {
	{ ATF_POINTER, 1, offsetof(struct MeasObjectEUTRA__ext2, widebandRSRQ_Meas_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"widebandRSRQ-Meas-r11"
		},
};
static const int asn_MAP_ext2_oms_16[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* widebandRSRQ-Meas-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_16 = {
	sizeof(struct MeasObjectEUTRA__ext2),
	offsetof(struct MeasObjectEUTRA__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_16,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_16,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_16 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_16,
	sizeof(asn_DEF_ext2_tags_16)
		/sizeof(asn_DEF_ext2_tags_16[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_16,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_16)
		/sizeof(asn_DEF_ext2_tags_16[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext2_16,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_16	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_setup_value2enum_23[] = {
	{ 0,	3,	"ms0" },
	{ 1,	4,	"ms50" },
	{ 2,	5,	"ms100" },
	{ 3,	5,	"ms200" },
	{ 4,	5,	"ms300" },
	{ 5,	5,	"ms400" },
	{ 6,	5,	"ms500" },
	{ 7,	6,	"ms1000" }
};
static const unsigned int asn_MAP_setup_enum2value_23[] = {
	0,	/* ms0(0) */
	2,	/* ms100(2) */
	7,	/* ms1000(7) */
	3,	/* ms200(3) */
	4,	/* ms300(4) */
	5,	/* ms400(5) */
	1,	/* ms50(1) */
	6	/* ms500(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_setup_specs_23 = {
	asn_MAP_setup_value2enum_23,	/* "tag" => N; sorted by tag */
	asn_MAP_setup_enum2value_23,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_setup_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_23 = {
	"setup",
	"setup",
	&asn_OP_NativeEnumerated,
	asn_DEF_setup_tags_23,
	sizeof(asn_DEF_setup_tags_23)
		/sizeof(asn_DEF_setup_tags_23[0]) - 1, /* 1 */
	asn_DEF_setup_tags_23,	/* Same as above */
	sizeof(asn_DEF_setup_tags_23)
		/sizeof(asn_DEF_setup_tags_23[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_setup_constr_23,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_setup_specs_23	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_t312_r12_21[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA__ext3__t312_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA__ext3__t312_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_setup_23,
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
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_t312_r12_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_t312_r12_specs_21 = {
	sizeof(struct MeasObjectEUTRA__ext3__t312_r12),
	offsetof(struct MeasObjectEUTRA__ext3__t312_r12, _asn_ctx),
	offsetof(struct MeasObjectEUTRA__ext3__t312_r12, present),
	sizeof(((struct MeasObjectEUTRA__ext3__t312_r12 *)0)->present),
	asn_MAP_t312_r12_tag2el_21,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t312_r12_21 = {
	"t312-r12",
	"t312-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_t312_r12_constr_21,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_t312_r12_21,
	2,	/* Elements count */
	&asn_SPC_t312_r12_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_18[] = {
	{ ATF_POINTER, 5, offsetof(struct MeasObjectEUTRA__ext3, altTTT_CellsToRemoveList_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
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
		"altTTT-CellsToRemoveList-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct MeasObjectEUTRA__ext3, altTTT_CellsToAddModList_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AltTTT_CellsToAddModList_r12,
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
		"altTTT-CellsToAddModList-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasObjectEUTRA__ext3, t312_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_t312_r12_21,
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
		"t312-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectEUTRA__ext3, reducedMeasPerformance_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"reducedMeasPerformance-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectEUTRA__ext3, measDS_Config_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasDS_Config_r12,
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
		"measDS-Config-r12"
		},
};
static const int asn_MAP_ext3_oms_18[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_ext3_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* altTTT-CellsToRemoveList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* altTTT-CellsToAddModList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* t312-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* reducedMeasPerformance-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* measDS-Config-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_18 = {
	sizeof(struct MeasObjectEUTRA__ext3),
	offsetof(struct MeasObjectEUTRA__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_18,
	5,	/* Count of tags in the map */
	asn_MAP_ext3_oms_18,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_18 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_ext3_tags_18,
	sizeof(asn_DEF_ext3_tags_18)
		/sizeof(asn_DEF_ext3_tags_18[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_18,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_18)
		/sizeof(asn_DEF_ext3_tags_18[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext3_18,
	5,	/* Elements count */
	&asn_SPC_ext3_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext4_34[] = {
	{ ATF_POINTER, 4, offsetof(struct MeasObjectEUTRA__ext4, whiteCellsToRemoveList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
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
		"whiteCellsToRemoveList-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasObjectEUTRA__ext4, whiteCellsToAddModList_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WhiteCellsToAddModList_r13,
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
		"whiteCellsToAddModList-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectEUTRA__ext4, rmtc_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RMTC_Config_r13,
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
		"rmtc-Config-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectEUTRA__ext4, carrierFreq_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_v9e0,
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
		"carrierFreq-r13"
		},
};
static const int asn_MAP_ext4_oms_34[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_ext4_tags_34[] = {
	(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext4_tag2el_34[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* whiteCellsToRemoveList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* whiteCellsToAddModList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rmtc-Config-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* carrierFreq-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext4_specs_34 = {
	sizeof(struct MeasObjectEUTRA__ext4),
	offsetof(struct MeasObjectEUTRA__ext4, _asn_ctx),
	asn_MAP_ext4_tag2el_34,
	4,	/* Count of tags in the map */
	asn_MAP_ext4_oms_34,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext4_34 = {
	"ext4",
	"ext4",
	&asn_OP_SEQUENCE,
	asn_DEF_ext4_tags_34,
	sizeof(asn_DEF_ext4_tags_34)
		/sizeof(asn_DEF_ext4_tags_34[0]) - 1, /* 1 */
	asn_DEF_ext4_tags_34,	/* Same as above */
	sizeof(asn_DEF_ext4_tags_34)
		/sizeof(asn_DEF_ext4_tags_34[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext4_34,
	4,	/* Elements count */
	&asn_SPC_ext4_specs_34	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext5_39[] = {
	{ ATF_POINTER, 3, offsetof(struct MeasObjectEUTRA__ext5, tx_ResourcePoolToRemoveList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Tx_ResourcePoolMeasList_r14,
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
		"tx-ResourcePoolToRemoveList-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectEUTRA__ext5, tx_ResourcePoolToAddList_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Tx_ResourcePoolMeasList_r14,
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
		"tx-ResourcePoolToAddList-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectEUTRA__ext5, fembms_MixedCarrier_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"fembms-MixedCarrier-r14"
		},
};
static const int asn_MAP_ext5_oms_39[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_ext5_tags_39[] = {
	(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext5_tag2el_39[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tx-ResourcePoolToRemoveList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tx-ResourcePoolToAddList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* fembms-MixedCarrier-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext5_specs_39 = {
	sizeof(struct MeasObjectEUTRA__ext5),
	offsetof(struct MeasObjectEUTRA__ext5, _asn_ctx),
	asn_MAP_ext5_tag2el_39,
	3,	/* Count of tags in the map */
	asn_MAP_ext5_oms_39,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext5_39 = {
	"ext5",
	"ext5",
	&asn_OP_SEQUENCE,
	asn_DEF_ext5_tags_39,
	sizeof(asn_DEF_ext5_tags_39)
		/sizeof(asn_DEF_ext5_tags_39[0]) - 1, /* 1 */
	asn_DEF_ext5_tags_39,	/* Same as above */
	sizeof(asn_DEF_ext5_tags_39)
		/sizeof(asn_DEF_ext5_tags_39[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext5_39,
	3,	/* Elements count */
	&asn_SPC_ext5_specs_39	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext6_43[] = {
	{ ATF_POINTER, 1, offsetof(struct MeasObjectEUTRA__ext6, measSensing_Config_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasSensing_Config_r15,
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
		"measSensing-Config-r15"
		},
};
static const int asn_MAP_ext6_oms_43[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext6_tags_43[] = {
	(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext6_tag2el_43[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* measSensing-Config-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext6_specs_43 = {
	sizeof(struct MeasObjectEUTRA__ext6),
	offsetof(struct MeasObjectEUTRA__ext6, _asn_ctx),
	asn_MAP_ext6_tag2el_43,
	1,	/* Count of tags in the map */
	asn_MAP_ext6_oms_43,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext6_43 = {
	"ext6",
	"ext6",
	&asn_OP_SEQUENCE,
	asn_DEF_ext6_tags_43,
	sizeof(asn_DEF_ext6_tags_43)
		/sizeof(asn_DEF_ext6_tags_43[0]) - 1, /* 1 */
	asn_DEF_ext6_tags_43,	/* Same as above */
	sizeof(asn_DEF_ext6_tags_43)
		/sizeof(asn_DEF_ext6_tags_43[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext6_43,
	1,	/* Elements count */
	&asn_SPC_ext6_specs_43	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasObjectEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
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
		"carrierFreq"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, allowedMeasBandwidth),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AllowedMeasBandwidth,
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
		"allowedMeasBandwidth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, presenceAntennaPort1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PresenceAntennaPort1,
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
		"presenceAntennaPort1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, neighCellConfig),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NeighCellConfig,
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
		"neighCellConfig"
		},
	{ ATF_POINTER, 12, offsetof(struct MeasObjectEUTRA, offsetFreq),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_OffsetRange,
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
		&asn_DFL_6_cmp_15,	/* Compare DEFAULT 15 */
		&asn_DFL_6_set_15,	/* Set DEFAULT 15 */
		"offsetFreq"
		},
	{ ATF_POINTER, 11, offsetof(struct MeasObjectEUTRA, cellsToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
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
		"cellsToRemoveList"
		},
	{ ATF_POINTER, 10, offsetof(struct MeasObjectEUTRA, cellsToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellsToAddModList,
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
		"cellsToAddModList"
		},
	{ ATF_POINTER, 9, offsetof(struct MeasObjectEUTRA, blackCellsToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
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
		"blackCellsToRemoveList"
		},
	{ ATF_POINTER, 8, offsetof(struct MeasObjectEUTRA, blackCellsToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BlackCellsToAddModList,
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
		"blackCellsToAddModList"
		},
	{ ATF_POINTER, 7, offsetof(struct MeasObjectEUTRA, cellForWhichToReportCGI),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
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
		"cellForWhichToReportCGI"
		},
	{ ATF_POINTER, 6, offsetof(struct MeasObjectEUTRA, ext1),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_ext1_13,
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
	{ ATF_POINTER, 5, offsetof(struct MeasObjectEUTRA, ext2),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		0,
		&asn_DEF_ext2_16,
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
	{ ATF_POINTER, 4, offsetof(struct MeasObjectEUTRA, ext3),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		0,
		&asn_DEF_ext3_18,
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
	{ ATF_POINTER, 3, offsetof(struct MeasObjectEUTRA, ext4),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		0,
		&asn_DEF_ext4_34,
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
		"ext4"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectEUTRA, ext5),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		0,
		&asn_DEF_ext5_39,
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
		"ext5"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectEUTRA, ext6),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		0,
		&asn_DEF_ext6_43,
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
		"ext6"
		},
};
static const int asn_MAP_MeasObjectEUTRA_oms_1[] = { 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
static const ber_tlv_tag_t asn_DEF_MeasObjectEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasObjectEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* allowedMeasBandwidth */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* presenceAntennaPort1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* neighCellConfig */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* offsetFreq */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* cellsToRemoveList */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* cellsToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* blackCellsToRemoveList */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* blackCellsToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* cellForWhichToReportCGI */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* ext3 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* ext4 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* ext5 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 } /* ext6 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasObjectEUTRA_specs_1 = {
	sizeof(struct MeasObjectEUTRA),
	offsetof(struct MeasObjectEUTRA, _asn_ctx),
	asn_MAP_MeasObjectEUTRA_tag2el_1,
	16,	/* Count of tags in the map */
	asn_MAP_MeasObjectEUTRA_oms_1,	/* Optional members */
	6, 6,	/* Root/Additions */
	10,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasObjectEUTRA = {
	"MeasObjectEUTRA",
	"MeasObjectEUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasObjectEUTRA_tags_1,
	sizeof(asn_DEF_MeasObjectEUTRA_tags_1)
		/sizeof(asn_DEF_MeasObjectEUTRA_tags_1[0]), /* 1 */
	asn_DEF_MeasObjectEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasObjectEUTRA_tags_1)
		/sizeof(asn_DEF_MeasObjectEUTRA_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MeasObjectEUTRA_1,
	16,	/* Elements count */
	&asn_SPC_MeasObjectEUTRA_specs_1	/* Additional specs */
};

