/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "Paging-v920-IEs.h"

#include "Paging-v1130-IEs.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_cmas_Indication_r9_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_cmas_Indication_r9_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_cmas_Indication_r9_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_cmas_Indication_r9_specs_2 = {
	asn_MAP_cmas_Indication_r9_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_cmas_Indication_r9_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cmas_Indication_r9_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cmas_Indication_r9_2 = {
	"cmas-Indication-r9",
	"cmas-Indication-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_cmas_Indication_r9_tags_2,
	sizeof(asn_DEF_cmas_Indication_r9_tags_2)
		/sizeof(asn_DEF_cmas_Indication_r9_tags_2[0]) - 1, /* 1 */
	asn_DEF_cmas_Indication_r9_tags_2,	/* Same as above */
	sizeof(asn_DEF_cmas_Indication_r9_tags_2)
		/sizeof(asn_DEF_cmas_Indication_r9_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_cmas_Indication_r9_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cmas_Indication_r9_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Paging_v920_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct Paging_v920_IEs, cmas_Indication_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cmas_Indication_r9_2,
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
		"cmas-Indication-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct Paging_v920_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Paging_v1130_IEs,
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
static const int asn_MAP_Paging_v920_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_Paging_v920_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Paging_v920_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cmas-Indication-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_Paging_v920_IEs_specs_1 = {
	sizeof(struct Paging_v920_IEs),
	offsetof(struct Paging_v920_IEs, _asn_ctx),
	asn_MAP_Paging_v920_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_Paging_v920_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Paging_v920_IEs = {
	"Paging-v920-IEs",
	"Paging-v920-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_Paging_v920_IEs_tags_1,
	sizeof(asn_DEF_Paging_v920_IEs_tags_1)
		/sizeof(asn_DEF_Paging_v920_IEs_tags_1[0]), /* 1 */
	asn_DEF_Paging_v920_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_Paging_v920_IEs_tags_1)
		/sizeof(asn_DEF_Paging_v920_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_Paging_v920_IEs_1,
	2,	/* Elements count */
	&asn_SPC_Paging_v920_IEs_specs_1	/* Additional specs */
};

