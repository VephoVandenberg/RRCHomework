/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "SL-PPPP-TxPreconfigIndex-v1530.h"

#include "MCS-PSSCH-Range-r15.h"
static int
memb_mcs_PSSCH_Range_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 16UL)) {
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
static asn_per_constraints_t asn_PER_type_mcs_PSSCH_Range_r15_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_mcs_PSSCH_Range_r15_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_mcs_PSSCH_Range_r15_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_MCS_PSSCH_Range_r15,
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
static const ber_tlv_tag_t asn_DEF_mcs_PSSCH_Range_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_mcs_PSSCH_Range_r15_specs_2 = {
	sizeof(struct SL_PPPP_TxPreconfigIndex_v1530__mcs_PSSCH_Range_r15),
	offsetof(struct SL_PPPP_TxPreconfigIndex_v1530__mcs_PSSCH_Range_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mcs_PSSCH_Range_r15_2 = {
	"mcs-PSSCH-Range-r15",
	"mcs-PSSCH-Range-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_mcs_PSSCH_Range_r15_tags_2,
	sizeof(asn_DEF_mcs_PSSCH_Range_r15_tags_2)
		/sizeof(asn_DEF_mcs_PSSCH_Range_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_mcs_PSSCH_Range_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_mcs_PSSCH_Range_r15_tags_2)
		/sizeof(asn_DEF_mcs_PSSCH_Range_r15_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_mcs_PSSCH_Range_r15_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_mcs_PSSCH_Range_r15_2,
	1,	/* Single element */
	&asn_SPC_mcs_PSSCH_Range_r15_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_PPPP_TxPreconfigIndex_v1530_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SL_PPPP_TxPreconfigIndex_v1530, mcs_PSSCH_Range_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_mcs_PSSCH_Range_r15_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_mcs_PSSCH_Range_r15_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_mcs_PSSCH_Range_r15_constraint_1
		},
		0, 0, /* No default value */
		"mcs-PSSCH-Range-r15"
		},
};
static const int asn_MAP_SL_PPPP_TxPreconfigIndex_v1530_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_SL_PPPP_TxPreconfigIndex_v1530_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_PPPP_TxPreconfigIndex_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mcs-PSSCH-Range-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_PPPP_TxPreconfigIndex_v1530_specs_1 = {
	sizeof(struct SL_PPPP_TxPreconfigIndex_v1530),
	offsetof(struct SL_PPPP_TxPreconfigIndex_v1530, _asn_ctx),
	asn_MAP_SL_PPPP_TxPreconfigIndex_v1530_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_SL_PPPP_TxPreconfigIndex_v1530_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_PPPP_TxPreconfigIndex_v1530 = {
	"SL-PPPP-TxPreconfigIndex-v1530",
	"SL-PPPP-TxPreconfigIndex-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_PPPP_TxPreconfigIndex_v1530_tags_1,
	sizeof(asn_DEF_SL_PPPP_TxPreconfigIndex_v1530_tags_1)
		/sizeof(asn_DEF_SL_PPPP_TxPreconfigIndex_v1530_tags_1[0]), /* 1 */
	asn_DEF_SL_PPPP_TxPreconfigIndex_v1530_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_PPPP_TxPreconfigIndex_v1530_tags_1)
		/sizeof(asn_DEF_SL_PPPP_TxPreconfigIndex_v1530_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SL_PPPP_TxPreconfigIndex_v1530_1,
	1,	/* Elements count */
	&asn_SPC_SL_PPPP_TxPreconfigIndex_v1530_specs_1	/* Additional specs */
};

