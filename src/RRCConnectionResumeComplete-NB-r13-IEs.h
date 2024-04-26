/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionResumeComplete_NB_r13_IEs_H_
#define	_RRCConnectionResumeComplete_NB_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "DedicatedInfoNAS.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRCConnectionResumeComplete_NB_v1470_IEs;

/* RRCConnectionResumeComplete-NB-r13-IEs */
typedef struct RRCConnectionResumeComplete_NB_r13_IEs {
	long	*selectedPLMN_Identity_r13;	/* OPTIONAL */
	DedicatedInfoNAS_t	*dedicatedInfoNAS_r13;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct RRCConnectionResumeComplete_NB_v1470_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionResumeComplete_NB_r13_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionResumeComplete_NB_r13_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResumeComplete_NB_r13_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionResumeComplete_NB_r13_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionResumeComplete_NB_r13_IEs_H_ */
#include <asn_internal.h>
