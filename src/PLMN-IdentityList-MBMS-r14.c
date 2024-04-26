/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "PLMN-IdentityList-MBMS-r14.h"

#include "PLMN-Identity.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_PLMN_IdentityList_MBMS_r14_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (SIZE(1..6)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_PLMN_IdentityList_MBMS_r14_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PLMN_Identity,
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
static const ber_tlv_tag_t asn_DEF_PLMN_IdentityList_MBMS_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_PLMN_IdentityList_MBMS_r14_specs_1 = {
	sizeof(struct PLMN_IdentityList_MBMS_r14),
	offsetof(struct PLMN_IdentityList_MBMS_r14, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityList_MBMS_r14 = {
	"PLMN-IdentityList-MBMS-r14",
	"PLMN-IdentityList-MBMS-r14",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_PLMN_IdentityList_MBMS_r14_tags_1,
	sizeof(asn_DEF_PLMN_IdentityList_MBMS_r14_tags_1)
		/sizeof(asn_DEF_PLMN_IdentityList_MBMS_r14_tags_1[0]), /* 1 */
	asn_DEF_PLMN_IdentityList_MBMS_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_PLMN_IdentityList_MBMS_r14_tags_1)
		/sizeof(asn_DEF_PLMN_IdentityList_MBMS_r14_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_PLMN_IdentityList_MBMS_r14_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_PLMN_IdentityList_MBMS_r14_1,
	1,	/* Single element */
	&asn_SPC_PLMN_IdentityList_MBMS_r14_specs_1	/* Additional specs */
};

