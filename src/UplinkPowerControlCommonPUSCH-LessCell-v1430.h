/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_UplinkPowerControlCommonPUSCH_LessCell_v1430_H_
#define	_UplinkPowerControlCommonPUSCH_LessCell_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "Alpha-r12.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UplinkPowerControlCommonPUSCH-LessCell-v1430 */
typedef struct UplinkPowerControlCommonPUSCH_LessCell_v1430 {
	long	*p0_Nominal_PeriodicSRS_r14;	/* OPTIONAL */
	long	*p0_Nominal_AperiodicSRS_r14;	/* OPTIONAL */
	Alpha_r12_t	*alpha_SRS_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkPowerControlCommonPUSCH_LessCell_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlCommonPUSCH_LessCell_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlCommonPUSCH_LessCell_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_UplinkPowerControlCommonPUSCH_LessCell_v1430_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UplinkPowerControlCommonPUSCH_LessCell_v1430_H_ */
#include <asn_internal.h>
