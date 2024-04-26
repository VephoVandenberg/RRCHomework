/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "SCG-ConfigInfo-v1430-IEs.h"

#include "MeasGapConfigPerCC-List-r14.h"
#include "SCG-ConfigInfo-v1530-IEs.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_makeBeforeBreakSCG_Req_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_makeBeforeBreakSCG_Req_r14_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_makeBeforeBreakSCG_Req_r14_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_makeBeforeBreakSCG_Req_r14_specs_2 = {
	asn_MAP_makeBeforeBreakSCG_Req_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_makeBeforeBreakSCG_Req_r14_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_makeBeforeBreakSCG_Req_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_makeBeforeBreakSCG_Req_r14_2 = {
	"makeBeforeBreakSCG-Req-r14",
	"makeBeforeBreakSCG-Req-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_makeBeforeBreakSCG_Req_r14_tags_2,
	sizeof(asn_DEF_makeBeforeBreakSCG_Req_r14_tags_2)
		/sizeof(asn_DEF_makeBeforeBreakSCG_Req_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_makeBeforeBreakSCG_Req_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_makeBeforeBreakSCG_Req_r14_tags_2)
		/sizeof(asn_DEF_makeBeforeBreakSCG_Req_r14_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_makeBeforeBreakSCG_Req_r14_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_makeBeforeBreakSCG_Req_r14_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SCG_ConfigInfo_v1430_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SCG_ConfigInfo_v1430_IEs, makeBeforeBreakSCG_Req_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_makeBeforeBreakSCG_Req_r14_2,
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
		"makeBeforeBreakSCG-Req-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct SCG_ConfigInfo_v1430_IEs, measGapConfigPerCC_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasGapConfigPerCC_List_r14,
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
		"measGapConfigPerCC-List"
		},
	{ ATF_POINTER, 1, offsetof(struct SCG_ConfigInfo_v1430_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCG_ConfigInfo_v1530_IEs,
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
		"nonCriticalExtension"
		},
};
static const int asn_MAP_SCG_ConfigInfo_v1430_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_SCG_ConfigInfo_v1430_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SCG_ConfigInfo_v1430_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* makeBeforeBreakSCG-Req-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measGapConfigPerCC-List */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SCG_ConfigInfo_v1430_IEs_specs_1 = {
	sizeof(struct SCG_ConfigInfo_v1430_IEs),
	offsetof(struct SCG_ConfigInfo_v1430_IEs, _asn_ctx),
	asn_MAP_SCG_ConfigInfo_v1430_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SCG_ConfigInfo_v1430_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SCG_ConfigInfo_v1430_IEs = {
	"SCG-ConfigInfo-v1430-IEs",
	"SCG-ConfigInfo-v1430-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_SCG_ConfigInfo_v1430_IEs_tags_1,
	sizeof(asn_DEF_SCG_ConfigInfo_v1430_IEs_tags_1)
		/sizeof(asn_DEF_SCG_ConfigInfo_v1430_IEs_tags_1[0]), /* 1 */
	asn_DEF_SCG_ConfigInfo_v1430_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCG_ConfigInfo_v1430_IEs_tags_1)
		/sizeof(asn_DEF_SCG_ConfigInfo_v1430_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SCG_ConfigInfo_v1430_IEs_1,
	3,	/* Elements count */
	&asn_SPC_SCG_ConfigInfo_v1430_IEs_specs_1	/* Additional specs */
};

