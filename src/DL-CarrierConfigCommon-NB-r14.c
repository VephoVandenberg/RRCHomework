/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "DL-CarrierConfigCommon-NB-r14.h"

#include "DL-GapConfig-NB-v1530.h"
#include "CarrierFreq-NB-v1550.h"
static int
memb_indexToMidPRB_r14_constraint_13(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -55L && value <= 54L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

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
static asn_per_constraints_t asn_PER_type_downlinkBitmapNonAnchor_r14_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_dl_GapNonAnchor_r14_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_indexToMidPRB_r14_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -55,  54 }	/* (-55..54) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_eutra_NumCRS_Ports_r14_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_samePCI_Indicator_r14_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_eutraControlRegionSize_r14_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_nrs_PowerOffsetNonAnchor_r14_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_downlinkBitmapNonAnchor_r14_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__downlinkBitmapNonAnchor_r14, choice.useNoBitmap_r14),
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
		"useNoBitmap-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__downlinkBitmapNonAnchor_r14, choice.useAnchorBitmap_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
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
		"useAnchorBitmap-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__downlinkBitmapNonAnchor_r14, choice.explicitBitmapConfiguration_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DL_Bitmap_NB_r13,
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
		"explicitBitmapConfiguration-r14"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_downlinkBitmapNonAnchor_r14_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* useNoBitmap-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* useAnchorBitmap-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* explicitBitmapConfiguration-r14 */
};
static asn_CHOICE_specifics_t asn_SPC_downlinkBitmapNonAnchor_r14_specs_3 = {
	sizeof(struct DL_CarrierConfigCommon_NB_r14__downlinkBitmapNonAnchor_r14),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__downlinkBitmapNonAnchor_r14, _asn_ctx),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__downlinkBitmapNonAnchor_r14, present),
	sizeof(((struct DL_CarrierConfigCommon_NB_r14__downlinkBitmapNonAnchor_r14 *)0)->present),
	asn_MAP_downlinkBitmapNonAnchor_r14_tag2el_3,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_downlinkBitmapNonAnchor_r14_3 = {
	"downlinkBitmapNonAnchor-r14",
	"downlinkBitmapNonAnchor-r14",
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
		&asn_PER_type_downlinkBitmapNonAnchor_r14_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_downlinkBitmapNonAnchor_r14_3,
	3,	/* Elements count */
	&asn_SPC_downlinkBitmapNonAnchor_r14_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_dl_GapNonAnchor_r14_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__dl_GapNonAnchor_r14, choice.useNoGap_r14),
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
		"useNoGap-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__dl_GapNonAnchor_r14, choice.useAnchorGapConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
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
		"useAnchorGapConfig-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__dl_GapNonAnchor_r14, choice.explicitGapConfiguration_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_GapConfig_NB_r13,
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
		"explicitGapConfiguration-r14"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_dl_GapNonAnchor_r14_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* useNoGap-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* useAnchorGapConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* explicitGapConfiguration-r14 */
};
static asn_CHOICE_specifics_t asn_SPC_dl_GapNonAnchor_r14_specs_7 = {
	sizeof(struct DL_CarrierConfigCommon_NB_r14__dl_GapNonAnchor_r14),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__dl_GapNonAnchor_r14, _asn_ctx),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__dl_GapNonAnchor_r14, present),
	sizeof(((struct DL_CarrierConfigCommon_NB_r14__dl_GapNonAnchor_r14 *)0)->present),
	asn_MAP_dl_GapNonAnchor_r14_tag2el_7,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_GapNonAnchor_r14_7 = {
	"dl-GapNonAnchor-r14",
	"dl-GapNonAnchor-r14",
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
		&asn_PER_type_dl_GapNonAnchor_r14_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_dl_GapNonAnchor_r14_7,
	3,	/* Elements count */
	&asn_SPC_dl_GapNonAnchor_r14_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_samePCI_r14_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14__samePCI_r14, indexToMidPRB_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_indexToMidPRB_r14_constr_14,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_indexToMidPRB_r14_constraint_13
		},
		0, 0, /* No default value */
		"indexToMidPRB-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_samePCI_r14_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_samePCI_r14_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* indexToMidPRB-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_samePCI_r14_specs_13 = {
	sizeof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14__samePCI_r14),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14__samePCI_r14, _asn_ctx),
	asn_MAP_samePCI_r14_tag2el_13,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_samePCI_r14_13 = {
	"samePCI-r14",
	"samePCI-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_samePCI_r14_tags_13,
	sizeof(asn_DEF_samePCI_r14_tags_13)
		/sizeof(asn_DEF_samePCI_r14_tags_13[0]) - 1, /* 1 */
	asn_DEF_samePCI_r14_tags_13,	/* Same as above */
	sizeof(asn_DEF_samePCI_r14_tags_13)
		/sizeof(asn_DEF_samePCI_r14_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_samePCI_r14_13,
	1,	/* Elements count */
	&asn_SPC_samePCI_r14_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_eutra_NumCRS_Ports_r14_value2enum_16[] = {
	{ 0,	4,	"same" },
	{ 1,	4,	"four" }
};
static const unsigned int asn_MAP_eutra_NumCRS_Ports_r14_enum2value_16[] = {
	1,	/* four(1) */
	0	/* same(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_eutra_NumCRS_Ports_r14_specs_16 = {
	asn_MAP_eutra_NumCRS_Ports_r14_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_eutra_NumCRS_Ports_r14_enum2value_16,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_eutra_NumCRS_Ports_r14_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eutra_NumCRS_Ports_r14_16 = {
	"eutra-NumCRS-Ports-r14",
	"eutra-NumCRS-Ports-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_eutra_NumCRS_Ports_r14_tags_16,
	sizeof(asn_DEF_eutra_NumCRS_Ports_r14_tags_16)
		/sizeof(asn_DEF_eutra_NumCRS_Ports_r14_tags_16[0]) - 1, /* 1 */
	asn_DEF_eutra_NumCRS_Ports_r14_tags_16,	/* Same as above */
	sizeof(asn_DEF_eutra_NumCRS_Ports_r14_tags_16)
		/sizeof(asn_DEF_eutra_NumCRS_Ports_r14_tags_16[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_eutra_NumCRS_Ports_r14_constr_16,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_eutra_NumCRS_Ports_r14_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_differentPCI_r14_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14__differentPCI_r14, eutra_NumCRS_Ports_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_eutra_NumCRS_Ports_r14_16,
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
		"eutra-NumCRS-Ports-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_differentPCI_r14_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_differentPCI_r14_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* eutra-NumCRS-Ports-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_differentPCI_r14_specs_15 = {
	sizeof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14__differentPCI_r14),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14__differentPCI_r14, _asn_ctx),
	asn_MAP_differentPCI_r14_tag2el_15,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_differentPCI_r14_15 = {
	"differentPCI-r14",
	"differentPCI-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_differentPCI_r14_tags_15,
	sizeof(asn_DEF_differentPCI_r14_tags_15)
		/sizeof(asn_DEF_differentPCI_r14_tags_15[0]) - 1, /* 1 */
	asn_DEF_differentPCI_r14_tags_15,	/* Same as above */
	sizeof(asn_DEF_differentPCI_r14_tags_15)
		/sizeof(asn_DEF_differentPCI_r14_tags_15[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_differentPCI_r14_15,
	1,	/* Elements count */
	&asn_SPC_differentPCI_r14_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_samePCI_Indicator_r14_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14, choice.samePCI_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_samePCI_r14_13,
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
		"samePCI-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14, choice.differentPCI_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_differentPCI_r14_15,
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
		"differentPCI-r14"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_samePCI_Indicator_r14_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* samePCI-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* differentPCI-r14 */
};
static asn_CHOICE_specifics_t asn_SPC_samePCI_Indicator_r14_specs_12 = {
	sizeof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14, _asn_ctx),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14, present),
	sizeof(((struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14__samePCI_Indicator_r14 *)0)->present),
	asn_MAP_samePCI_Indicator_r14_tag2el_12,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_samePCI_Indicator_r14_12 = {
	"samePCI-Indicator-r14",
	"samePCI-Indicator-r14",
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
		&asn_PER_type_samePCI_Indicator_r14_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_samePCI_Indicator_r14_12,
	2,	/* Elements count */
	&asn_SPC_samePCI_Indicator_r14_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_eutraControlRegionSize_r14_value2enum_19[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" }
};
static const unsigned int asn_MAP_eutraControlRegionSize_r14_enum2value_19[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2	/* n3(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_eutraControlRegionSize_r14_specs_19 = {
	asn_MAP_eutraControlRegionSize_r14_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_eutraControlRegionSize_r14_enum2value_19,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_eutraControlRegionSize_r14_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eutraControlRegionSize_r14_19 = {
	"eutraControlRegionSize-r14",
	"eutraControlRegionSize-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_eutraControlRegionSize_r14_tags_19,
	sizeof(asn_DEF_eutraControlRegionSize_r14_tags_19)
		/sizeof(asn_DEF_eutraControlRegionSize_r14_tags_19[0]) - 1, /* 1 */
	asn_DEF_eutraControlRegionSize_r14_tags_19,	/* Same as above */
	sizeof(asn_DEF_eutraControlRegionSize_r14_tags_19)
		/sizeof(asn_DEF_eutraControlRegionSize_r14_tags_19[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_eutraControlRegionSize_r14_constr_19,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_eutraControlRegionSize_r14_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_inbandCarrierInfo_r14_11[] = {
	{ ATF_POINTER, 1, offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14, samePCI_Indicator_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_samePCI_Indicator_r14_12,
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
		"samePCI-Indicator-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14, eutraControlRegionSize_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_eutraControlRegionSize_r14_19,
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
		"eutraControlRegionSize-r14"
		},
};
static const int asn_MAP_inbandCarrierInfo_r14_oms_11[] = { 0 };
static const ber_tlv_tag_t asn_DEF_inbandCarrierInfo_r14_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_inbandCarrierInfo_r14_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* samePCI-Indicator-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eutraControlRegionSize-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_inbandCarrierInfo_r14_specs_11 = {
	sizeof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__inbandCarrierInfo_r14, _asn_ctx),
	asn_MAP_inbandCarrierInfo_r14_tag2el_11,
	2,	/* Count of tags in the map */
	asn_MAP_inbandCarrierInfo_r14_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_inbandCarrierInfo_r14_11 = {
	"inbandCarrierInfo-r14",
	"inbandCarrierInfo-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_inbandCarrierInfo_r14_tags_11,
	sizeof(asn_DEF_inbandCarrierInfo_r14_tags_11)
		/sizeof(asn_DEF_inbandCarrierInfo_r14_tags_11[0]) - 1, /* 1 */
	asn_DEF_inbandCarrierInfo_r14_tags_11,	/* Same as above */
	sizeof(asn_DEF_inbandCarrierInfo_r14_tags_11)
		/sizeof(asn_DEF_inbandCarrierInfo_r14_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_inbandCarrierInfo_r14_11,
	2,	/* Elements count */
	&asn_SPC_inbandCarrierInfo_r14_specs_11	/* Additional specs */
};

static int asn_DFL_23_cmp_6(const void *sptr) {
	const long *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 6 */
	return (*st != 6);
}
static int asn_DFL_23_set_6(void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 6 */
	*st = 6;
	return 0;
}
static const asn_INTEGER_enum_map_t asn_MAP_nrs_PowerOffsetNonAnchor_r14_value2enum_23[] = {
	{ 0,	5,	"dB-12" },
	{ 1,	5,	"dB-10" },
	{ 2,	4,	"dB-8" },
	{ 3,	4,	"dB-6" },
	{ 4,	4,	"dB-4" },
	{ 5,	4,	"dB-2" },
	{ 6,	3,	"dB0" },
	{ 7,	3,	"dB3" }
};
static const unsigned int asn_MAP_nrs_PowerOffsetNonAnchor_r14_enum2value_23[] = {
	1,	/* dB-10(1) */
	0,	/* dB-12(0) */
	5,	/* dB-2(5) */
	4,	/* dB-4(4) */
	3,	/* dB-6(3) */
	2,	/* dB-8(2) */
	6,	/* dB0(6) */
	7	/* dB3(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_nrs_PowerOffsetNonAnchor_r14_specs_23 = {
	asn_MAP_nrs_PowerOffsetNonAnchor_r14_value2enum_23,	/* "tag" => N; sorted by tag */
	asn_MAP_nrs_PowerOffsetNonAnchor_r14_enum2value_23,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nrs_PowerOffsetNonAnchor_r14_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nrs_PowerOffsetNonAnchor_r14_23 = {
	"nrs-PowerOffsetNonAnchor-r14",
	"nrs-PowerOffsetNonAnchor-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_nrs_PowerOffsetNonAnchor_r14_tags_23,
	sizeof(asn_DEF_nrs_PowerOffsetNonAnchor_r14_tags_23)
		/sizeof(asn_DEF_nrs_PowerOffsetNonAnchor_r14_tags_23[0]) - 1, /* 1 */
	asn_DEF_nrs_PowerOffsetNonAnchor_r14_tags_23,	/* Same as above */
	sizeof(asn_DEF_nrs_PowerOffsetNonAnchor_r14_tags_23)
		/sizeof(asn_DEF_nrs_PowerOffsetNonAnchor_r14_tags_23[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_nrs_PowerOffsetNonAnchor_r14_constr_23,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nrs_PowerOffsetNonAnchor_r14_specs_23	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_33[] = {
	{ ATF_POINTER, 1, offsetof(struct DL_CarrierConfigCommon_NB_r14__ext1, dl_GapNonAnchor_v1530),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_GapConfig_NB_v1530,
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
		"dl-GapNonAnchor-v1530"
		},
};
static const int asn_MAP_ext1_oms_33[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_33[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_33[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* dl-GapNonAnchor-v1530 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_33 = {
	sizeof(struct DL_CarrierConfigCommon_NB_r14__ext1),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_33,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_33,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_33 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_33,
	sizeof(asn_DEF_ext1_tags_33)
		/sizeof(asn_DEF_ext1_tags_33[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_33,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_33)
		/sizeof(asn_DEF_ext1_tags_33[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext1_33,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_33	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_35[] = {
	{ ATF_POINTER, 1, offsetof(struct DL_CarrierConfigCommon_NB_r14__ext2, dl_CarrierFreq_v1550),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreq_NB_v1550,
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
		"dl-CarrierFreq-v1550"
		},
};
static const int asn_MAP_ext2_oms_35[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_35[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_35[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* dl-CarrierFreq-v1550 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_35 = {
	sizeof(struct DL_CarrierConfigCommon_NB_r14__ext2),
	offsetof(struct DL_CarrierConfigCommon_NB_r14__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_35,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_35,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_35 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_35,
	sizeof(asn_DEF_ext2_tags_35)
		/sizeof(asn_DEF_ext2_tags_35[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_35,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_35)
		/sizeof(asn_DEF_ext2_tags_35[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext2_35,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_35	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DL_CarrierConfigCommon_NB_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14, dl_CarrierFreq_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreq_NB_r13,
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
		"dl-CarrierFreq-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14, downlinkBitmapNonAnchor_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_downlinkBitmapNonAnchor_r14_3,
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
		"downlinkBitmapNonAnchor-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CarrierConfigCommon_NB_r14, dl_GapNonAnchor_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_dl_GapNonAnchor_r14_7,
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
		"dl-GapNonAnchor-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct DL_CarrierConfigCommon_NB_r14, inbandCarrierInfo_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_inbandCarrierInfo_r14_11,
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
		"inbandCarrierInfo-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct DL_CarrierConfigCommon_NB_r14, nrs_PowerOffsetNonAnchor_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nrs_PowerOffsetNonAnchor_r14_23,
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
		&asn_DFL_23_cmp_6,	/* Compare DEFAULT 6 */
		&asn_DFL_23_set_6,	/* Set DEFAULT 6 */
		"nrs-PowerOffsetNonAnchor-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct DL_CarrierConfigCommon_NB_r14, ext1),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_ext1_33,
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
	{ ATF_POINTER, 1, offsetof(struct DL_CarrierConfigCommon_NB_r14, ext2),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_ext2_35,
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
};
static const int asn_MAP_DL_CarrierConfigCommon_NB_r14_oms_1[] = { 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_DL_CarrierConfigCommon_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DL_CarrierConfigCommon_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-CarrierFreq-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* downlinkBitmapNonAnchor-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dl-GapNonAnchor-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* inbandCarrierInfo-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* nrs-PowerOffsetNonAnchor-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_DL_CarrierConfigCommon_NB_r14_specs_1 = {
	sizeof(struct DL_CarrierConfigCommon_NB_r14),
	offsetof(struct DL_CarrierConfigCommon_NB_r14, _asn_ctx),
	asn_MAP_DL_CarrierConfigCommon_NB_r14_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_DL_CarrierConfigCommon_NB_r14_oms_1,	/* Optional members */
	2, 2,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DL_CarrierConfigCommon_NB_r14 = {
	"DL-CarrierConfigCommon-NB-r14",
	"DL-CarrierConfigCommon-NB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_DL_CarrierConfigCommon_NB_r14_tags_1,
	sizeof(asn_DEF_DL_CarrierConfigCommon_NB_r14_tags_1)
		/sizeof(asn_DEF_DL_CarrierConfigCommon_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_DL_CarrierConfigCommon_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_CarrierConfigCommon_NB_r14_tags_1)
		/sizeof(asn_DEF_DL_CarrierConfigCommon_NB_r14_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_DL_CarrierConfigCommon_NB_r14_1,
	7,	/* Elements count */
	&asn_SPC_DL_CarrierConfigCommon_NB_r14_specs_1	/* Additional specs */
};

