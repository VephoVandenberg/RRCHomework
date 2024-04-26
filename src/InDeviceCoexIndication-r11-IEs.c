/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "InDeviceCoexIndication-r11-IEs.h"

#include "AffectedCarrierFreqList-r11.h"
#include "TDM-AssistanceInfo-r11.h"
#include "InDeviceCoexIndication-v11d0-IEs.h"
asn_TYPE_member_t asn_MBR_InDeviceCoexIndication_r11_IEs_1[] = {
	{ ATF_POINTER, 4, offsetof(struct InDeviceCoexIndication_r11_IEs, affectedCarrierFreqList_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AffectedCarrierFreqList_r11,
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
		"affectedCarrierFreqList-r11"
		},
	{ ATF_POINTER, 3, offsetof(struct InDeviceCoexIndication_r11_IEs, tdm_AssistanceInfo_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TDM_AssistanceInfo_r11,
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
		"tdm-AssistanceInfo-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct InDeviceCoexIndication_r11_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct InDeviceCoexIndication_r11_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InDeviceCoexIndication_v11d0_IEs,
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
static const int asn_MAP_InDeviceCoexIndication_r11_IEs_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_InDeviceCoexIndication_r11_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_InDeviceCoexIndication_r11_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* affectedCarrierFreqList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tdm-AssistanceInfo-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_InDeviceCoexIndication_r11_IEs_specs_1 = {
	sizeof(struct InDeviceCoexIndication_r11_IEs),
	offsetof(struct InDeviceCoexIndication_r11_IEs, _asn_ctx),
	asn_MAP_InDeviceCoexIndication_r11_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_InDeviceCoexIndication_r11_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_InDeviceCoexIndication_r11_IEs = {
	"InDeviceCoexIndication-r11-IEs",
	"InDeviceCoexIndication-r11-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_InDeviceCoexIndication_r11_IEs_tags_1,
	sizeof(asn_DEF_InDeviceCoexIndication_r11_IEs_tags_1)
		/sizeof(asn_DEF_InDeviceCoexIndication_r11_IEs_tags_1[0]), /* 1 */
	asn_DEF_InDeviceCoexIndication_r11_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_InDeviceCoexIndication_r11_IEs_tags_1)
		/sizeof(asn_DEF_InDeviceCoexIndication_r11_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_InDeviceCoexIndication_r11_IEs_1,
	4,	/* Elements count */
	&asn_SPC_InDeviceCoexIndication_r11_IEs_specs_1	/* Additional specs */
};

