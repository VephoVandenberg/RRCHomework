/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "ReportQuantityWLAN-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_bandRequestWLAN_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_carrierInfoRequestWLAN_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_availableAdmissionCapacityRequestWLAN_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_backhaulDL_BandwidthRequestWLAN_r13_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_backhaulUL_BandwidthRequestWLAN_r13_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_channelUtilizationRequestWLAN_r13_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_stationCountRequestWLAN_r13_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_bandRequestWLAN_r13_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_bandRequestWLAN_r13_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_bandRequestWLAN_r13_specs_2 = {
	asn_MAP_bandRequestWLAN_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_bandRequestWLAN_r13_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_bandRequestWLAN_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bandRequestWLAN_r13_2 = {
	"bandRequestWLAN-r13",
	"bandRequestWLAN-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_bandRequestWLAN_r13_tags_2,
	sizeof(asn_DEF_bandRequestWLAN_r13_tags_2)
		/sizeof(asn_DEF_bandRequestWLAN_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_bandRequestWLAN_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_bandRequestWLAN_r13_tags_2)
		/sizeof(asn_DEF_bandRequestWLAN_r13_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_bandRequestWLAN_r13_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_bandRequestWLAN_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_carrierInfoRequestWLAN_r13_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_carrierInfoRequestWLAN_r13_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_carrierInfoRequestWLAN_r13_specs_4 = {
	asn_MAP_carrierInfoRequestWLAN_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_carrierInfoRequestWLAN_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_carrierInfoRequestWLAN_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_carrierInfoRequestWLAN_r13_4 = {
	"carrierInfoRequestWLAN-r13",
	"carrierInfoRequestWLAN-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_carrierInfoRequestWLAN_r13_tags_4,
	sizeof(asn_DEF_carrierInfoRequestWLAN_r13_tags_4)
		/sizeof(asn_DEF_carrierInfoRequestWLAN_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_carrierInfoRequestWLAN_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_carrierInfoRequestWLAN_r13_tags_4)
		/sizeof(asn_DEF_carrierInfoRequestWLAN_r13_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_carrierInfoRequestWLAN_r13_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_carrierInfoRequestWLAN_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_availableAdmissionCapacityRequestWLAN_r13_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_availableAdmissionCapacityRequestWLAN_r13_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_availableAdmissionCapacityRequestWLAN_r13_specs_6 = {
	asn_MAP_availableAdmissionCapacityRequestWLAN_r13_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_availableAdmissionCapacityRequestWLAN_r13_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_availableAdmissionCapacityRequestWLAN_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_availableAdmissionCapacityRequestWLAN_r13_6 = {
	"availableAdmissionCapacityRequestWLAN-r13",
	"availableAdmissionCapacityRequestWLAN-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_availableAdmissionCapacityRequestWLAN_r13_tags_6,
	sizeof(asn_DEF_availableAdmissionCapacityRequestWLAN_r13_tags_6)
		/sizeof(asn_DEF_availableAdmissionCapacityRequestWLAN_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_availableAdmissionCapacityRequestWLAN_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_availableAdmissionCapacityRequestWLAN_r13_tags_6)
		/sizeof(asn_DEF_availableAdmissionCapacityRequestWLAN_r13_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_availableAdmissionCapacityRequestWLAN_r13_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_availableAdmissionCapacityRequestWLAN_r13_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_backhaulDL_BandwidthRequestWLAN_r13_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_backhaulDL_BandwidthRequestWLAN_r13_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_backhaulDL_BandwidthRequestWLAN_r13_specs_8 = {
	asn_MAP_backhaulDL_BandwidthRequestWLAN_r13_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_backhaulDL_BandwidthRequestWLAN_r13_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_backhaulDL_BandwidthRequestWLAN_r13_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_backhaulDL_BandwidthRequestWLAN_r13_8 = {
	"backhaulDL-BandwidthRequestWLAN-r13",
	"backhaulDL-BandwidthRequestWLAN-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_backhaulDL_BandwidthRequestWLAN_r13_tags_8,
	sizeof(asn_DEF_backhaulDL_BandwidthRequestWLAN_r13_tags_8)
		/sizeof(asn_DEF_backhaulDL_BandwidthRequestWLAN_r13_tags_8[0]) - 1, /* 1 */
	asn_DEF_backhaulDL_BandwidthRequestWLAN_r13_tags_8,	/* Same as above */
	sizeof(asn_DEF_backhaulDL_BandwidthRequestWLAN_r13_tags_8)
		/sizeof(asn_DEF_backhaulDL_BandwidthRequestWLAN_r13_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_backhaulDL_BandwidthRequestWLAN_r13_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_backhaulDL_BandwidthRequestWLAN_r13_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_backhaulUL_BandwidthRequestWLAN_r13_value2enum_10[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_backhaulUL_BandwidthRequestWLAN_r13_enum2value_10[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_backhaulUL_BandwidthRequestWLAN_r13_specs_10 = {
	asn_MAP_backhaulUL_BandwidthRequestWLAN_r13_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_backhaulUL_BandwidthRequestWLAN_r13_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_backhaulUL_BandwidthRequestWLAN_r13_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_backhaulUL_BandwidthRequestWLAN_r13_10 = {
	"backhaulUL-BandwidthRequestWLAN-r13",
	"backhaulUL-BandwidthRequestWLAN-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_backhaulUL_BandwidthRequestWLAN_r13_tags_10,
	sizeof(asn_DEF_backhaulUL_BandwidthRequestWLAN_r13_tags_10)
		/sizeof(asn_DEF_backhaulUL_BandwidthRequestWLAN_r13_tags_10[0]) - 1, /* 1 */
	asn_DEF_backhaulUL_BandwidthRequestWLAN_r13_tags_10,	/* Same as above */
	sizeof(asn_DEF_backhaulUL_BandwidthRequestWLAN_r13_tags_10)
		/sizeof(asn_DEF_backhaulUL_BandwidthRequestWLAN_r13_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_backhaulUL_BandwidthRequestWLAN_r13_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_backhaulUL_BandwidthRequestWLAN_r13_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_channelUtilizationRequestWLAN_r13_value2enum_12[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_channelUtilizationRequestWLAN_r13_enum2value_12[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_channelUtilizationRequestWLAN_r13_specs_12 = {
	asn_MAP_channelUtilizationRequestWLAN_r13_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_channelUtilizationRequestWLAN_r13_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_channelUtilizationRequestWLAN_r13_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_channelUtilizationRequestWLAN_r13_12 = {
	"channelUtilizationRequestWLAN-r13",
	"channelUtilizationRequestWLAN-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_channelUtilizationRequestWLAN_r13_tags_12,
	sizeof(asn_DEF_channelUtilizationRequestWLAN_r13_tags_12)
		/sizeof(asn_DEF_channelUtilizationRequestWLAN_r13_tags_12[0]) - 1, /* 1 */
	asn_DEF_channelUtilizationRequestWLAN_r13_tags_12,	/* Same as above */
	sizeof(asn_DEF_channelUtilizationRequestWLAN_r13_tags_12)
		/sizeof(asn_DEF_channelUtilizationRequestWLAN_r13_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_channelUtilizationRequestWLAN_r13_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_channelUtilizationRequestWLAN_r13_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_stationCountRequestWLAN_r13_value2enum_14[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_stationCountRequestWLAN_r13_enum2value_14[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_stationCountRequestWLAN_r13_specs_14 = {
	asn_MAP_stationCountRequestWLAN_r13_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_stationCountRequestWLAN_r13_enum2value_14,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_stationCountRequestWLAN_r13_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_stationCountRequestWLAN_r13_14 = {
	"stationCountRequestWLAN-r13",
	"stationCountRequestWLAN-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_stationCountRequestWLAN_r13_tags_14,
	sizeof(asn_DEF_stationCountRequestWLAN_r13_tags_14)
		/sizeof(asn_DEF_stationCountRequestWLAN_r13_tags_14[0]) - 1, /* 1 */
	asn_DEF_stationCountRequestWLAN_r13_tags_14,	/* Same as above */
	sizeof(asn_DEF_stationCountRequestWLAN_r13_tags_14)
		/sizeof(asn_DEF_stationCountRequestWLAN_r13_tags_14[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_stationCountRequestWLAN_r13_constr_14,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_stationCountRequestWLAN_r13_specs_14	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ReportQuantityWLAN_r13_1[] = {
	{ ATF_POINTER, 7, offsetof(struct ReportQuantityWLAN_r13, bandRequestWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_bandRequestWLAN_r13_2,
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
		"bandRequestWLAN-r13"
		},
	{ ATF_POINTER, 6, offsetof(struct ReportQuantityWLAN_r13, carrierInfoRequestWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_carrierInfoRequestWLAN_r13_4,
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
		"carrierInfoRequestWLAN-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct ReportQuantityWLAN_r13, availableAdmissionCapacityRequestWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_availableAdmissionCapacityRequestWLAN_r13_6,
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
		"availableAdmissionCapacityRequestWLAN-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct ReportQuantityWLAN_r13, backhaulDL_BandwidthRequestWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_backhaulDL_BandwidthRequestWLAN_r13_8,
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
		"backhaulDL-BandwidthRequestWLAN-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct ReportQuantityWLAN_r13, backhaulUL_BandwidthRequestWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_backhaulUL_BandwidthRequestWLAN_r13_10,
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
		"backhaulUL-BandwidthRequestWLAN-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct ReportQuantityWLAN_r13, channelUtilizationRequestWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_channelUtilizationRequestWLAN_r13_12,
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
		"channelUtilizationRequestWLAN-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct ReportQuantityWLAN_r13, stationCountRequestWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_stationCountRequestWLAN_r13_14,
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
		"stationCountRequestWLAN-r13"
		},
};
static const int asn_MAP_ReportQuantityWLAN_r13_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_ReportQuantityWLAN_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReportQuantityWLAN_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandRequestWLAN-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* carrierInfoRequestWLAN-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* availableAdmissionCapacityRequestWLAN-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* backhaulDL-BandwidthRequestWLAN-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* backhaulUL-BandwidthRequestWLAN-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* channelUtilizationRequestWLAN-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* stationCountRequestWLAN-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_ReportQuantityWLAN_r13_specs_1 = {
	sizeof(struct ReportQuantityWLAN_r13),
	offsetof(struct ReportQuantityWLAN_r13, _asn_ctx),
	asn_MAP_ReportQuantityWLAN_r13_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_ReportQuantityWLAN_r13_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ReportQuantityWLAN_r13 = {
	"ReportQuantityWLAN-r13",
	"ReportQuantityWLAN-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_ReportQuantityWLAN_r13_tags_1,
	sizeof(asn_DEF_ReportQuantityWLAN_r13_tags_1)
		/sizeof(asn_DEF_ReportQuantityWLAN_r13_tags_1[0]), /* 1 */
	asn_DEF_ReportQuantityWLAN_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReportQuantityWLAN_r13_tags_1)
		/sizeof(asn_DEF_ReportQuantityWLAN_r13_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ReportQuantityWLAN_r13_1,
	7,	/* Elements count */
	&asn_SPC_ReportQuantityWLAN_r13_specs_1	/* Additional specs */
};

