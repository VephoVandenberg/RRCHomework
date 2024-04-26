/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "RRCConnectionReconfigurationComplete-v1020-IEs.h"

#include "RRCConnectionReconfigurationComplete-v1130-IEs.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_rlf_InfoAvailable_r10_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_logMeasAvailable_r10_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_rlf_InfoAvailable_r10_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_rlf_InfoAvailable_r10_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_rlf_InfoAvailable_r10_specs_2 = {
	asn_MAP_rlf_InfoAvailable_r10_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_rlf_InfoAvailable_r10_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rlf_InfoAvailable_r10_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlf_InfoAvailable_r10_2 = {
	"rlf-InfoAvailable-r10",
	"rlf-InfoAvailable-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_rlf_InfoAvailable_r10_tags_2,
	sizeof(asn_DEF_rlf_InfoAvailable_r10_tags_2)
		/sizeof(asn_DEF_rlf_InfoAvailable_r10_tags_2[0]) - 1, /* 1 */
	asn_DEF_rlf_InfoAvailable_r10_tags_2,	/* Same as above */
	sizeof(asn_DEF_rlf_InfoAvailable_r10_tags_2)
		/sizeof(asn_DEF_rlf_InfoAvailable_r10_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_rlf_InfoAvailable_r10_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rlf_InfoAvailable_r10_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_logMeasAvailable_r10_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_logMeasAvailable_r10_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_logMeasAvailable_r10_specs_4 = {
	asn_MAP_logMeasAvailable_r10_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_logMeasAvailable_r10_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_logMeasAvailable_r10_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_logMeasAvailable_r10_4 = {
	"logMeasAvailable-r10",
	"logMeasAvailable-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_logMeasAvailable_r10_tags_4,
	sizeof(asn_DEF_logMeasAvailable_r10_tags_4)
		/sizeof(asn_DEF_logMeasAvailable_r10_tags_4[0]) - 1, /* 1 */
	asn_DEF_logMeasAvailable_r10_tags_4,	/* Same as above */
	sizeof(asn_DEF_logMeasAvailable_r10_tags_4)
		/sizeof(asn_DEF_logMeasAvailable_r10_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_logMeasAvailable_r10_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_logMeasAvailable_r10_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCConnectionReconfigurationComplete_v1020_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionReconfigurationComplete_v1020_IEs, rlf_InfoAvailable_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rlf_InfoAvailable_r10_2,
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
		"rlf-InfoAvailable-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionReconfigurationComplete_v1020_IEs, logMeasAvailable_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_logMeasAvailable_r10_4,
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
		"logMeasAvailable-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionReconfigurationComplete_v1020_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReconfigurationComplete_v1130_IEs,
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
static const int asn_MAP_RRCConnectionReconfigurationComplete_v1020_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionReconfigurationComplete_v1020_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionReconfigurationComplete_v1020_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlf-InfoAvailable-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* logMeasAvailable-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfigurationComplete_v1020_IEs_specs_1 = {
	sizeof(struct RRCConnectionReconfigurationComplete_v1020_IEs),
	offsetof(struct RRCConnectionReconfigurationComplete_v1020_IEs, _asn_ctx),
	asn_MAP_RRCConnectionReconfigurationComplete_v1020_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RRCConnectionReconfigurationComplete_v1020_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfigurationComplete_v1020_IEs = {
	"RRCConnectionReconfigurationComplete-v1020-IEs",
	"RRCConnectionReconfigurationComplete-v1020-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionReconfigurationComplete_v1020_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionReconfigurationComplete_v1020_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionReconfigurationComplete_v1020_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionReconfigurationComplete_v1020_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionReconfigurationComplete_v1020_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionReconfigurationComplete_v1020_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RRCConnectionReconfigurationComplete_v1020_IEs_1,
	3,	/* Elements count */
	&asn_SPC_RRCConnectionReconfigurationComplete_v1020_IEs_specs_1	/* Additional specs */
};

