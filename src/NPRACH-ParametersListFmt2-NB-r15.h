/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_NPRACH_ParametersListFmt2_NB_r15_H_
#define	_NPRACH_ParametersListFmt2_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NPRACH_ParametersFmt2_NB_r15;

/* NPRACH-ParametersListFmt2-NB-r15 */
typedef struct NPRACH_ParametersListFmt2_NB_r15 {
	A_SEQUENCE_OF(struct NPRACH_ParametersFmt2_NB_r15) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NPRACH_ParametersListFmt2_NB_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NPRACH_ParametersListFmt2_NB_r15;
extern asn_SET_OF_specifics_t asn_SPC_NPRACH_ParametersListFmt2_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_NPRACH_ParametersListFmt2_NB_r15_1[1];
extern asn_per_constraints_t asn_PER_type_NPRACH_ParametersListFmt2_NB_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NPRACH_ParametersListFmt2_NB_r15_H_ */
#include <asn_internal.h>
