/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionRelease_v1540_IEs_H_
#define	_RRCConnectionRelease_v1540_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRCConnectionRelease-v1540-IEs */
typedef struct RRCConnectionRelease_v1540_IEs {
	long	*waitTime;	/* OPTIONAL */
	struct RRCConnectionRelease_v1540_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRelease_v1540_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRelease_v1540_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionRelease_v1540_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionRelease_v1540_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionRelease_v1540_IEs_H_ */
#include <asn_internal.h>
