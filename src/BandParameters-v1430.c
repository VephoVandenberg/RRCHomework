/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "BandParameters-v1430.h"

#include "MIMO-CA-ParametersPerBoBC-v1430.h"
#include "UL-256QAM-perCC-Info-r14.h"
#include "SRS-CapabilityPerBandPair-r14.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_ul_256QAM_perCC_InfoList_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 2UL && size <= 32UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_srs_CapabilityPerBandPairList_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 64UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_ul_256QAM_r14_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_ul_256QAM_perCC_InfoList_r14_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  2,  32 }	/* (SIZE(2..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_srs_CapabilityPerBandPairList_r14_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_ul_256QAM_perCC_InfoList_r14_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  2,  32 }	/* (SIZE(2..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_srs_CapabilityPerBandPairList_r14_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_ul_256QAM_r14_value2enum_3[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_ul_256QAM_r14_enum2value_3[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ul_256QAM_r14_specs_3 = {
	asn_MAP_ul_256QAM_r14_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_ul_256QAM_r14_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ul_256QAM_r14_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_256QAM_r14_3 = {
	"ul-256QAM-r14",
	"ul-256QAM-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_ul_256QAM_r14_tags_3,
	sizeof(asn_DEF_ul_256QAM_r14_tags_3)
		/sizeof(asn_DEF_ul_256QAM_r14_tags_3[0]) - 1, /* 1 */
	asn_DEF_ul_256QAM_r14_tags_3,	/* Same as above */
	sizeof(asn_DEF_ul_256QAM_r14_tags_3)
		/sizeof(asn_DEF_ul_256QAM_r14_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ul_256QAM_r14_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ul_256QAM_r14_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ul_256QAM_perCC_InfoList_r14_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_UL_256QAM_perCC_Info_r14,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ul_256QAM_perCC_InfoList_r14_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ul_256QAM_perCC_InfoList_r14_specs_5 = {
	sizeof(struct BandParameters_v1430__ul_256QAM_perCC_InfoList_r14),
	offsetof(struct BandParameters_v1430__ul_256QAM_perCC_InfoList_r14, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_256QAM_perCC_InfoList_r14_5 = {
	"ul-256QAM-perCC-InfoList-r14",
	"ul-256QAM-perCC-InfoList-r14",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ul_256QAM_perCC_InfoList_r14_tags_5,
	sizeof(asn_DEF_ul_256QAM_perCC_InfoList_r14_tags_5)
		/sizeof(asn_DEF_ul_256QAM_perCC_InfoList_r14_tags_5[0]) - 1, /* 1 */
	asn_DEF_ul_256QAM_perCC_InfoList_r14_tags_5,	/* Same as above */
	sizeof(asn_DEF_ul_256QAM_perCC_InfoList_r14_tags_5)
		/sizeof(asn_DEF_ul_256QAM_perCC_InfoList_r14_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ul_256QAM_perCC_InfoList_r14_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_ul_256QAM_perCC_InfoList_r14_5,
	1,	/* Single element */
	&asn_SPC_ul_256QAM_perCC_InfoList_r14_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_srs_CapabilityPerBandPairList_r14_7[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SRS_CapabilityPerBandPair_r14,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_srs_CapabilityPerBandPairList_r14_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_srs_CapabilityPerBandPairList_r14_specs_7 = {
	sizeof(struct BandParameters_v1430__srs_CapabilityPerBandPairList_r14),
	offsetof(struct BandParameters_v1430__srs_CapabilityPerBandPairList_r14, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_CapabilityPerBandPairList_r14_7 = {
	"srs-CapabilityPerBandPairList-r14",
	"srs-CapabilityPerBandPairList-r14",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_srs_CapabilityPerBandPairList_r14_tags_7,
	sizeof(asn_DEF_srs_CapabilityPerBandPairList_r14_tags_7)
		/sizeof(asn_DEF_srs_CapabilityPerBandPairList_r14_tags_7[0]) - 1, /* 1 */
	asn_DEF_srs_CapabilityPerBandPairList_r14_tags_7,	/* Same as above */
	sizeof(asn_DEF_srs_CapabilityPerBandPairList_r14_tags_7)
		/sizeof(asn_DEF_srs_CapabilityPerBandPairList_r14_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_srs_CapabilityPerBandPairList_r14_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_srs_CapabilityPerBandPairList_r14_7,
	1,	/* Single element */
	&asn_SPC_srs_CapabilityPerBandPairList_r14_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BandParameters_v1430_1[] = {
	{ ATF_POINTER, 4, offsetof(struct BandParameters_v1430, bandParametersDL_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_CA_ParametersPerBoBC_v1430,
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
		"bandParametersDL-v1430"
		},
	{ ATF_POINTER, 3, offsetof(struct BandParameters_v1430, ul_256QAM_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ul_256QAM_r14_3,
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
		"ul-256QAM-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct BandParameters_v1430, ul_256QAM_perCC_InfoList_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ul_256QAM_perCC_InfoList_r14_5,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_ul_256QAM_perCC_InfoList_r14_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_ul_256QAM_perCC_InfoList_r14_constraint_1
		},
		0, 0, /* No default value */
		"ul-256QAM-perCC-InfoList-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct BandParameters_v1430, srs_CapabilityPerBandPairList_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_srs_CapabilityPerBandPairList_r14_7,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_srs_CapabilityPerBandPairList_r14_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_srs_CapabilityPerBandPairList_r14_constraint_1
		},
		0, 0, /* No default value */
		"srs-CapabilityPerBandPairList-r14"
		},
};
static const int asn_MAP_BandParameters_v1430_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_BandParameters_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandParameters_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandParametersDL-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-256QAM-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ul-256QAM-perCC-InfoList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* srs-CapabilityPerBandPairList-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_BandParameters_v1430_specs_1 = {
	sizeof(struct BandParameters_v1430),
	offsetof(struct BandParameters_v1430, _asn_ctx),
	asn_MAP_BandParameters_v1430_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_BandParameters_v1430_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BandParameters_v1430 = {
	"BandParameters-v1430",
	"BandParameters-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_BandParameters_v1430_tags_1,
	sizeof(asn_DEF_BandParameters_v1430_tags_1)
		/sizeof(asn_DEF_BandParameters_v1430_tags_1[0]), /* 1 */
	asn_DEF_BandParameters_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandParameters_v1430_tags_1)
		/sizeof(asn_DEF_BandParameters_v1430_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_BandParameters_v1430_1,
	4,	/* Elements count */
	&asn_SPC_BandParameters_v1430_specs_1	/* Additional specs */
};

