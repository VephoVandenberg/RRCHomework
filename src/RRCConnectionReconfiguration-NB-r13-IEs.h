/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionReconfiguration_NB_r13_IEs_H_
#define	_RRCConnectionReconfiguration_NB_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include "DedicatedInfoNAS.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReconfiguration_NB_r13_IEs__fullConfig_r13 {
	RRCConnectionReconfiguration_NB_r13_IEs__fullConfig_r13_true	= 0
} e_RRCConnectionReconfiguration_NB_r13_IEs__fullConfig_r13;

/* Forward declarations */
struct RadioResourceConfigDedicated_NB_r13;

/* RRCConnectionReconfiguration-NB-r13-IEs */
typedef struct RRCConnectionReconfiguration_NB_r13_IEs {
	struct RRCConnectionReconfiguration_NB_r13_IEs__dedicatedInfoNASList_r13 {
		A_SEQUENCE_OF(DedicatedInfoNAS_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dedicatedInfoNASList_r13;
	struct RadioResourceConfigDedicated_NB_r13	*radioResourceConfigDedicated_r13;	/* OPTIONAL */
	long	*fullConfig_r13;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct RRCConnectionReconfiguration_NB_r13_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfiguration_NB_r13_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_fullConfig_r13_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_NB_r13_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfiguration_NB_r13_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReconfiguration_NB_r13_IEs_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReconfiguration_NB_r13_IEs_H_ */
#include <asn_internal.h>
