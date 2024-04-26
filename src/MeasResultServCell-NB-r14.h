/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasResultServCell_NB_r14_H_
#define	_MeasResultServCell_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NRSRP-Range-NB-r14.h"
#include "NRSRQ-Range-NB-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultServCell-NB-r14 */
typedef struct MeasResultServCell_NB_r14 {
	NRSRP_Range_NB_r14_t	 nrsrpResult_r14;
	NRSRQ_Range_NB_r14_t	 nrsrqResult_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultServCell_NB_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultServCell_NB_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultServCell_NB_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultServCell_NB_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultServCell_NB_r14_H_ */
#include <asn_internal.h>
