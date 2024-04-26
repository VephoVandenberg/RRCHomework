/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "SIB-GuardbandGuardbandTDD-NB-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_sib_GuardbandGuardbandLocation_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_sib_GuardbandGuardbandLocation_r15_value2enum_2[] = {
	{ 0,	4,	"same" },
	{ 1,	8,	"opposite" }
};
static const unsigned int asn_MAP_sib_GuardbandGuardbandLocation_r15_enum2value_2[] = {
	1,	/* opposite(1) */
	0	/* same(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_sib_GuardbandGuardbandLocation_r15_specs_2 = {
	asn_MAP_sib_GuardbandGuardbandLocation_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_sib_GuardbandGuardbandLocation_r15_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sib_GuardbandGuardbandLocation_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sib_GuardbandGuardbandLocation_r15_2 = {
	"sib-GuardbandGuardbandLocation-r15",
	"sib-GuardbandGuardbandLocation-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_sib_GuardbandGuardbandLocation_r15_tags_2,
	sizeof(asn_DEF_sib_GuardbandGuardbandLocation_r15_tags_2)
		/sizeof(asn_DEF_sib_GuardbandGuardbandLocation_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_sib_GuardbandGuardbandLocation_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_sib_GuardbandGuardbandLocation_r15_tags_2)
		/sizeof(asn_DEF_sib_GuardbandGuardbandLocation_r15_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_sib_GuardbandGuardbandLocation_r15_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sib_GuardbandGuardbandLocation_r15_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SIB_GuardbandGuardbandTDD_NB_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SIB_GuardbandGuardbandTDD_NB_r15, sib_GuardbandGuardbandLocation_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sib_GuardbandGuardbandLocation_r15_2,
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
		"sib-GuardbandGuardbandLocation-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_SIB_GuardbandGuardbandTDD_NB_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SIB_GuardbandGuardbandTDD_NB_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sib-GuardbandGuardbandLocation-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_SIB_GuardbandGuardbandTDD_NB_r15_specs_1 = {
	sizeof(struct SIB_GuardbandGuardbandTDD_NB_r15),
	offsetof(struct SIB_GuardbandGuardbandTDD_NB_r15, _asn_ctx),
	asn_MAP_SIB_GuardbandGuardbandTDD_NB_r15_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SIB_GuardbandGuardbandTDD_NB_r15 = {
	"SIB-GuardbandGuardbandTDD-NB-r15",
	"SIB-GuardbandGuardbandTDD-NB-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_SIB_GuardbandGuardbandTDD_NB_r15_tags_1,
	sizeof(asn_DEF_SIB_GuardbandGuardbandTDD_NB_r15_tags_1)
		/sizeof(asn_DEF_SIB_GuardbandGuardbandTDD_NB_r15_tags_1[0]), /* 1 */
	asn_DEF_SIB_GuardbandGuardbandTDD_NB_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_SIB_GuardbandGuardbandTDD_NB_r15_tags_1)
		/sizeof(asn_DEF_SIB_GuardbandGuardbandTDD_NB_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SIB_GuardbandGuardbandTDD_NB_r15_1,
	1,	/* Elements count */
	&asn_SPC_SIB_GuardbandGuardbandTDD_NB_r15_specs_1	/* Additional specs */
};

