/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "SlotOrSubslotPDSCH-Config-r15.h"

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
static asn_per_constraints_t asn_PER_type_altCQI_TableSTTI_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_altCQI_Table1024QAM_STTI_r15_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_resourceAllocation_r15_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_tbsIndexAlt_STTI_r15_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_tbsIndexAlt2_STTI_r15_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_tbsIndexAlt3_STTI_r15_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_SlotOrSubslotPDSCH_Config_r15_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_altCQI_TableSTTI_r15_value2enum_4[] = {
	{ 0,	12,	"allSubframes" },
	{ 1,	16,	"csi-SubframeSet1" },
	{ 2,	16,	"csi-SubframeSet2" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_altCQI_TableSTTI_r15_enum2value_4[] = {
	0,	/* allSubframes(0) */
	1,	/* csi-SubframeSet1(1) */
	2,	/* csi-SubframeSet2(2) */
	3	/* spare1(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_altCQI_TableSTTI_r15_specs_4 = {
	asn_MAP_altCQI_TableSTTI_r15_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_altCQI_TableSTTI_r15_enum2value_4,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_altCQI_TableSTTI_r15_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_altCQI_TableSTTI_r15_4 = {
	"altCQI-TableSTTI-r15",
	"altCQI-TableSTTI-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_altCQI_TableSTTI_r15_tags_4,
	sizeof(asn_DEF_altCQI_TableSTTI_r15_tags_4)
		/sizeof(asn_DEF_altCQI_TableSTTI_r15_tags_4[0]) - 1, /* 1 */
	asn_DEF_altCQI_TableSTTI_r15_tags_4,	/* Same as above */
	sizeof(asn_DEF_altCQI_TableSTTI_r15_tags_4)
		/sizeof(asn_DEF_altCQI_TableSTTI_r15_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_altCQI_TableSTTI_r15_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_altCQI_TableSTTI_r15_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_altCQI_Table1024QAM_STTI_r15_value2enum_9[] = {
	{ 0,	12,	"allSubframes" },
	{ 1,	16,	"csi-SubframeSet1" },
	{ 2,	16,	"csi-SubframeSet2" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_altCQI_Table1024QAM_STTI_r15_enum2value_9[] = {
	0,	/* allSubframes(0) */
	1,	/* csi-SubframeSet1(1) */
	2,	/* csi-SubframeSet2(2) */
	3	/* spare1(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_altCQI_Table1024QAM_STTI_r15_specs_9 = {
	asn_MAP_altCQI_Table1024QAM_STTI_r15_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_altCQI_Table1024QAM_STTI_r15_enum2value_9,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_altCQI_Table1024QAM_STTI_r15_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_altCQI_Table1024QAM_STTI_r15_9 = {
	"altCQI-Table1024QAM-STTI-r15",
	"altCQI-Table1024QAM-STTI-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_altCQI_Table1024QAM_STTI_r15_tags_9,
	sizeof(asn_DEF_altCQI_Table1024QAM_STTI_r15_tags_9)
		/sizeof(asn_DEF_altCQI_Table1024QAM_STTI_r15_tags_9[0]) - 1, /* 1 */
	asn_DEF_altCQI_Table1024QAM_STTI_r15_tags_9,	/* Same as above */
	sizeof(asn_DEF_altCQI_Table1024QAM_STTI_r15_tags_9)
		/sizeof(asn_DEF_altCQI_Table1024QAM_STTI_r15_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_altCQI_Table1024QAM_STTI_r15_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_altCQI_Table1024QAM_STTI_r15_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_resourceAllocation_r15_value2enum_14[] = {
	{ 0,	23,	"resourceAllocationType0" },
	{ 1,	23,	"resourceAllocationType2" }
};
static const unsigned int asn_MAP_resourceAllocation_r15_enum2value_14[] = {
	0,	/* resourceAllocationType0(0) */
	1	/* resourceAllocationType2(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_resourceAllocation_r15_specs_14 = {
	asn_MAP_resourceAllocation_r15_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_resourceAllocation_r15_enum2value_14,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_resourceAllocation_r15_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_resourceAllocation_r15_14 = {
	"resourceAllocation-r15",
	"resourceAllocation-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_resourceAllocation_r15_tags_14,
	sizeof(asn_DEF_resourceAllocation_r15_tags_14)
		/sizeof(asn_DEF_resourceAllocation_r15_tags_14[0]) - 1, /* 1 */
	asn_DEF_resourceAllocation_r15_tags_14,	/* Same as above */
	sizeof(asn_DEF_resourceAllocation_r15_tags_14)
		/sizeof(asn_DEF_resourceAllocation_r15_tags_14[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_resourceAllocation_r15_constr_14,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_resourceAllocation_r15_specs_14	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_tbsIndexAlt_STTI_r15_value2enum_17[] = {
	{ 0,	3,	"a33" }
};
static const unsigned int asn_MAP_tbsIndexAlt_STTI_r15_enum2value_17[] = {
	0	/* a33(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_tbsIndexAlt_STTI_r15_specs_17 = {
	asn_MAP_tbsIndexAlt_STTI_r15_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_tbsIndexAlt_STTI_r15_enum2value_17,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_tbsIndexAlt_STTI_r15_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tbsIndexAlt_STTI_r15_17 = {
	"tbsIndexAlt-STTI-r15",
	"tbsIndexAlt-STTI-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_tbsIndexAlt_STTI_r15_tags_17,
	sizeof(asn_DEF_tbsIndexAlt_STTI_r15_tags_17)
		/sizeof(asn_DEF_tbsIndexAlt_STTI_r15_tags_17[0]) - 1, /* 1 */
	asn_DEF_tbsIndexAlt_STTI_r15_tags_17,	/* Same as above */
	sizeof(asn_DEF_tbsIndexAlt_STTI_r15_tags_17)
		/sizeof(asn_DEF_tbsIndexAlt_STTI_r15_tags_17[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_tbsIndexAlt_STTI_r15_constr_17,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_tbsIndexAlt_STTI_r15_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_tbsIndexAlt2_STTI_r15_value2enum_19[] = {
	{ 0,	3,	"b33" }
};
static const unsigned int asn_MAP_tbsIndexAlt2_STTI_r15_enum2value_19[] = {
	0	/* b33(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_tbsIndexAlt2_STTI_r15_specs_19 = {
	asn_MAP_tbsIndexAlt2_STTI_r15_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_tbsIndexAlt2_STTI_r15_enum2value_19,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_tbsIndexAlt2_STTI_r15_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tbsIndexAlt2_STTI_r15_19 = {
	"tbsIndexAlt2-STTI-r15",
	"tbsIndexAlt2-STTI-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_tbsIndexAlt2_STTI_r15_tags_19,
	sizeof(asn_DEF_tbsIndexAlt2_STTI_r15_tags_19)
		/sizeof(asn_DEF_tbsIndexAlt2_STTI_r15_tags_19[0]) - 1, /* 1 */
	asn_DEF_tbsIndexAlt2_STTI_r15_tags_19,	/* Same as above */
	sizeof(asn_DEF_tbsIndexAlt2_STTI_r15_tags_19)
		/sizeof(asn_DEF_tbsIndexAlt2_STTI_r15_tags_19[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_tbsIndexAlt2_STTI_r15_constr_19,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_tbsIndexAlt2_STTI_r15_specs_19	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_tbsIndexAlt3_STTI_r15_value2enum_21[] = {
	{ 0,	3,	"a37" }
};
static const unsigned int asn_MAP_tbsIndexAlt3_STTI_r15_enum2value_21[] = {
	0	/* a37(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_tbsIndexAlt3_STTI_r15_specs_21 = {
	asn_MAP_tbsIndexAlt3_STTI_r15_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_tbsIndexAlt3_STTI_r15_enum2value_21,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_tbsIndexAlt3_STTI_r15_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tbsIndexAlt3_STTI_r15_21 = {
	"tbsIndexAlt3-STTI-r15",
	"tbsIndexAlt3-STTI-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_tbsIndexAlt3_STTI_r15_tags_21,
	sizeof(asn_DEF_tbsIndexAlt3_STTI_r15_tags_21)
		/sizeof(asn_DEF_tbsIndexAlt3_STTI_r15_tags_21[0]) - 1, /* 1 */
	asn_DEF_tbsIndexAlt3_STTI_r15_tags_21,	/* Same as above */
	sizeof(asn_DEF_tbsIndexAlt3_STTI_r15_tags_21)
		/sizeof(asn_DEF_tbsIndexAlt3_STTI_r15_tags_21[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_tbsIndexAlt3_STTI_r15_constr_21,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_tbsIndexAlt3_STTI_r15_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_POINTER, 6, offsetof(struct SlotOrSubslotPDSCH_Config_r15__setup, altCQI_TableSTTI_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_altCQI_TableSTTI_r15_4,
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
		"altCQI-TableSTTI-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct SlotOrSubslotPDSCH_Config_r15__setup, altCQI_Table1024QAM_STTI_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_altCQI_Table1024QAM_STTI_r15_9,
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
		"altCQI-Table1024QAM-STTI-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct SlotOrSubslotPDSCH_Config_r15__setup, resourceAllocation_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_resourceAllocation_r15_14,
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
		"resourceAllocation-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct SlotOrSubslotPDSCH_Config_r15__setup, tbsIndexAlt_STTI_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_tbsIndexAlt_STTI_r15_17,
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
		"tbsIndexAlt-STTI-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct SlotOrSubslotPDSCH_Config_r15__setup, tbsIndexAlt2_STTI_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_tbsIndexAlt2_STTI_r15_19,
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
		"tbsIndexAlt2-STTI-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SlotOrSubslotPDSCH_Config_r15__setup, tbsIndexAlt3_STTI_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_tbsIndexAlt3_STTI_r15_21,
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
		"tbsIndexAlt3-STTI-r15"
		},
};
static const int asn_MAP_setup_oms_3[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* altCQI-TableSTTI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* altCQI-Table1024QAM-STTI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* resourceAllocation-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tbsIndexAlt-STTI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* tbsIndexAlt2-STTI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* tbsIndexAlt3-STTI-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct SlotOrSubslotPDSCH_Config_r15__setup),
	offsetof(struct SlotOrSubslotPDSCH_Config_r15__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	6,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	6, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_setup_3,
	6,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SlotOrSubslotPDSCH_Config_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SlotOrSubslotPDSCH_Config_r15, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SlotOrSubslotPDSCH_Config_r15, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
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
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SlotOrSubslotPDSCH_Config_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_SlotOrSubslotPDSCH_Config_r15_specs_1 = {
	sizeof(struct SlotOrSubslotPDSCH_Config_r15),
	offsetof(struct SlotOrSubslotPDSCH_Config_r15, _asn_ctx),
	offsetof(struct SlotOrSubslotPDSCH_Config_r15, present),
	sizeof(((struct SlotOrSubslotPDSCH_Config_r15 *)0)->present),
	asn_MAP_SlotOrSubslotPDSCH_Config_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SlotOrSubslotPDSCH_Config_r15 = {
	"SlotOrSubslotPDSCH-Config-r15",
	"SlotOrSubslotPDSCH-Config-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_SlotOrSubslotPDSCH_Config_r15_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_SlotOrSubslotPDSCH_Config_r15_1,
	2,	/* Elements count */
	&asn_SPC_SlotOrSubslotPDSCH_Config_r15_specs_1	/* Additional specs */
};

