/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "NZP-ResourceConfig-r13.h"

static asn_TYPE_member_t asn_MBR_ext1_4[] = {
	{ ATF_POINTER, 2, offsetof(struct NZP_ResourceConfig_r13__ext1, transmissionComb_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NZP_TransmissionComb_r14,
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
		"transmissionComb-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct NZP_ResourceConfig_r13__ext1, frequencyDensity_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NZP_FrequencyDensity_r14,
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
		"frequencyDensity-r14"
		},
};
static const int asn_MAP_ext1_oms_4[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* transmissionComb-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* frequencyDensity-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_4 = {
	sizeof(struct NZP_ResourceConfig_r13__ext1),
	offsetof(struct NZP_ResourceConfig_r13__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_4,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_4 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_4,
	sizeof(asn_DEF_ext1_tags_4)
		/sizeof(asn_DEF_ext1_tags_4[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_4,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_4)
		/sizeof(asn_DEF_ext1_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext1_4,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NZP_ResourceConfig_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NZP_ResourceConfig_r13, resourceConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResourceConfig_r13,
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
		"resourceConfig-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct NZP_ResourceConfig_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ext1_4,
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
static const int asn_MAP_NZP_ResourceConfig_r13_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_NZP_ResourceConfig_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NZP_ResourceConfig_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* resourceConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_NZP_ResourceConfig_r13_specs_1 = {
	sizeof(struct NZP_ResourceConfig_r13),
	offsetof(struct NZP_ResourceConfig_r13, _asn_ctx),
	asn_MAP_NZP_ResourceConfig_r13_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NZP_ResourceConfig_r13_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NZP_ResourceConfig_r13 = {
	"NZP-ResourceConfig-r13",
	"NZP-ResourceConfig-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_NZP_ResourceConfig_r13_tags_1,
	sizeof(asn_DEF_NZP_ResourceConfig_r13_tags_1)
		/sizeof(asn_DEF_NZP_ResourceConfig_r13_tags_1[0]), /* 1 */
	asn_DEF_NZP_ResourceConfig_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_NZP_ResourceConfig_r13_tags_1)
		/sizeof(asn_DEF_NZP_ResourceConfig_r13_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NZP_ResourceConfig_r13_1,
	2,	/* Elements count */
	&asn_SPC_NZP_ResourceConfig_r13_specs_1	/* Additional specs */
};

