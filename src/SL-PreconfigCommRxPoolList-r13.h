/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_PreconfigCommRxPoolList_r13_H_
#define	_SL_PreconfigCommRxPoolList_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_PreconfigCommPool_r12;

/* SL-PreconfigCommRxPoolList-r13 */
typedef struct SL_PreconfigCommRxPoolList_r13 {
	A_SEQUENCE_OF(struct SL_PreconfigCommPool_r12) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_PreconfigCommRxPoolList_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_PreconfigCommRxPoolList_r13;
extern asn_SET_OF_specifics_t asn_SPC_SL_PreconfigCommRxPoolList_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_PreconfigCommRxPoolList_r13_1[1];
extern asn_per_constraints_t asn_PER_type_SL_PreconfigCommRxPoolList_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_PreconfigCommRxPoolList_r13_H_ */
#include <asn_internal.h>
