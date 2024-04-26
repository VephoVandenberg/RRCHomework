/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "RadioResourceConfigCommonSCell-v1440.h"

static asn_TYPE_member_t asn_MBR_ul_FreqInfo_v1440_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_v1440__ul_Configuration_v1440__ul_FreqInfo_v1440, additionalSpectrumEmissionSCell_v1440),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSpectrumEmission_v10l0,
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
		"additionalSpectrumEmissionSCell-v1440"
		},
};
static const ber_tlv_tag_t asn_DEF_ul_FreqInfo_v1440_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ul_FreqInfo_v1440_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* additionalSpectrumEmissionSCell-v1440 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ul_FreqInfo_v1440_specs_3 = {
	sizeof(struct RadioResourceConfigCommonSCell_v1440__ul_Configuration_v1440__ul_FreqInfo_v1440),
	offsetof(struct RadioResourceConfigCommonSCell_v1440__ul_Configuration_v1440__ul_FreqInfo_v1440, _asn_ctx),
	asn_MAP_ul_FreqInfo_v1440_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_FreqInfo_v1440_3 = {
	"ul-FreqInfo-v1440",
	"ul-FreqInfo-v1440",
	&asn_OP_SEQUENCE,
	asn_DEF_ul_FreqInfo_v1440_tags_3,
	sizeof(asn_DEF_ul_FreqInfo_v1440_tags_3)
		/sizeof(asn_DEF_ul_FreqInfo_v1440_tags_3[0]) - 1, /* 1 */
	asn_DEF_ul_FreqInfo_v1440_tags_3,	/* Same as above */
	sizeof(asn_DEF_ul_FreqInfo_v1440_tags_3)
		/sizeof(asn_DEF_ul_FreqInfo_v1440_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ul_FreqInfo_v1440_3,
	1,	/* Elements count */
	&asn_SPC_ul_FreqInfo_v1440_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ul_Configuration_v1440_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_v1440__ul_Configuration_v1440, ul_FreqInfo_v1440),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ul_FreqInfo_v1440_3,
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
		"ul-FreqInfo-v1440"
		},
};
static const ber_tlv_tag_t asn_DEF_ul_Configuration_v1440_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ul_Configuration_v1440_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ul-FreqInfo-v1440 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ul_Configuration_v1440_specs_2 = {
	sizeof(struct RadioResourceConfigCommonSCell_v1440__ul_Configuration_v1440),
	offsetof(struct RadioResourceConfigCommonSCell_v1440__ul_Configuration_v1440, _asn_ctx),
	asn_MAP_ul_Configuration_v1440_tag2el_2,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_Configuration_v1440_2 = {
	"ul-Configuration-v1440",
	"ul-Configuration-v1440",
	&asn_OP_SEQUENCE,
	asn_DEF_ul_Configuration_v1440_tags_2,
	sizeof(asn_DEF_ul_Configuration_v1440_tags_2)
		/sizeof(asn_DEF_ul_Configuration_v1440_tags_2[0]) - 1, /* 1 */
	asn_DEF_ul_Configuration_v1440_tags_2,	/* Same as above */
	sizeof(asn_DEF_ul_Configuration_v1440_tags_2)
		/sizeof(asn_DEF_ul_Configuration_v1440_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ul_Configuration_v1440_2,
	1,	/* Elements count */
	&asn_SPC_ul_Configuration_v1440_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RadioResourceConfigCommonSCell_v1440_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_v1440, ul_Configuration_v1440),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ul_Configuration_v1440_2,
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
		"ul-Configuration-v1440"
		},
};
static const ber_tlv_tag_t asn_DEF_RadioResourceConfigCommonSCell_v1440_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RadioResourceConfigCommonSCell_v1440_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ul-Configuration-v1440 */
};
asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigCommonSCell_v1440_specs_1 = {
	sizeof(struct RadioResourceConfigCommonSCell_v1440),
	offsetof(struct RadioResourceConfigCommonSCell_v1440, _asn_ctx),
	asn_MAP_RadioResourceConfigCommonSCell_v1440_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigCommonSCell_v1440 = {
	"RadioResourceConfigCommonSCell-v1440",
	"RadioResourceConfigCommonSCell-v1440",
	&asn_OP_SEQUENCE,
	asn_DEF_RadioResourceConfigCommonSCell_v1440_tags_1,
	sizeof(asn_DEF_RadioResourceConfigCommonSCell_v1440_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommonSCell_v1440_tags_1[0]), /* 1 */
	asn_DEF_RadioResourceConfigCommonSCell_v1440_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioResourceConfigCommonSCell_v1440_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommonSCell_v1440_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RadioResourceConfigCommonSCell_v1440_1,
	1,	/* Elements count */
	&asn_SPC_RadioResourceConfigCommonSCell_v1440_specs_1	/* Additional specs */
};

