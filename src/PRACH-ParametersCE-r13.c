/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "PRACH-ParametersCE-r13.h"

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
memb_NativeInteger_constraint_30(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 16L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_prach_ConfigIndex_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 63L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_prach_FreqOffset_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 94L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_mpdcch_NarrowbandsToMonitor_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 2UL)) {
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
static asn_per_constraints_t asn_PER_type_prach_StartingSubframe_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_maxNumPreambleAttemptCE_r13_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_numRepetitionPerPreambleAttempt_r13_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_Member_constr_31 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_mpdcch_NarrowbandsToMonitor_r13_constr_30 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_mpdcch_NumRepetition_RA_r13_constr_32 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  8 }	/* (0..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_prach_HoppingConfig_r13_constr_42 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_prach_ConfigIndex_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_prach_FreqOffset_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  94 }	/* (0..94) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_mpdcch_NarrowbandsToMonitor_r13_constr_30 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_prach_StartingSubframe_r13_value2enum_4[] = {
	{ 0,	3,	"sf2" },
	{ 1,	3,	"sf4" },
	{ 2,	3,	"sf8" },
	{ 3,	4,	"sf16" },
	{ 4,	4,	"sf32" },
	{ 5,	4,	"sf64" },
	{ 6,	5,	"sf128" },
	{ 7,	5,	"sf256" }
};
static const unsigned int asn_MAP_prach_StartingSubframe_r13_enum2value_4[] = {
	6,	/* sf128(6) */
	3,	/* sf16(3) */
	0,	/* sf2(0) */
	7,	/* sf256(7) */
	4,	/* sf32(4) */
	1,	/* sf4(1) */
	5,	/* sf64(5) */
	2	/* sf8(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_prach_StartingSubframe_r13_specs_4 = {
	asn_MAP_prach_StartingSubframe_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_prach_StartingSubframe_r13_enum2value_4,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_prach_StartingSubframe_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_prach_StartingSubframe_r13_4 = {
	"prach-StartingSubframe-r13",
	"prach-StartingSubframe-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_prach_StartingSubframe_r13_tags_4,
	sizeof(asn_DEF_prach_StartingSubframe_r13_tags_4)
		/sizeof(asn_DEF_prach_StartingSubframe_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_prach_StartingSubframe_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_prach_StartingSubframe_r13_tags_4)
		/sizeof(asn_DEF_prach_StartingSubframe_r13_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_prach_StartingSubframe_r13_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_prach_StartingSubframe_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maxNumPreambleAttemptCE_r13_value2enum_13[] = {
	{ 0,	2,	"n3" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n5" },
	{ 3,	2,	"n6" },
	{ 4,	2,	"n7" },
	{ 5,	2,	"n8" },
	{ 6,	3,	"n10" }
};
static const unsigned int asn_MAP_maxNumPreambleAttemptCE_r13_enum2value_13[] = {
	6,	/* n10(6) */
	0,	/* n3(0) */
	1,	/* n4(1) */
	2,	/* n5(2) */
	3,	/* n6(3) */
	4,	/* n7(4) */
	5	/* n8(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumPreambleAttemptCE_r13_specs_13 = {
	asn_MAP_maxNumPreambleAttemptCE_r13_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumPreambleAttemptCE_r13_enum2value_13,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumPreambleAttemptCE_r13_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumPreambleAttemptCE_r13_13 = {
	"maxNumPreambleAttemptCE-r13",
	"maxNumPreambleAttemptCE-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumPreambleAttemptCE_r13_tags_13,
	sizeof(asn_DEF_maxNumPreambleAttemptCE_r13_tags_13)
		/sizeof(asn_DEF_maxNumPreambleAttemptCE_r13_tags_13[0]) - 1, /* 1 */
	asn_DEF_maxNumPreambleAttemptCE_r13_tags_13,	/* Same as above */
	sizeof(asn_DEF_maxNumPreambleAttemptCE_r13_tags_13)
		/sizeof(asn_DEF_maxNumPreambleAttemptCE_r13_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_maxNumPreambleAttemptCE_r13_constr_13,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumPreambleAttemptCE_r13_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_numRepetitionPerPreambleAttempt_r13_value2enum_21[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n16" },
	{ 5,	3,	"n32" },
	{ 6,	3,	"n64" },
	{ 7,	4,	"n128" }
};
static const unsigned int asn_MAP_numRepetitionPerPreambleAttempt_r13_enum2value_21[] = {
	0,	/* n1(0) */
	7,	/* n128(7) */
	4,	/* n16(4) */
	1,	/* n2(1) */
	5,	/* n32(5) */
	2,	/* n4(2) */
	6,	/* n64(6) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_numRepetitionPerPreambleAttempt_r13_specs_21 = {
	asn_MAP_numRepetitionPerPreambleAttempt_r13_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_numRepetitionPerPreambleAttempt_r13_enum2value_21,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_numRepetitionPerPreambleAttempt_r13_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numRepetitionPerPreambleAttempt_r13_21 = {
	"numRepetitionPerPreambleAttempt-r13",
	"numRepetitionPerPreambleAttempt-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_numRepetitionPerPreambleAttempt_r13_tags_21,
	sizeof(asn_DEF_numRepetitionPerPreambleAttempt_r13_tags_21)
		/sizeof(asn_DEF_numRepetitionPerPreambleAttempt_r13_tags_21[0]) - 1, /* 1 */
	asn_DEF_numRepetitionPerPreambleAttempt_r13_tags_21,	/* Same as above */
	sizeof(asn_DEF_numRepetitionPerPreambleAttempt_r13_tags_21)
		/sizeof(asn_DEF_numRepetitionPerPreambleAttempt_r13_tags_21[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_numRepetitionPerPreambleAttempt_r13_constr_21,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_numRepetitionPerPreambleAttempt_r13_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_mpdcch_NarrowbandsToMonitor_r13_30[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_Member_constr_31,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NativeInteger_constraint_30
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_mpdcch_NarrowbandsToMonitor_r13_tags_30[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_mpdcch_NarrowbandsToMonitor_r13_specs_30 = {
	sizeof(struct PRACH_ParametersCE_r13__mpdcch_NarrowbandsToMonitor_r13),
	offsetof(struct PRACH_ParametersCE_r13__mpdcch_NarrowbandsToMonitor_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mpdcch_NarrowbandsToMonitor_r13_30 = {
	"mpdcch-NarrowbandsToMonitor-r13",
	"mpdcch-NarrowbandsToMonitor-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_mpdcch_NarrowbandsToMonitor_r13_tags_30,
	sizeof(asn_DEF_mpdcch_NarrowbandsToMonitor_r13_tags_30)
		/sizeof(asn_DEF_mpdcch_NarrowbandsToMonitor_r13_tags_30[0]) - 1, /* 1 */
	asn_DEF_mpdcch_NarrowbandsToMonitor_r13_tags_30,	/* Same as above */
	sizeof(asn_DEF_mpdcch_NarrowbandsToMonitor_r13_tags_30)
		/sizeof(asn_DEF_mpdcch_NarrowbandsToMonitor_r13_tags_30[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_mpdcch_NarrowbandsToMonitor_r13_constr_30,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_mpdcch_NarrowbandsToMonitor_r13_30,
	1,	/* Single element */
	&asn_SPC_mpdcch_NarrowbandsToMonitor_r13_specs_30	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mpdcch_NumRepetition_RA_r13_value2enum_32[] = {
	{ 0,	2,	"r1" },
	{ 1,	2,	"r2" },
	{ 2,	2,	"r4" },
	{ 3,	2,	"r8" },
	{ 4,	3,	"r16" },
	{ 5,	3,	"r32" },
	{ 6,	3,	"r64" },
	{ 7,	4,	"r128" },
	{ 8,	4,	"r256" }
};
static const unsigned int asn_MAP_mpdcch_NumRepetition_RA_r13_enum2value_32[] = {
	0,	/* r1(0) */
	7,	/* r128(7) */
	4,	/* r16(4) */
	1,	/* r2(1) */
	8,	/* r256(8) */
	5,	/* r32(5) */
	2,	/* r4(2) */
	6,	/* r64(6) */
	3	/* r8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_mpdcch_NumRepetition_RA_r13_specs_32 = {
	asn_MAP_mpdcch_NumRepetition_RA_r13_value2enum_32,	/* "tag" => N; sorted by tag */
	asn_MAP_mpdcch_NumRepetition_RA_r13_enum2value_32,	/* N => "tag"; sorted by N */
	9,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mpdcch_NumRepetition_RA_r13_tags_32[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mpdcch_NumRepetition_RA_r13_32 = {
	"mpdcch-NumRepetition-RA-r13",
	"mpdcch-NumRepetition-RA-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_mpdcch_NumRepetition_RA_r13_tags_32,
	sizeof(asn_DEF_mpdcch_NumRepetition_RA_r13_tags_32)
		/sizeof(asn_DEF_mpdcch_NumRepetition_RA_r13_tags_32[0]) - 1, /* 1 */
	asn_DEF_mpdcch_NumRepetition_RA_r13_tags_32,	/* Same as above */
	sizeof(asn_DEF_mpdcch_NumRepetition_RA_r13_tags_32)
		/sizeof(asn_DEF_mpdcch_NumRepetition_RA_r13_tags_32[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_mpdcch_NumRepetition_RA_r13_constr_32,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mpdcch_NumRepetition_RA_r13_specs_32	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_prach_HoppingConfig_r13_value2enum_42[] = {
	{ 0,	2,	"on" },
	{ 1,	3,	"off" }
};
static const unsigned int asn_MAP_prach_HoppingConfig_r13_enum2value_42[] = {
	1,	/* off(1) */
	0	/* on(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_prach_HoppingConfig_r13_specs_42 = {
	asn_MAP_prach_HoppingConfig_r13_value2enum_42,	/* "tag" => N; sorted by tag */
	asn_MAP_prach_HoppingConfig_r13_enum2value_42,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_prach_HoppingConfig_r13_tags_42[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_prach_HoppingConfig_r13_42 = {
	"prach-HoppingConfig-r13",
	"prach-HoppingConfig-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_prach_HoppingConfig_r13_tags_42,
	sizeof(asn_DEF_prach_HoppingConfig_r13_tags_42)
		/sizeof(asn_DEF_prach_HoppingConfig_r13_tags_42[0]) - 1, /* 1 */
	asn_DEF_prach_HoppingConfig_r13_tags_42,	/* Same as above */
	sizeof(asn_DEF_prach_HoppingConfig_r13_tags_42)
		/sizeof(asn_DEF_prach_HoppingConfig_r13_tags_42[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_prach_HoppingConfig_r13_constr_42,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_prach_HoppingConfig_r13_specs_42	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PRACH_ParametersCE_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PRACH_ParametersCE_r13, prach_ConfigIndex_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_prach_ConfigIndex_r13_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_prach_ConfigIndex_r13_constraint_1
		},
		0, 0, /* No default value */
		"prach-ConfigIndex-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PRACH_ParametersCE_r13, prach_FreqOffset_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_prach_FreqOffset_r13_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_prach_FreqOffset_r13_constraint_1
		},
		0, 0, /* No default value */
		"prach-FreqOffset-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct PRACH_ParametersCE_r13, prach_StartingSubframe_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_prach_StartingSubframe_r13_4,
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
		"prach-StartingSubframe-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct PRACH_ParametersCE_r13, maxNumPreambleAttemptCE_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumPreambleAttemptCE_r13_13,
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
		"maxNumPreambleAttemptCE-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PRACH_ParametersCE_r13, numRepetitionPerPreambleAttempt_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numRepetitionPerPreambleAttempt_r13_21,
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
		"numRepetitionPerPreambleAttempt-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PRACH_ParametersCE_r13, mpdcch_NarrowbandsToMonitor_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_mpdcch_NarrowbandsToMonitor_r13_30,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_mpdcch_NarrowbandsToMonitor_r13_constr_30,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_mpdcch_NarrowbandsToMonitor_r13_constraint_1
		},
		0, 0, /* No default value */
		"mpdcch-NarrowbandsToMonitor-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PRACH_ParametersCE_r13, mpdcch_NumRepetition_RA_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mpdcch_NumRepetition_RA_r13_32,
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
		"mpdcch-NumRepetition-RA-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PRACH_ParametersCE_r13, prach_HoppingConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_prach_HoppingConfig_r13_42,
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
		"prach-HoppingConfig-r13"
		},
};
static const int asn_MAP_PRACH_ParametersCE_r13_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_PRACH_ParametersCE_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PRACH_ParametersCE_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* prach-ConfigIndex-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* prach-FreqOffset-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* prach-StartingSubframe-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* maxNumPreambleAttemptCE-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* numRepetitionPerPreambleAttempt-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* mpdcch-NarrowbandsToMonitor-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* mpdcch-NumRepetition-RA-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* prach-HoppingConfig-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_PRACH_ParametersCE_r13_specs_1 = {
	sizeof(struct PRACH_ParametersCE_r13),
	offsetof(struct PRACH_ParametersCE_r13, _asn_ctx),
	asn_MAP_PRACH_ParametersCE_r13_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_PRACH_ParametersCE_r13_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PRACH_ParametersCE_r13 = {
	"PRACH-ParametersCE-r13",
	"PRACH-ParametersCE-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_PRACH_ParametersCE_r13_tags_1,
	sizeof(asn_DEF_PRACH_ParametersCE_r13_tags_1)
		/sizeof(asn_DEF_PRACH_ParametersCE_r13_tags_1[0]), /* 1 */
	asn_DEF_PRACH_ParametersCE_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_PRACH_ParametersCE_r13_tags_1)
		/sizeof(asn_DEF_PRACH_ParametersCE_r13_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_PRACH_ParametersCE_r13_1,
	8,	/* Elements count */
	&asn_SPC_PRACH_ParametersCE_r13_specs_1	/* Additional specs */
};

