/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "InterFreqNeighCellInfo-NB-v1530.h"

#include "NSSS-RRM-Config-NB-r15.h"
asn_TYPE_member_t asn_MBR_InterFreqNeighCellInfo_NB_v1530_1[] = {
	{ ATF_POINTER, 1, offsetof(struct InterFreqNeighCellInfo_NB_v1530, nsss_RRM_Config_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NSSS_RRM_Config_NB_r15,
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
		"nsss-RRM-Config-r15"
		},
};
static const int asn_MAP_InterFreqNeighCellInfo_NB_v1530_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_InterFreqNeighCellInfo_NB_v1530_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_InterFreqNeighCellInfo_NB_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nsss-RRM-Config-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_InterFreqNeighCellInfo_NB_v1530_specs_1 = {
	sizeof(struct InterFreqNeighCellInfo_NB_v1530),
	offsetof(struct InterFreqNeighCellInfo_NB_v1530, _asn_ctx),
	asn_MAP_InterFreqNeighCellInfo_NB_v1530_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_InterFreqNeighCellInfo_NB_v1530_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_InterFreqNeighCellInfo_NB_v1530 = {
	"InterFreqNeighCellInfo-NB-v1530",
	"InterFreqNeighCellInfo-NB-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_InterFreqNeighCellInfo_NB_v1530_tags_1,
	sizeof(asn_DEF_InterFreqNeighCellInfo_NB_v1530_tags_1)
		/sizeof(asn_DEF_InterFreqNeighCellInfo_NB_v1530_tags_1[0]), /* 1 */
	asn_DEF_InterFreqNeighCellInfo_NB_v1530_tags_1,	/* Same as above */
	sizeof(asn_DEF_InterFreqNeighCellInfo_NB_v1530_tags_1)
		/sizeof(asn_DEF_InterFreqNeighCellInfo_NB_v1530_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_InterFreqNeighCellInfo_NB_v1530_1,
	1,	/* Elements count */
	&asn_SPC_InterFreqNeighCellInfo_NB_v1530_specs_1	/* Additional specs */
};

