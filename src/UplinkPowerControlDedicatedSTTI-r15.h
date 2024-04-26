/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_UplinkPowerControlDedicatedSTTI_r15_H_
#define	_UplinkPowerControlDedicatedSTTI_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DeltaTxD_OffsetListSPUCCH_r15;

/* UplinkPowerControlDedicatedSTTI-r15 */
typedef struct UplinkPowerControlDedicatedSTTI_r15 {
	BOOLEAN_t	 accumulationEnabledSTTI_r15;
	struct DeltaTxD_OffsetListSPUCCH_r15	*deltaTxD_OffsetListSPUCCH_r15;	/* OPTIONAL */
	BOOLEAN_t	 uplinkPower_CSIPayload;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkPowerControlDedicatedSTTI_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlDedicatedSTTI_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlDedicatedSTTI_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_UplinkPowerControlDedicatedSTTI_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UplinkPowerControlDedicatedSTTI_r15_H_ */
#include <asn_internal.h>
