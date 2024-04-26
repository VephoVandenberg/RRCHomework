/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "SupportedBandCombinationAdd-v14b0.h"

#include "BandCombinationParameters-v14b0.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_SupportedBandCombinationAdd_v14b0_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_SupportedBandCombinationAdd_v14b0_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_BandCombinationParameters_v14b0,
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
static const ber_tlv_tag_t asn_DEF_SupportedBandCombinationAdd_v14b0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_SupportedBandCombinationAdd_v14b0_specs_1 = {
	sizeof(struct SupportedBandCombinationAdd_v14b0),
	offsetof(struct SupportedBandCombinationAdd_v14b0, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_SupportedBandCombinationAdd_v14b0 = {
	"SupportedBandCombinationAdd-v14b0",
	"SupportedBandCombinationAdd-v14b0",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_SupportedBandCombinationAdd_v14b0_tags_1,
	sizeof(asn_DEF_SupportedBandCombinationAdd_v14b0_tags_1)
		/sizeof(asn_DEF_SupportedBandCombinationAdd_v14b0_tags_1[0]), /* 1 */
	asn_DEF_SupportedBandCombinationAdd_v14b0_tags_1,	/* Same as above */
	sizeof(asn_DEF_SupportedBandCombinationAdd_v14b0_tags_1)
		/sizeof(asn_DEF_SupportedBandCombinationAdd_v14b0_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_SupportedBandCombinationAdd_v14b0_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_SupportedBandCombinationAdd_v14b0_1,
	1,	/* Single element */
	&asn_SPC_SupportedBandCombinationAdd_v14b0_specs_1	/* Additional specs */
};
