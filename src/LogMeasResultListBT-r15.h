/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_LogMeasResultListBT_r15_H_
#define	_LogMeasResultListBT_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LogMeasResultBT_r15;

/* LogMeasResultListBT-r15 */
typedef struct LogMeasResultListBT_r15 {
	A_SEQUENCE_OF(struct LogMeasResultBT_r15) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LogMeasResultListBT_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LogMeasResultListBT_r15;
extern asn_SET_OF_specifics_t asn_SPC_LogMeasResultListBT_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LogMeasResultListBT_r15_1[1];
extern asn_per_constraints_t asn_PER_type_LogMeasResultListBT_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LogMeasResultListBT_r15_H_ */
#include <asn_internal.h>
