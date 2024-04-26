/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "SBCCH-SL-BCH-Message.h"

static asn_TYPE_member_t asn_MBR_SBCCH_SL_BCH_Message_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SBCCH_SL_BCH_Message, message),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SBCCH_SL_BCH_MessageType,
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
		"message"
		},
};
static const ber_tlv_tag_t asn_DEF_SBCCH_SL_BCH_Message_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SBCCH_SL_BCH_Message_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* message */
};
static asn_SEQUENCE_specifics_t asn_SPC_SBCCH_SL_BCH_Message_specs_1 = {
	sizeof(struct SBCCH_SL_BCH_Message),
	offsetof(struct SBCCH_SL_BCH_Message, _asn_ctx),
	asn_MAP_SBCCH_SL_BCH_Message_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SBCCH_SL_BCH_Message = {
	"SBCCH-SL-BCH-Message",
	"SBCCH-SL-BCH-Message",
	&asn_OP_SEQUENCE,
	asn_DEF_SBCCH_SL_BCH_Message_tags_1,
	sizeof(asn_DEF_SBCCH_SL_BCH_Message_tags_1)
		/sizeof(asn_DEF_SBCCH_SL_BCH_Message_tags_1[0]), /* 1 */
	asn_DEF_SBCCH_SL_BCH_Message_tags_1,	/* Same as above */
	sizeof(asn_DEF_SBCCH_SL_BCH_Message_tags_1)
		/sizeof(asn_DEF_SBCCH_SL_BCH_Message_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SBCCH_SL_BCH_Message_1,
	1,	/* Elements count */
	&asn_SPC_SBCCH_SL_BCH_Message_specs_1	/* Additional specs */
};

