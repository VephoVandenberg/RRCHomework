/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_FreqPriorityListExtEUTRA_r12_H_
#define	_FreqPriorityListExtEUTRA_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FreqPriorityEUTRA_r12;

/* FreqPriorityListExtEUTRA-r12 */
typedef struct FreqPriorityListExtEUTRA_r12 {
	A_SEQUENCE_OF(struct FreqPriorityEUTRA_r12) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FreqPriorityListExtEUTRA_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FreqPriorityListExtEUTRA_r12;
extern asn_SET_OF_specifics_t asn_SPC_FreqPriorityListExtEUTRA_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_FreqPriorityListExtEUTRA_r12_1[1];
extern asn_per_constraints_t asn_PER_type_FreqPriorityListExtEUTRA_r12_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _FreqPriorityListExtEUTRA_r12_H_ */
#include <asn_internal.h>
