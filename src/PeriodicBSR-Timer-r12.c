/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "PeriodicBSR-Timer-r12.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_PeriodicBSR_Timer_r12_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_PeriodicBSR_Timer_r12_value2enum_1[] = {
	{ 0,	3,	"sf5" },
	{ 1,	4,	"sf10" },
	{ 2,	4,	"sf16" },
	{ 3,	4,	"sf20" },
	{ 4,	4,	"sf32" },
	{ 5,	4,	"sf40" },
	{ 6,	4,	"sf64" },
	{ 7,	4,	"sf80" },
	{ 8,	5,	"sf128" },
	{ 9,	5,	"sf160" },
	{ 10,	5,	"sf320" },
	{ 11,	5,	"sf640" },
	{ 12,	6,	"sf1280" },
	{ 13,	6,	"sf2560" },
	{ 14,	8,	"infinity" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_PeriodicBSR_Timer_r12_enum2value_1[] = {
	14,	/* infinity(14) */
	1,	/* sf10(1) */
	8,	/* sf128(8) */
	12,	/* sf1280(12) */
	2,	/* sf16(2) */
	9,	/* sf160(9) */
	3,	/* sf20(3) */
	13,	/* sf2560(13) */
	4,	/* sf32(4) */
	10,	/* sf320(10) */
	5,	/* sf40(5) */
	0,	/* sf5(0) */
	6,	/* sf64(6) */
	11,	/* sf640(11) */
	7,	/* sf80(7) */
	15	/* spare1(15) */
};
const asn_INTEGER_specifics_t asn_SPC_PeriodicBSR_Timer_r12_specs_1 = {
	asn_MAP_PeriodicBSR_Timer_r12_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_PeriodicBSR_Timer_r12_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_PeriodicBSR_Timer_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PeriodicBSR_Timer_r12 = {
	"PeriodicBSR-Timer-r12",
	"PeriodicBSR-Timer-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_PeriodicBSR_Timer_r12_tags_1,
	sizeof(asn_DEF_PeriodicBSR_Timer_r12_tags_1)
		/sizeof(asn_DEF_PeriodicBSR_Timer_r12_tags_1[0]), /* 1 */
	asn_DEF_PeriodicBSR_Timer_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_PeriodicBSR_Timer_r12_tags_1)
		/sizeof(asn_DEF_PeriodicBSR_Timer_r12_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_PeriodicBSR_Timer_r12_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_PeriodicBSR_Timer_r12_specs_1	/* Additional specs */
};

