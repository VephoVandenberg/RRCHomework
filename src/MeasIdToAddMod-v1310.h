/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasIdToAddMod_v1310_H_
#define	_MeasIdToAddMod_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasObjectId-v1310.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasIdToAddMod-v1310 */
typedef struct MeasIdToAddMod_v1310 {
	MeasObjectId_v1310_t	*measObjectId_v1310;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasIdToAddMod_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasIdToAddMod_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasIdToAddMod_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasIdToAddMod_v1310_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasIdToAddMod_v1310_H_ */
#include <asn_internal.h>
