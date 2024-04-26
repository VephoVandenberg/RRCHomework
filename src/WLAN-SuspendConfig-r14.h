/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_WLAN_SuspendConfig_r14_H_
#define	_WLAN_SuspendConfig_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* WLAN-SuspendConfig-r14 */
typedef struct WLAN_SuspendConfig_r14 {
	BOOLEAN_t	*wlan_SuspendResumeAllowed_r14;	/* OPTIONAL */
	BOOLEAN_t	*wlan_SuspendTriggersStatusReport_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WLAN_SuspendConfig_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WLAN_SuspendConfig_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_WLAN_SuspendConfig_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_WLAN_SuspendConfig_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _WLAN_SuspendConfig_r14_H_ */
#include <asn_internal.h>
