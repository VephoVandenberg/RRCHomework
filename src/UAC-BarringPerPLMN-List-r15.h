/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_UAC_BarringPerPLMN_List_r15_H_
#define	_UAC_BarringPerPLMN_List_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UAC_BarringPerPLMN_r15;

/* UAC-BarringPerPLMN-List-r15 */
typedef struct UAC_BarringPerPLMN_List_r15 {
	A_SEQUENCE_OF(struct UAC_BarringPerPLMN_r15) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UAC_BarringPerPLMN_List_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UAC_BarringPerPLMN_List_r15;
extern asn_SET_OF_specifics_t asn_SPC_UAC_BarringPerPLMN_List_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_UAC_BarringPerPLMN_List_r15_1[1];
extern asn_per_constraints_t asn_PER_type_UAC_BarringPerPLMN_List_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _UAC_BarringPerPLMN_List_r15_H_ */
#include <asn_internal.h>
