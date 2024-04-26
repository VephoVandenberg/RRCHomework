/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "BandclassCDMA2000.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_BandclassCDMA2000_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  5,  5,  0,  31 }	/* (0..31,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_BandclassCDMA2000_value2enum_1[] = {
	{ 0,	3,	"bc0" },
	{ 1,	3,	"bc1" },
	{ 2,	3,	"bc2" },
	{ 3,	3,	"bc3" },
	{ 4,	3,	"bc4" },
	{ 5,	3,	"bc5" },
	{ 6,	3,	"bc6" },
	{ 7,	3,	"bc7" },
	{ 8,	3,	"bc8" },
	{ 9,	3,	"bc9" },
	{ 10,	4,	"bc10" },
	{ 11,	4,	"bc11" },
	{ 12,	4,	"bc12" },
	{ 13,	4,	"bc13" },
	{ 14,	4,	"bc14" },
	{ 15,	4,	"bc15" },
	{ 16,	4,	"bc16" },
	{ 17,	4,	"bc17" },
	{ 18,	9,	"bc18-v9a0" },
	{ 19,	9,	"bc19-v9a0" },
	{ 20,	9,	"bc20-v9a0" },
	{ 21,	9,	"bc21-v9a0" },
	{ 22,	7,	"spare10" },
	{ 23,	6,	"spare9" },
	{ 24,	6,	"spare8" },
	{ 25,	6,	"spare7" },
	{ 26,	6,	"spare6" },
	{ 27,	6,	"spare5" },
	{ 28,	6,	"spare4" },
	{ 29,	6,	"spare3" },
	{ 30,	6,	"spare2" },
	{ 31,	6,	"spare1" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_BandclassCDMA2000_enum2value_1[] = {
	0,	/* bc0(0) */
	1,	/* bc1(1) */
	10,	/* bc10(10) */
	11,	/* bc11(11) */
	12,	/* bc12(12) */
	13,	/* bc13(13) */
	14,	/* bc14(14) */
	15,	/* bc15(15) */
	16,	/* bc16(16) */
	17,	/* bc17(17) */
	18,	/* bc18-v9a0(18) */
	19,	/* bc19-v9a0(19) */
	2,	/* bc2(2) */
	20,	/* bc20-v9a0(20) */
	21,	/* bc21-v9a0(21) */
	3,	/* bc3(3) */
	4,	/* bc4(4) */
	5,	/* bc5(5) */
	6,	/* bc6(6) */
	7,	/* bc7(7) */
	8,	/* bc8(8) */
	9,	/* bc9(9) */
	31,	/* spare1(31) */
	22,	/* spare10(22) */
	30,	/* spare2(30) */
	29,	/* spare3(29) */
	28,	/* spare4(28) */
	27,	/* spare5(27) */
	26,	/* spare6(26) */
	25,	/* spare7(25) */
	24,	/* spare8(24) */
	23	/* spare9(23) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_BandclassCDMA2000_specs_1 = {
	asn_MAP_BandclassCDMA2000_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_BandclassCDMA2000_enum2value_1,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	33,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_BandclassCDMA2000_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_BandclassCDMA2000 = {
	"BandclassCDMA2000",
	"BandclassCDMA2000",
	&asn_OP_NativeEnumerated,
	asn_DEF_BandclassCDMA2000_tags_1,
	sizeof(asn_DEF_BandclassCDMA2000_tags_1)
		/sizeof(asn_DEF_BandclassCDMA2000_tags_1[0]), /* 1 */
	asn_DEF_BandclassCDMA2000_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandclassCDMA2000_tags_1)
		/sizeof(asn_DEF_BandclassCDMA2000_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_BandclassCDMA2000_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_BandclassCDMA2000_specs_1	/* Additional specs */
};

