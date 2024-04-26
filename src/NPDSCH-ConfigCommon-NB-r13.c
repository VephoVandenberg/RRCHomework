/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "NPDSCH-ConfigCommon-NB-r13.h"

static int
memb_nrs_Power_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -60L && value <= 50L)) {
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
static asn_per_constraints_t asn_PER_memb_nrs_Power_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -60,  50 }	/* (-60..50) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_NPDSCH_ConfigCommon_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NPDSCH_ConfigCommon_NB_r13, nrs_Power_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_nrs_Power_r13_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_nrs_Power_r13_constraint_1
		},
		0, 0, /* No default value */
		"nrs-Power-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_NPDSCH_ConfigCommon_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NPDSCH_ConfigCommon_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nrs-Power-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_NPDSCH_ConfigCommon_NB_r13_specs_1 = {
	sizeof(struct NPDSCH_ConfigCommon_NB_r13),
	offsetof(struct NPDSCH_ConfigCommon_NB_r13, _asn_ctx),
	asn_MAP_NPDSCH_ConfigCommon_NB_r13_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NPDSCH_ConfigCommon_NB_r13 = {
	"NPDSCH-ConfigCommon-NB-r13",
	"NPDSCH-ConfigCommon-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_NPDSCH_ConfigCommon_NB_r13_tags_1,
	sizeof(asn_DEF_NPDSCH_ConfigCommon_NB_r13_tags_1)
		/sizeof(asn_DEF_NPDSCH_ConfigCommon_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_NPDSCH_ConfigCommon_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_NPDSCH_ConfigCommon_NB_r13_tags_1)
		/sizeof(asn_DEF_NPDSCH_ConfigCommon_NB_r13_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NPDSCH_ConfigCommon_NB_r13_1,
	1,	/* Elements count */
	&asn_SPC_NPDSCH_ConfigCommon_NB_r13_specs_1	/* Additional specs */
};

