/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "CA-MIMO-ParametersDL-r10.h"

asn_TYPE_member_t asn_MBR_CA_MIMO_ParametersDL_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CA_MIMO_ParametersDL_r10, ca_BandwidthClassDL_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CA_BandwidthClass_r10,
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
		"ca-BandwidthClassDL-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct CA_MIMO_ParametersDL_r10, supportedMIMO_CapabilityDL_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_CapabilityDL_r10,
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
		"supportedMIMO-CapabilityDL-r10"
		},
};
static const int asn_MAP_CA_MIMO_ParametersDL_r10_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_CA_MIMO_ParametersDL_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CA_MIMO_ParametersDL_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ca-BandwidthClassDL-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* supportedMIMO-CapabilityDL-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_CA_MIMO_ParametersDL_r10_specs_1 = {
	sizeof(struct CA_MIMO_ParametersDL_r10),
	offsetof(struct CA_MIMO_ParametersDL_r10, _asn_ctx),
	asn_MAP_CA_MIMO_ParametersDL_r10_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_CA_MIMO_ParametersDL_r10_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CA_MIMO_ParametersDL_r10 = {
	"CA-MIMO-ParametersDL-r10",
	"CA-MIMO-ParametersDL-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_CA_MIMO_ParametersDL_r10_tags_1,
	sizeof(asn_DEF_CA_MIMO_ParametersDL_r10_tags_1)
		/sizeof(asn_DEF_CA_MIMO_ParametersDL_r10_tags_1[0]), /* 1 */
	asn_DEF_CA_MIMO_ParametersDL_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_CA_MIMO_ParametersDL_r10_tags_1)
		/sizeof(asn_DEF_CA_MIMO_ParametersDL_r10_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CA_MIMO_ParametersDL_r10_1,
	2,	/* Elements count */
	&asn_SPC_CA_MIMO_ParametersDL_r10_specs_1	/* Additional specs */
};

