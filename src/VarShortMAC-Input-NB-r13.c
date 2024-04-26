/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-UE-Variables"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "VarShortMAC-Input-NB-r13.h"

/*
 * This type is implemented using VarShortMAC_Input,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_VarShortMAC_Input_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_VarShortMAC_Input_NB_r13 = {
	"VarShortMAC-Input-NB-r13",
	"VarShortMAC-Input-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_VarShortMAC_Input_NB_r13_tags_1,
	sizeof(asn_DEF_VarShortMAC_Input_NB_r13_tags_1)
		/sizeof(asn_DEF_VarShortMAC_Input_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_VarShortMAC_Input_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_VarShortMAC_Input_NB_r13_tags_1)
		/sizeof(asn_DEF_VarShortMAC_Input_NB_r13_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_VarShortMAC_Input_1,
	3,	/* Elements count */
	&asn_SPC_VarShortMAC_Input_specs_1	/* Additional specs */
};

