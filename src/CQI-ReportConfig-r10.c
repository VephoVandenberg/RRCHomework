/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "CQI-ReportConfig-r10.h"

#include "CQI-ReportAperiodic-r10.h"
#include "CQI-ReportPeriodic-r10.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_nomPDSCH_RS_EPRE_Offset_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -1L && value <= 6L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_pmi_RI_Report_r9_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_csi_SubframePatternConfig_r10_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_nomPDSCH_RS_EPRE_Offset_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3, -1,  6 }	/* (-1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_pmi_RI_Report_r9_value2enum_5[] = {
	{ 0,	5,	"setup" }
};
static const unsigned int asn_MAP_pmi_RI_Report_r9_enum2value_5[] = {
	0	/* setup(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pmi_RI_Report_r9_specs_5 = {
	asn_MAP_pmi_RI_Report_r9_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_pmi_RI_Report_r9_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pmi_RI_Report_r9_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pmi_RI_Report_r9_5 = {
	"pmi-RI-Report-r9",
	"pmi-RI-Report-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_pmi_RI_Report_r9_tags_5,
	sizeof(asn_DEF_pmi_RI_Report_r9_tags_5)
		/sizeof(asn_DEF_pmi_RI_Report_r9_tags_5[0]) - 1, /* 1 */
	asn_DEF_pmi_RI_Report_r9_tags_5,	/* Same as above */
	sizeof(asn_DEF_pmi_RI_Report_r9_tags_5)
		/sizeof(asn_DEF_pmi_RI_Report_r9_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_pmi_RI_Report_r9_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pmi_RI_Report_r9_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportConfig_r10__csi_SubframePatternConfig_r10__setup, csi_MeasSubframeSet1_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasSubframePattern_r10,
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
		"csi-MeasSubframeSet1-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportConfig_r10__csi_SubframePatternConfig_r10__setup, csi_MeasSubframeSet2_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasSubframePattern_r10,
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
		"csi-MeasSubframeSet2-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-MeasSubframeSet1-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* csi-MeasSubframeSet2-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_9 = {
	sizeof(struct CQI_ReportConfig_r10__csi_SubframePatternConfig_r10__setup),
	offsetof(struct CQI_ReportConfig_r10__csi_SubframePatternConfig_r10__setup, _asn_ctx),
	asn_MAP_setup_tag2el_9,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_9 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_9,
	sizeof(asn_DEF_setup_tags_9)
		/sizeof(asn_DEF_setup_tags_9[0]) - 1, /* 1 */
	asn_DEF_setup_tags_9,	/* Same as above */
	sizeof(asn_DEF_setup_tags_9)
		/sizeof(asn_DEF_setup_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_setup_9,
	2,	/* Elements count */
	&asn_SPC_setup_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_csi_SubframePatternConfig_r10_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportConfig_r10__csi_SubframePatternConfig_r10, choice.release),
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
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportConfig_r10__csi_SubframePatternConfig_r10, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_9,
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
static const asn_TYPE_tag2member_t asn_MAP_csi_SubframePatternConfig_r10_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_csi_SubframePatternConfig_r10_specs_7 = {
	sizeof(struct CQI_ReportConfig_r10__csi_SubframePatternConfig_r10),
	offsetof(struct CQI_ReportConfig_r10__csi_SubframePatternConfig_r10, _asn_ctx),
	offsetof(struct CQI_ReportConfig_r10__csi_SubframePatternConfig_r10, present),
	sizeof(((struct CQI_ReportConfig_r10__csi_SubframePatternConfig_r10 *)0)->present),
	asn_MAP_csi_SubframePatternConfig_r10_tag2el_7,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_SubframePatternConfig_r10_7 = {
	"csi-SubframePatternConfig-r10",
	"csi-SubframePatternConfig-r10",
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
		&asn_PER_type_csi_SubframePatternConfig_r10_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_csi_SubframePatternConfig_r10_7,
	2,	/* Elements count */
	&asn_SPC_csi_SubframePatternConfig_r10_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CQI_ReportConfig_r10_1[] = {
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportConfig_r10, cqi_ReportAperiodic_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CQI_ReportAperiodic_r10,
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
		"cqi-ReportAperiodic-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportConfig_r10, nomPDSCH_RS_EPRE_Offset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_nomPDSCH_RS_EPRE_Offset_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_nomPDSCH_RS_EPRE_Offset_constraint_1
		},
		0, 0, /* No default value */
		"nomPDSCH-RS-EPRE-Offset"
		},
	{ ATF_POINTER, 3, offsetof(struct CQI_ReportConfig_r10, cqi_ReportPeriodic_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CQI_ReportPeriodic_r10,
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
		"cqi-ReportPeriodic-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct CQI_ReportConfig_r10, pmi_RI_Report_r9),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pmi_RI_Report_r9_5,
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
		"pmi-RI-Report-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportConfig_r10, csi_SubframePatternConfig_r10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_csi_SubframePatternConfig_r10_7,
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
		"csi-SubframePatternConfig-r10"
		},
};
static const int asn_MAP_CQI_ReportConfig_r10_oms_1[] = { 0, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_CQI_ReportConfig_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CQI_ReportConfig_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cqi-ReportAperiodic-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nomPDSCH-RS-EPRE-Offset */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cqi-ReportPeriodic-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pmi-RI-Report-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* csi-SubframePatternConfig-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportConfig_r10_specs_1 = {
	sizeof(struct CQI_ReportConfig_r10),
	offsetof(struct CQI_ReportConfig_r10, _asn_ctx),
	asn_MAP_CQI_ReportConfig_r10_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_CQI_ReportConfig_r10_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CQI_ReportConfig_r10 = {
	"CQI-ReportConfig-r10",
	"CQI-ReportConfig-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_CQI_ReportConfig_r10_tags_1,
	sizeof(asn_DEF_CQI_ReportConfig_r10_tags_1)
		/sizeof(asn_DEF_CQI_ReportConfig_r10_tags_1[0]), /* 1 */
	asn_DEF_CQI_ReportConfig_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_CQI_ReportConfig_r10_tags_1)
		/sizeof(asn_DEF_CQI_ReportConfig_r10_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CQI_ReportConfig_r10_1,
	5,	/* Elements count */
	&asn_SPC_CQI_ReportConfig_r10_specs_1	/* Additional specs */
};

