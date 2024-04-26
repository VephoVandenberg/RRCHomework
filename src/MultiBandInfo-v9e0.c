/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "MultiBandInfo-v9e0.h"

asn_TYPE_member_t asn_MBR_MultiBandInfo_v9e0_1[] = {
	{ ATF_POINTER, 1, offsetof(struct MultiBandInfo_v9e0, freqBandIndicator_v9e0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqBandIndicator_v9e0,
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
		"freqBandIndicator-v9e0"
		},
};
static const int asn_MAP_MultiBandInfo_v9e0_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_MultiBandInfo_v9e0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MultiBandInfo_v9e0_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* freqBandIndicator-v9e0 */
};
asn_SEQUENCE_specifics_t asn_SPC_MultiBandInfo_v9e0_specs_1 = {
	sizeof(struct MultiBandInfo_v9e0),
	offsetof(struct MultiBandInfo_v9e0, _asn_ctx),
	asn_MAP_MultiBandInfo_v9e0_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_MultiBandInfo_v9e0_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MultiBandInfo_v9e0 = {
	"MultiBandInfo-v9e0",
	"MultiBandInfo-v9e0",
	&asn_OP_SEQUENCE,
	asn_DEF_MultiBandInfo_v9e0_tags_1,
	sizeof(asn_DEF_MultiBandInfo_v9e0_tags_1)
		/sizeof(asn_DEF_MultiBandInfo_v9e0_tags_1[0]), /* 1 */
	asn_DEF_MultiBandInfo_v9e0_tags_1,	/* Same as above */
	sizeof(asn_DEF_MultiBandInfo_v9e0_tags_1)
		/sizeof(asn_DEF_MultiBandInfo_v9e0_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MultiBandInfo_v9e0_1,
	1,	/* Elements count */
	&asn_SPC_MultiBandInfo_v9e0_specs_1	/* Additional specs */
};

