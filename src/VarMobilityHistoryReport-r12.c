/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "VarMobilityHistoryReport-r12.h"

int
VarMobilityHistoryReport_r12_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
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

/*
 * This type is implemented using VisitedCellInfoList_r12,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_VarMobilityHistoryReport_r12_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const ber_tlv_tag_t asn_DEF_VarMobilityHistoryReport_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_VarMobilityHistoryReport_r12 = {
	"VarMobilityHistoryReport-r12",
	"VarMobilityHistoryReport-r12",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_VarMobilityHistoryReport_r12_tags_1,
	sizeof(asn_DEF_VarMobilityHistoryReport_r12_tags_1)
		/sizeof(asn_DEF_VarMobilityHistoryReport_r12_tags_1[0]), /* 1 */
	asn_DEF_VarMobilityHistoryReport_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_VarMobilityHistoryReport_r12_tags_1)
		/sizeof(asn_DEF_VarMobilityHistoryReport_r12_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_VarMobilityHistoryReport_r12_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		VarMobilityHistoryReport_r12_constraint
	},
	asn_MBR_VisitedCellInfoList_r12_1,
	1,	/* Single element */
	&asn_SPC_VisitedCellInfoList_r12_specs_1	/* Additional specs */
};
