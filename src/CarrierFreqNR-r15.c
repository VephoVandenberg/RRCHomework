/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "CarrierFreqNR-r15.h"

#include "MultiFrequencyBandListNR-r15.h"
#include "MTC-SSB-NR-r15.h"
#include "SS-RSSI-Measurement-r15.h"
#include "NS-PmaxListNR-r15.h"
#include "ThresholdListNR-r15.h"
#include "MultiBandNsPmaxListNR-1-v1550.h"
#include "MultiBandNsPmaxListNR-v1550.h"
#include "SSB-ToMeasure-r15.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_q_RxLevMin_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -70L && value <= -22L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_q_RxLevMinSUL_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -70L && value <= -22L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_q_QualMin_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -43L && value <= -12L)) {
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
static asn_per_constraints_t asn_PER_type_subcarrierSpacingSSB_r15_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_q_RxLevMin_r15_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6, -70, -22 }	/* (-70..-22) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_q_RxLevMinSUL_r15_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6, -70, -22 }	/* (-70..-22) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_q_QualMin_r15_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -43, -12 }	/* (-43..-12) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_subcarrierSpacingSSB_r15_value2enum_6[] = {
	{ 0,	5,	"kHz15" },
	{ 1,	5,	"kHz30" },
	{ 2,	6,	"kHz120" },
	{ 3,	6,	"kHz240" }
};
static const unsigned int asn_MAP_subcarrierSpacingSSB_r15_enum2value_6[] = {
	2,	/* kHz120(2) */
	0,	/* kHz15(0) */
	3,	/* kHz240(3) */
	1	/* kHz30(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_subcarrierSpacingSSB_r15_specs_6 = {
	asn_MAP_subcarrierSpacingSSB_r15_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_subcarrierSpacingSSB_r15_enum2value_6,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_subcarrierSpacingSSB_r15_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subcarrierSpacingSSB_r15_6 = {
	"subcarrierSpacingSSB-r15",
	"subcarrierSpacingSSB-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_subcarrierSpacingSSB_r15_tags_6,
	sizeof(asn_DEF_subcarrierSpacingSSB_r15_tags_6)
		/sizeof(asn_DEF_subcarrierSpacingSSB_r15_tags_6[0]) - 1, /* 1 */
	asn_DEF_subcarrierSpacingSSB_r15_tags_6,	/* Same as above */
	sizeof(asn_DEF_subcarrierSpacingSSB_r15_tags_6)
		/sizeof(asn_DEF_subcarrierSpacingSSB_r15_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_subcarrierSpacingSSB_r15_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_subcarrierSpacingSSB_r15_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_threshX_Q_r15_16[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqNR_r15__threshX_Q_r15, threshX_HighQ_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThresholdQ_r9,
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
		"threshX-HighQ-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqNR_r15__threshX_Q_r15, threshX_LowQ_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThresholdQ_r9,
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
		"threshX-LowQ-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_threshX_Q_r15_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_threshX_Q_r15_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* threshX-HighQ-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* threshX-LowQ-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_threshX_Q_r15_specs_16 = {
	sizeof(struct CarrierFreqNR_r15__threshX_Q_r15),
	offsetof(struct CarrierFreqNR_r15__threshX_Q_r15, _asn_ctx),
	asn_MAP_threshX_Q_r15_tag2el_16,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_threshX_Q_r15_16 = {
	"threshX-Q-r15",
	"threshX-Q-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_threshX_Q_r15_tags_16,
	sizeof(asn_DEF_threshX_Q_r15_tags_16)
		/sizeof(asn_DEF_threshX_Q_r15_tags_16[0]) - 1, /* 1 */
	asn_DEF_threshX_Q_r15_tags_16,	/* Same as above */
	sizeof(asn_DEF_threshX_Q_r15_tags_16)
		/sizeof(asn_DEF_threshX_Q_r15_tags_16[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_threshX_Q_r15_16,
	2,	/* Elements count */
	&asn_SPC_threshX_Q_r15_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_28[] = {
	{ ATF_POINTER, 3, offsetof(struct CarrierFreqNR_r15__ext1, multiBandNsPmaxListNR_v1550),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiBandNsPmaxListNR_1_v1550,
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
		"multiBandNsPmaxListNR-v1550"
		},
	{ ATF_POINTER, 2, offsetof(struct CarrierFreqNR_r15__ext1, multiBandNsPmaxListNR_SUL_v1550),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiBandNsPmaxListNR_v1550,
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
		"multiBandNsPmaxListNR-SUL-v1550"
		},
	{ ATF_POINTER, 1, offsetof(struct CarrierFreqNR_r15__ext1, ssb_ToMeasure_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SSB_ToMeasure_r15,
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
		"ssb-ToMeasure-r15"
		},
};
static const int asn_MAP_ext1_oms_28[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_28[] = {
	(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_28[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* multiBandNsPmaxListNR-v1550 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* multiBandNsPmaxListNR-SUL-v1550 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ssb-ToMeasure-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_28 = {
	sizeof(struct CarrierFreqNR_r15__ext1),
	offsetof(struct CarrierFreqNR_r15__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_28,
	3,	/* Count of tags in the map */
	asn_MAP_ext1_oms_28,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_28 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_28,
	sizeof(asn_DEF_ext1_tags_28)
		/sizeof(asn_DEF_ext1_tags_28[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_28,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_28)
		/sizeof(asn_DEF_ext1_tags_28[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext1_28,
	3,	/* Elements count */
	&asn_SPC_ext1_specs_28	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CarrierFreqNR_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqNR_r15, carrierFreq_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR_r15,
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
	{ ATF_POINTER, 3, offsetof(struct CarrierFreqNR_r15, multiBandInfoList_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiFrequencyBandListNR_r15,
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
		"multiBandInfoList-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct CarrierFreqNR_r15, multiBandInfoListSUL_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiFrequencyBandListNR_r15,
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
		"multiBandInfoListSUL-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct CarrierFreqNR_r15, measTimingConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MTC_SSB_NR_r15,
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
		"measTimingConfig-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqNR_r15, subcarrierSpacingSSB_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_subcarrierSpacingSSB_r15_6,
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
		"subcarrierSpacingSSB-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct CarrierFreqNR_r15, ss_RSSI_Measurement_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SS_RSSI_Measurement_r15,
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
		"ss-RSSI-Measurement-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct CarrierFreqNR_r15, cellReselectionPriority_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionPriority,
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
		"cellReselectionPriority-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct CarrierFreqNR_r15, cellReselectionSubPriority_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionSubPriority_r13,
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
		"cellReselectionSubPriority-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqNR_r15, threshX_High_r15),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
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
		"threshX-High-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqNR_r15, threshX_Low_r15),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
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
		"threshX-Low-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct CarrierFreqNR_r15, threshX_Q_r15),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_threshX_Q_r15_16,
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
		"threshX-Q-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqNR_r15, q_RxLevMin_r15),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_q_RxLevMin_r15_constr_19,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_q_RxLevMin_r15_constraint_1
		},
		0, 0, /* No default value */
		"q-RxLevMin-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct CarrierFreqNR_r15, q_RxLevMinSUL_r15),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_q_RxLevMinSUL_r15_constr_20,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_q_RxLevMinSUL_r15_constraint_1
		},
		0, 0, /* No default value */
		"q-RxLevMinSUL-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqNR_r15, p_MaxNR_r15),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_MaxNR_r15,
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
		"p-MaxNR-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct CarrierFreqNR_r15, ns_PmaxListNR_r15),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NS_PmaxListNR_r15,
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
		"ns-PmaxListNR-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct CarrierFreqNR_r15, q_QualMin_r15),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_q_QualMin_r15_constr_23,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_q_QualMin_r15_constraint_1
		},
		0, 0, /* No default value */
		"q-QualMin-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqNR_r15, deriveSSB_IndexFromCell_r15),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
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
		"deriveSSB-IndexFromCell-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct CarrierFreqNR_r15, maxRS_IndexCellQual_r15),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxRS_IndexCellQualNR_r15,
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
		"maxRS-IndexCellQual-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct CarrierFreqNR_r15, threshRS_Index_r15),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdListNR_r15,
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
		"threshRS-Index-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct CarrierFreqNR_r15, ext1),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		0,
		&asn_DEF_ext1_28,
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
};
static const int asn_MAP_CarrierFreqNR_r15_oms_1[] = { 1, 2, 3, 5, 6, 7, 10, 12, 14, 15, 17, 18, 19 };
static const ber_tlv_tag_t asn_DEF_CarrierFreqNR_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CarrierFreqNR_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* multiBandInfoList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* multiBandInfoListSUL-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measTimingConfig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* subcarrierSpacingSSB-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ss-RSSI-Measurement-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* cellReselectionPriority-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* cellReselectionSubPriority-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* threshX-High-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* threshX-Low-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* threshX-Q-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* q-RxLevMin-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* q-RxLevMinSUL-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* p-MaxNR-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* ns-PmaxListNR-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* q-QualMin-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* deriveSSB-IndexFromCell-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* maxRS-IndexCellQual-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* threshRS-Index-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqNR_r15_specs_1 = {
	sizeof(struct CarrierFreqNR_r15),
	offsetof(struct CarrierFreqNR_r15, _asn_ctx),
	asn_MAP_CarrierFreqNR_r15_tag2el_1,
	20,	/* Count of tags in the map */
	asn_MAP_CarrierFreqNR_r15_oms_1,	/* Optional members */
	12, 1,	/* Root/Additions */
	19,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CarrierFreqNR_r15 = {
	"CarrierFreqNR-r15",
	"CarrierFreqNR-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_CarrierFreqNR_r15_tags_1,
	sizeof(asn_DEF_CarrierFreqNR_r15_tags_1)
		/sizeof(asn_DEF_CarrierFreqNR_r15_tags_1[0]), /* 1 */
	asn_DEF_CarrierFreqNR_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_CarrierFreqNR_r15_tags_1)
		/sizeof(asn_DEF_CarrierFreqNR_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CarrierFreqNR_r15_1,
	20,	/* Elements count */
	&asn_SPC_CarrierFreqNR_r15_specs_1	/* Additional specs */
};

