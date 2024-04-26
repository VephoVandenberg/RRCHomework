/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "SCGFailureInformation-r12-IEs.h"

#include "FailureReportSCG-r12.h"
#include "SCGFailureInformation-v1310-IEs.h"
asn_TYPE_member_t asn_MBR_SCGFailureInformation_r12_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SCGFailureInformation_r12_IEs, failureReportSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FailureReportSCG_r12,
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
		"failureReportSCG-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct SCGFailureInformation_r12_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCGFailureInformation_v1310_IEs,
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
		"nonCriticalExtension"
		},
};
static const int asn_MAP_SCGFailureInformation_r12_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SCGFailureInformation_r12_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SCGFailureInformation_r12_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* failureReportSCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SCGFailureInformation_r12_IEs_specs_1 = {
	sizeof(struct SCGFailureInformation_r12_IEs),
	offsetof(struct SCGFailureInformation_r12_IEs, _asn_ctx),
	asn_MAP_SCGFailureInformation_r12_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SCGFailureInformation_r12_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SCGFailureInformation_r12_IEs = {
	"SCGFailureInformation-r12-IEs",
	"SCGFailureInformation-r12-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_SCGFailureInformation_r12_IEs_tags_1,
	sizeof(asn_DEF_SCGFailureInformation_r12_IEs_tags_1)
		/sizeof(asn_DEF_SCGFailureInformation_r12_IEs_tags_1[0]), /* 1 */
	asn_DEF_SCGFailureInformation_r12_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCGFailureInformation_r12_IEs_tags_1)
		/sizeof(asn_DEF_SCGFailureInformation_r12_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SCGFailureInformation_r12_IEs_1,
	2,	/* Elements count */
	&asn_SPC_SCGFailureInformation_r12_IEs_specs_1	/* Additional specs */
};

