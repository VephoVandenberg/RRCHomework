/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-InterNodeDefinitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "UEPagingCoverageInformation-NB-IEs.h"

static int
memb_npdcch_NumRepetitionPaging_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 2048L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_npdcch_NumRepetitionPaging_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  1,  2048 }	/* (1..2048) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_3 = {
	sizeof(struct UEPagingCoverageInformation_NB_IEs__nonCriticalExtension),
	offsetof(struct UEPagingCoverageInformation_NB_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_3 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_3,
	sizeof(asn_DEF_nonCriticalExtension_tags_3)
		/sizeof(asn_DEF_nonCriticalExtension_tags_3[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_3,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_3)
		/sizeof(asn_DEF_nonCriticalExtension_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UEPagingCoverageInformation_NB_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UEPagingCoverageInformation_NB_IEs, npdcch_NumRepetitionPaging_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_npdcch_NumRepetitionPaging_r13_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_npdcch_NumRepetitionPaging_r13_constraint_1
		},
		0, 0, /* No default value */
		"npdcch-NumRepetitionPaging-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct UEPagingCoverageInformation_NB_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_3,
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
static const int asn_MAP_UEPagingCoverageInformation_NB_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UEPagingCoverageInformation_NB_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UEPagingCoverageInformation_NB_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* npdcch-NumRepetitionPaging-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UEPagingCoverageInformation_NB_IEs_specs_1 = {
	sizeof(struct UEPagingCoverageInformation_NB_IEs),
	offsetof(struct UEPagingCoverageInformation_NB_IEs, _asn_ctx),
	asn_MAP_UEPagingCoverageInformation_NB_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UEPagingCoverageInformation_NB_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UEPagingCoverageInformation_NB_IEs = {
	"UEPagingCoverageInformation-NB-IEs",
	"UEPagingCoverageInformation-NB-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UEPagingCoverageInformation_NB_IEs_tags_1,
	sizeof(asn_DEF_UEPagingCoverageInformation_NB_IEs_tags_1)
		/sizeof(asn_DEF_UEPagingCoverageInformation_NB_IEs_tags_1[0]), /* 1 */
	asn_DEF_UEPagingCoverageInformation_NB_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEPagingCoverageInformation_NB_IEs_tags_1)
		/sizeof(asn_DEF_UEPagingCoverageInformation_NB_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_UEPagingCoverageInformation_NB_IEs_1,
	2,	/* Elements count */
	&asn_SPC_UEPagingCoverageInformation_NB_IEs_specs_1	/* Additional specs */
};

