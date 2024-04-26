/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_CA_MIMO_ParametersDL_v1270_H_
#define	_CA_MIMO_ParametersDL_v1270_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntraBandContiguousCC_Info_r12;

/* CA-MIMO-ParametersDL-v1270 */
typedef struct CA_MIMO_ParametersDL_v1270 {
	struct CA_MIMO_ParametersDL_v1270__intraBandContiguousCC_InfoList_r12 {
		A_SEQUENCE_OF(struct IntraBandContiguousCC_Info_r12) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} intraBandContiguousCC_InfoList_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CA_MIMO_ParametersDL_v1270_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CA_MIMO_ParametersDL_v1270;
extern asn_SEQUENCE_specifics_t asn_SPC_CA_MIMO_ParametersDL_v1270_specs_1;
extern asn_TYPE_member_t asn_MBR_CA_MIMO_ParametersDL_v1270_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CA_MIMO_ParametersDL_v1270_H_ */
#include <asn_internal.h>
