/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "PollPDU-v1310.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_PollPDU_v1310_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_PollPDU_v1310_value2enum_1[] = {
	{ 0,	4,	"p512" },
	{ 1,	5,	"p1024" },
	{ 2,	5,	"p2048" },
	{ 3,	5,	"p4096" },
	{ 4,	5,	"p6144" },
	{ 5,	5,	"p8192" },
	{ 6,	6,	"p12288" },
	{ 7,	6,	"p16384" }
};
static const unsigned int asn_MAP_PollPDU_v1310_enum2value_1[] = {
	1,	/* p1024(1) */
	6,	/* p12288(6) */
	7,	/* p16384(7) */
	2,	/* p2048(2) */
	3,	/* p4096(3) */
	0,	/* p512(0) */
	4,	/* p6144(4) */
	5	/* p8192(5) */
};
const asn_INTEGER_specifics_t asn_SPC_PollPDU_v1310_specs_1 = {
	asn_MAP_PollPDU_v1310_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_PollPDU_v1310_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_PollPDU_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PollPDU_v1310 = {
	"PollPDU-v1310",
	"PollPDU-v1310",
	&asn_OP_NativeEnumerated,
	asn_DEF_PollPDU_v1310_tags_1,
	sizeof(asn_DEF_PollPDU_v1310_tags_1)
		/sizeof(asn_DEF_PollPDU_v1310_tags_1[0]), /* 1 */
	asn_DEF_PollPDU_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_PollPDU_v1310_tags_1)
		/sizeof(asn_DEF_PollPDU_v1310_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_PollPDU_v1310_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_PollPDU_v1310_specs_1	/* Additional specs */
};

