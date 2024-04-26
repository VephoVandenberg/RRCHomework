/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "IRAT-ParametersGERAN.h"

asn_TYPE_member_t asn_MBR_IRAT_ParametersGERAN_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IRAT_ParametersGERAN, supportedBandListGERAN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedBandListGERAN,
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
		"supportedBandListGERAN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IRAT_ParametersGERAN, interRAT_PS_HO_ToGERAN),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
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
		"interRAT-PS-HO-ToGERAN"
		},
};
static const ber_tlv_tag_t asn_DEF_IRAT_ParametersGERAN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IRAT_ParametersGERAN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedBandListGERAN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interRAT-PS-HO-ToGERAN */
};
asn_SEQUENCE_specifics_t asn_SPC_IRAT_ParametersGERAN_specs_1 = {
	sizeof(struct IRAT_ParametersGERAN),
	offsetof(struct IRAT_ParametersGERAN, _asn_ctx),
	asn_MAP_IRAT_ParametersGERAN_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersGERAN = {
	"IRAT-ParametersGERAN",
	"IRAT-ParametersGERAN",
	&asn_OP_SEQUENCE,
	asn_DEF_IRAT_ParametersGERAN_tags_1,
	sizeof(asn_DEF_IRAT_ParametersGERAN_tags_1)
		/sizeof(asn_DEF_IRAT_ParametersGERAN_tags_1[0]), /* 1 */
	asn_DEF_IRAT_ParametersGERAN_tags_1,	/* Same as above */
	sizeof(asn_DEF_IRAT_ParametersGERAN_tags_1)
		/sizeof(asn_DEF_IRAT_ParametersGERAN_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_IRAT_ParametersGERAN_1,
	2,	/* Elements count */
	&asn_SPC_IRAT_ParametersGERAN_specs_1	/* Additional specs */
};

