/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_UplinkPowerControlDedicated_v1530_H_
#define	_UplinkPowerControlDedicated_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Alpha-r12.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UplinkPowerControlDedicated-v1530 */
typedef struct UplinkPowerControlDedicated_v1530 {
	Alpha_r12_t	*alpha_UE_r15;	/* OPTIONAL */
	long	*p0_UE_PUSCH_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkPowerControlDedicated_v1530_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlDedicated_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlDedicated_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_UplinkPowerControlDedicated_v1530_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UplinkPowerControlDedicated_v1530_H_ */
#include <asn_internal.h>
