/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_InDeviceCoexIndication_v1310_IEs_H_
#define	_InDeviceCoexIndication_v1310_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AffectedCarrierFreqList_v1310;
struct AffectedCarrierFreqCombList_r13;
struct InDeviceCoexIndication_v1360_IEs;

/* InDeviceCoexIndication-v1310-IEs */
typedef struct InDeviceCoexIndication_v1310_IEs {
	struct AffectedCarrierFreqList_v1310	*affectedCarrierFreqList_v1310;	/* OPTIONAL */
	struct AffectedCarrierFreqCombList_r13	*affectedCarrierFreqCombList_r13;	/* OPTIONAL */
	struct InDeviceCoexIndication_v1360_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InDeviceCoexIndication_v1310_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InDeviceCoexIndication_v1310_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_InDeviceCoexIndication_v1310_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_InDeviceCoexIndication_v1310_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _InDeviceCoexIndication_v1310_IEs_H_ */
#include <asn_internal.h>
