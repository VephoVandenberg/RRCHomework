/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "MeasIdleCarrierEUTRA-r15.h"

#include "CellList-r15.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_reportQuantities_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_reportQuantities_value2enum_6[] = {
	{ 0,	4,	"rsrp" },
	{ 1,	4,	"rsrq" },
	{ 2,	4,	"both" }
};
static const unsigned int asn_MAP_reportQuantities_enum2value_6[] = {
	2,	/* both(2) */
	0,	/* rsrp(0) */
	1	/* rsrq(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_reportQuantities_specs_6 = {
	asn_MAP_reportQuantities_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_reportQuantities_enum2value_6,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_reportQuantities_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reportQuantities_6 = {
	"reportQuantities",
	"reportQuantities",
	&asn_OP_NativeEnumerated,
	asn_DEF_reportQuantities_tags_6,
	sizeof(asn_DEF_reportQuantities_tags_6)
		/sizeof(asn_DEF_reportQuantities_tags_6[0]) - 1, /* 1 */
	asn_DEF_reportQuantities_tags_6,	/* Same as above */
	sizeof(asn_DEF_reportQuantities_tags_6)
		/sizeof(asn_DEF_reportQuantities_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_reportQuantities_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reportQuantities_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_qualityThreshold_r15_10[] = {
	{ ATF_POINTER, 2, offsetof(struct MeasIdleCarrierEUTRA_r15__qualityThreshold_r15, idleRSRP_Threshold_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
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
		"idleRSRP-Threshold-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasIdleCarrierEUTRA_r15__qualityThreshold_r15, idleRSRQ_Threshold_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range_r13,
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
		"idleRSRQ-Threshold-r15"
		},
};
static const int asn_MAP_qualityThreshold_r15_oms_10[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_qualityThreshold_r15_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_qualityThreshold_r15_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* idleRSRP-Threshold-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* idleRSRQ-Threshold-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_qualityThreshold_r15_specs_10 = {
	sizeof(struct MeasIdleCarrierEUTRA_r15__qualityThreshold_r15),
	offsetof(struct MeasIdleCarrierEUTRA_r15__qualityThreshold_r15, _asn_ctx),
	asn_MAP_qualityThreshold_r15_tag2el_10,
	2,	/* Count of tags in the map */
	asn_MAP_qualityThreshold_r15_oms_10,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_qualityThreshold_r15_10 = {
	"qualityThreshold-r15",
	"qualityThreshold-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_qualityThreshold_r15_tags_10,
	sizeof(asn_DEF_qualityThreshold_r15_tags_10)
		/sizeof(asn_DEF_qualityThreshold_r15_tags_10[0]) - 1, /* 1 */
	asn_DEF_qualityThreshold_r15_tags_10,	/* Same as above */
	sizeof(asn_DEF_qualityThreshold_r15_tags_10)
		/sizeof(asn_DEF_qualityThreshold_r15_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_qualityThreshold_r15_10,
	2,	/* Elements count */
	&asn_SPC_qualityThreshold_r15_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasIdleCarrierEUTRA_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasIdleCarrierEUTRA_r15, carrierFreq_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
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
		"carrierFreq-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasIdleCarrierEUTRA_r15, allowedMeasBandwidth_r15),
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
		"allowedMeasBandwidth-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasIdleCarrierEUTRA_r15, validityArea_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellList_r15,
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
		"validityArea-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasIdleCarrierEUTRA_r15, measCellList_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellList_r15,
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
		"measCellList-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasIdleCarrierEUTRA_r15, reportQuantities),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reportQuantities_6,
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
		"reportQuantities"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasIdleCarrierEUTRA_r15, qualityThreshold_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_qualityThreshold_r15_10,
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
		"qualityThreshold-r15"
		},
};
static const int asn_MAP_MeasIdleCarrierEUTRA_r15_oms_1[] = { 2, 3, 5 };
static const ber_tlv_tag_t asn_DEF_MeasIdleCarrierEUTRA_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasIdleCarrierEUTRA_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* allowedMeasBandwidth-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* validityArea-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measCellList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* reportQuantities */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* qualityThreshold-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasIdleCarrierEUTRA_r15_specs_1 = {
	sizeof(struct MeasIdleCarrierEUTRA_r15),
	offsetof(struct MeasIdleCarrierEUTRA_r15, _asn_ctx),
	asn_MAP_MeasIdleCarrierEUTRA_r15_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_MeasIdleCarrierEUTRA_r15_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasIdleCarrierEUTRA_r15 = {
	"MeasIdleCarrierEUTRA-r15",
	"MeasIdleCarrierEUTRA-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasIdleCarrierEUTRA_r15_tags_1,
	sizeof(asn_DEF_MeasIdleCarrierEUTRA_r15_tags_1)
		/sizeof(asn_DEF_MeasIdleCarrierEUTRA_r15_tags_1[0]), /* 1 */
	asn_DEF_MeasIdleCarrierEUTRA_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasIdleCarrierEUTRA_r15_tags_1)
		/sizeof(asn_DEF_MeasIdleCarrierEUTRA_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MeasIdleCarrierEUTRA_r15_1,
	6,	/* Elements count */
	&asn_SPC_MeasIdleCarrierEUTRA_r15_specs_1	/* Additional specs */
};

