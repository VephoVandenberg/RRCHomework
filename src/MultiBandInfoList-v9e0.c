/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "MultiBandInfoList-v9e0.h"

#include "MultiBandInfo-v9e0.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_MultiBandInfoList_v9e0_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_MultiBandInfoList_v9e0_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_MultiBandInfo_v9e0,
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
static const ber_tlv_tag_t asn_DEF_MultiBandInfoList_v9e0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_MultiBandInfoList_v9e0_specs_1 = {
	sizeof(struct MultiBandInfoList_v9e0),
	offsetof(struct MultiBandInfoList_v9e0, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_MultiBandInfoList_v9e0 = {
	"MultiBandInfoList-v9e0",
	"MultiBandInfoList-v9e0",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_MultiBandInfoList_v9e0_tags_1,
	sizeof(asn_DEF_MultiBandInfoList_v9e0_tags_1)
		/sizeof(asn_DEF_MultiBandInfoList_v9e0_tags_1[0]), /* 1 */
	asn_DEF_MultiBandInfoList_v9e0_tags_1,	/* Same as above */
	sizeof(asn_DEF_MultiBandInfoList_v9e0_tags_1)
		/sizeof(asn_DEF_MultiBandInfoList_v9e0_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_MultiBandInfoList_v9e0_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_MultiBandInfoList_v9e0_1,
	1,	/* Single element */
	&asn_SPC_MultiBandInfoList_v9e0_specs_1	/* Additional specs */
};

