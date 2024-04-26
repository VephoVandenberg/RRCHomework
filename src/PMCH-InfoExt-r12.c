/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "PMCH-InfoExt-r12.h"

asn_TYPE_member_t asn_MBR_PMCH_InfoExt_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PMCH_InfoExt_r12, pmch_Config_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PMCH_Config_r12,
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
		"pmch-Config-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PMCH_InfoExt_r12, mbms_SessionInfoList_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_SessionInfoList_r9,
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
		"mbms-SessionInfoList-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_PMCH_InfoExt_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PMCH_InfoExt_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pmch-Config-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mbms-SessionInfoList-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_PMCH_InfoExt_r12_specs_1 = {
	sizeof(struct PMCH_InfoExt_r12),
	offsetof(struct PMCH_InfoExt_r12, _asn_ctx),
	asn_MAP_PMCH_InfoExt_r12_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PMCH_InfoExt_r12 = {
	"PMCH-InfoExt-r12",
	"PMCH-InfoExt-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_PMCH_InfoExt_r12_tags_1,
	sizeof(asn_DEF_PMCH_InfoExt_r12_tags_1)
		/sizeof(asn_DEF_PMCH_InfoExt_r12_tags_1[0]), /* 1 */
	asn_DEF_PMCH_InfoExt_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_PMCH_InfoExt_r12_tags_1)
		/sizeof(asn_DEF_PMCH_InfoExt_r12_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_PMCH_InfoExt_r12_1,
	2,	/* Elements count */
	&asn_SPC_PMCH_InfoExt_r12_specs_1	/* Additional specs */
};

