/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "MAC-Parameters-v1530.h"

#include "SkipSubframeProcessing-r15.h"
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
static int
memb_min_Proc_TimelineSubslot_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 3UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_min_Proc_TimelineSubslot_r15_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_earlyData_UP_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_dormantSCellState_r15_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_directSCellActivation_r15_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_directSCellHibernation_r15_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_extendedLCID_Duplication_r15_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_sps_ServingCell_r15_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_min_Proc_TimelineSubslot_r15_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_min_Proc_TimelineSubslot_r15_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_ProcessingTimelineSet_r15,
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
static const ber_tlv_tag_t asn_DEF_min_Proc_TimelineSubslot_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_min_Proc_TimelineSubslot_r15_specs_2 = {
	sizeof(struct MAC_Parameters_v1530__min_Proc_TimelineSubslot_r15),
	offsetof(struct MAC_Parameters_v1530__min_Proc_TimelineSubslot_r15, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_min_Proc_TimelineSubslot_r15_2 = {
	"min-Proc-TimelineSubslot-r15",
	"min-Proc-TimelineSubslot-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_min_Proc_TimelineSubslot_r15_tags_2,
	sizeof(asn_DEF_min_Proc_TimelineSubslot_r15_tags_2)
		/sizeof(asn_DEF_min_Proc_TimelineSubslot_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_min_Proc_TimelineSubslot_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_min_Proc_TimelineSubslot_r15_tags_2)
		/sizeof(asn_DEF_min_Proc_TimelineSubslot_r15_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_min_Proc_TimelineSubslot_r15_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_min_Proc_TimelineSubslot_r15_2,
	1,	/* Single element */
	&asn_SPC_min_Proc_TimelineSubslot_r15_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_earlyData_UP_r15_value2enum_5[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_earlyData_UP_r15_enum2value_5[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_earlyData_UP_r15_specs_5 = {
	asn_MAP_earlyData_UP_r15_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_earlyData_UP_r15_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_earlyData_UP_r15_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_earlyData_UP_r15_5 = {
	"earlyData-UP-r15",
	"earlyData-UP-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_earlyData_UP_r15_tags_5,
	sizeof(asn_DEF_earlyData_UP_r15_tags_5)
		/sizeof(asn_DEF_earlyData_UP_r15_tags_5[0]) - 1, /* 1 */
	asn_DEF_earlyData_UP_r15_tags_5,	/* Same as above */
	sizeof(asn_DEF_earlyData_UP_r15_tags_5)
		/sizeof(asn_DEF_earlyData_UP_r15_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_earlyData_UP_r15_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_earlyData_UP_r15_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dormantSCellState_r15_value2enum_7[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_dormantSCellState_r15_enum2value_7[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_dormantSCellState_r15_specs_7 = {
	asn_MAP_dormantSCellState_r15_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_dormantSCellState_r15_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dormantSCellState_r15_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dormantSCellState_r15_7 = {
	"dormantSCellState-r15",
	"dormantSCellState-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_dormantSCellState_r15_tags_7,
	sizeof(asn_DEF_dormantSCellState_r15_tags_7)
		/sizeof(asn_DEF_dormantSCellState_r15_tags_7[0]) - 1, /* 1 */
	asn_DEF_dormantSCellState_r15_tags_7,	/* Same as above */
	sizeof(asn_DEF_dormantSCellState_r15_tags_7)
		/sizeof(asn_DEF_dormantSCellState_r15_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_dormantSCellState_r15_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dormantSCellState_r15_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_directSCellActivation_r15_value2enum_9[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_directSCellActivation_r15_enum2value_9[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_directSCellActivation_r15_specs_9 = {
	asn_MAP_directSCellActivation_r15_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_directSCellActivation_r15_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_directSCellActivation_r15_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_directSCellActivation_r15_9 = {
	"directSCellActivation-r15",
	"directSCellActivation-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_directSCellActivation_r15_tags_9,
	sizeof(asn_DEF_directSCellActivation_r15_tags_9)
		/sizeof(asn_DEF_directSCellActivation_r15_tags_9[0]) - 1, /* 1 */
	asn_DEF_directSCellActivation_r15_tags_9,	/* Same as above */
	sizeof(asn_DEF_directSCellActivation_r15_tags_9)
		/sizeof(asn_DEF_directSCellActivation_r15_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_directSCellActivation_r15_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_directSCellActivation_r15_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_directSCellHibernation_r15_value2enum_11[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_directSCellHibernation_r15_enum2value_11[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_directSCellHibernation_r15_specs_11 = {
	asn_MAP_directSCellHibernation_r15_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_directSCellHibernation_r15_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_directSCellHibernation_r15_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_directSCellHibernation_r15_11 = {
	"directSCellHibernation-r15",
	"directSCellHibernation-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_directSCellHibernation_r15_tags_11,
	sizeof(asn_DEF_directSCellHibernation_r15_tags_11)
		/sizeof(asn_DEF_directSCellHibernation_r15_tags_11[0]) - 1, /* 1 */
	asn_DEF_directSCellHibernation_r15_tags_11,	/* Same as above */
	sizeof(asn_DEF_directSCellHibernation_r15_tags_11)
		/sizeof(asn_DEF_directSCellHibernation_r15_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_directSCellHibernation_r15_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_directSCellHibernation_r15_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_extendedLCID_Duplication_r15_value2enum_13[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_extendedLCID_Duplication_r15_enum2value_13[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_extendedLCID_Duplication_r15_specs_13 = {
	asn_MAP_extendedLCID_Duplication_r15_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_extendedLCID_Duplication_r15_enum2value_13,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_extendedLCID_Duplication_r15_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_extendedLCID_Duplication_r15_13 = {
	"extendedLCID-Duplication-r15",
	"extendedLCID-Duplication-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_extendedLCID_Duplication_r15_tags_13,
	sizeof(asn_DEF_extendedLCID_Duplication_r15_tags_13)
		/sizeof(asn_DEF_extendedLCID_Duplication_r15_tags_13[0]) - 1, /* 1 */
	asn_DEF_extendedLCID_Duplication_r15_tags_13,	/* Same as above */
	sizeof(asn_DEF_extendedLCID_Duplication_r15_tags_13)
		/sizeof(asn_DEF_extendedLCID_Duplication_r15_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_extendedLCID_Duplication_r15_constr_13,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_extendedLCID_Duplication_r15_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sps_ServingCell_r15_value2enum_15[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_sps_ServingCell_r15_enum2value_15[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_sps_ServingCell_r15_specs_15 = {
	asn_MAP_sps_ServingCell_r15_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_sps_ServingCell_r15_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sps_ServingCell_r15_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sps_ServingCell_r15_15 = {
	"sps-ServingCell-r15",
	"sps-ServingCell-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_sps_ServingCell_r15_tags_15,
	sizeof(asn_DEF_sps_ServingCell_r15_tags_15)
		/sizeof(asn_DEF_sps_ServingCell_r15_tags_15[0]) - 1, /* 1 */
	asn_DEF_sps_ServingCell_r15_tags_15,	/* Same as above */
	sizeof(asn_DEF_sps_ServingCell_r15_tags_15)
		/sizeof(asn_DEF_sps_ServingCell_r15_tags_15[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_sps_ServingCell_r15_constr_15,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sps_ServingCell_r15_specs_15	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MAC_Parameters_v1530_1[] = {
	{ ATF_POINTER, 8, offsetof(struct MAC_Parameters_v1530, min_Proc_TimelineSubslot_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_min_Proc_TimelineSubslot_r15_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_min_Proc_TimelineSubslot_r15_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_min_Proc_TimelineSubslot_r15_constraint_1
		},
		0, 0, /* No default value */
		"min-Proc-TimelineSubslot-r15"
		},
	{ ATF_POINTER, 7, offsetof(struct MAC_Parameters_v1530, skipSubframeProcessing_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SkipSubframeProcessing_r15,
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
		"skipSubframeProcessing-r15"
		},
	{ ATF_POINTER, 6, offsetof(struct MAC_Parameters_v1530, earlyData_UP_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_earlyData_UP_r15_5,
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
		"earlyData-UP-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct MAC_Parameters_v1530, dormantSCellState_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dormantSCellState_r15_7,
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
		"dormantSCellState-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct MAC_Parameters_v1530, directSCellActivation_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_directSCellActivation_r15_9,
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
		"directSCellActivation-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct MAC_Parameters_v1530, directSCellHibernation_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_directSCellHibernation_r15_11,
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
		"directSCellHibernation-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct MAC_Parameters_v1530, extendedLCID_Duplication_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_extendedLCID_Duplication_r15_13,
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
		"extendedLCID-Duplication-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct MAC_Parameters_v1530, sps_ServingCell_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sps_ServingCell_r15_15,
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
		"sps-ServingCell-r15"
		},
};
static const int asn_MAP_MAC_Parameters_v1530_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_MAC_Parameters_v1530_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MAC_Parameters_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* min-Proc-TimelineSubslot-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* skipSubframeProcessing-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* earlyData-UP-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dormantSCellState-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* directSCellActivation-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* directSCellHibernation-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* extendedLCID-Duplication-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* sps-ServingCell-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_MAC_Parameters_v1530_specs_1 = {
	sizeof(struct MAC_Parameters_v1530),
	offsetof(struct MAC_Parameters_v1530, _asn_ctx),
	asn_MAP_MAC_Parameters_v1530_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_MAC_Parameters_v1530_oms_1,	/* Optional members */
	8, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MAC_Parameters_v1530 = {
	"MAC-Parameters-v1530",
	"MAC-Parameters-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_MAC_Parameters_v1530_tags_1,
	sizeof(asn_DEF_MAC_Parameters_v1530_tags_1)
		/sizeof(asn_DEF_MAC_Parameters_v1530_tags_1[0]), /* 1 */
	asn_DEF_MAC_Parameters_v1530_tags_1,	/* Same as above */
	sizeof(asn_DEF_MAC_Parameters_v1530_tags_1)
		/sizeof(asn_DEF_MAC_Parameters_v1530_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MAC_Parameters_v1530_1,
	8,	/* Elements count */
	&asn_SPC_MAC_Parameters_v1530_specs_1	/* Additional specs */
};

