/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_CellReselectionServingFreqInfo_v1310_H_
#define	_CellReselectionServingFreqInfo_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellReselectionSubPriority-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellReselectionServingFreqInfo-v1310 */
typedef struct CellReselectionServingFreqInfo_v1310 {
	CellReselectionSubPriority_r13_t	 cellReselectionSubPriority_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellReselectionServingFreqInfo_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellReselectionServingFreqInfo_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_CellReselectionServingFreqInfo_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_CellReselectionServingFreqInfo_v1310_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CellReselectionServingFreqInfo_v1310_H_ */
#include <asn_internal.h>
