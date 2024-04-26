/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "CellSelectionInfoCE1-v1360.h"

static int
memb_delta_RxLevMinCE1_v1360_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8L && value <= -1L)) {
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
static asn_per_constraints_t asn_PER_memb_delta_RxLevMinCE1_v1360_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3, -8, -1 }	/* (-8..-1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_CellSelectionInfoCE1_v1360_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectionInfoCE1_v1360, delta_RxLevMinCE1_v1360),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_delta_RxLevMinCE1_v1360_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_delta_RxLevMinCE1_v1360_constraint_1
		},
		0, 0, /* No default value */
		"delta-RxLevMinCE1-v1360"
		},
};
static const ber_tlv_tag_t asn_DEF_CellSelectionInfoCE1_v1360_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CellSelectionInfoCE1_v1360_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* delta-RxLevMinCE1-v1360 */
};
asn_SEQUENCE_specifics_t asn_SPC_CellSelectionInfoCE1_v1360_specs_1 = {
	sizeof(struct CellSelectionInfoCE1_v1360),
	offsetof(struct CellSelectionInfoCE1_v1360, _asn_ctx),
	asn_MAP_CellSelectionInfoCE1_v1360_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CellSelectionInfoCE1_v1360 = {
	"CellSelectionInfoCE1-v1360",
	"CellSelectionInfoCE1-v1360",
	&asn_OP_SEQUENCE,
	asn_DEF_CellSelectionInfoCE1_v1360_tags_1,
	sizeof(asn_DEF_CellSelectionInfoCE1_v1360_tags_1)
		/sizeof(asn_DEF_CellSelectionInfoCE1_v1360_tags_1[0]), /* 1 */
	asn_DEF_CellSelectionInfoCE1_v1360_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellSelectionInfoCE1_v1360_tags_1)
		/sizeof(asn_DEF_CellSelectionInfoCE1_v1360_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CellSelectionInfoCE1_v1360_1,
	1,	/* Elements count */
	&asn_SPC_CellSelectionInfoCE1_v1360_specs_1	/* Additional specs */
};

