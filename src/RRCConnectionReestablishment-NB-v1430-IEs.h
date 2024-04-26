/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionReestablishment_NB_v1430_IEs_H_
#define	_RRCConnectionReestablishment_NB_v1430_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRCConnectionReestablishment-NB-v1430-IEs */
typedef struct RRCConnectionReestablishment_NB_v1430_IEs {
	BIT_STRING_t	*dl_NAS_MAC;	/* OPTIONAL */
	struct RRCConnectionReestablishment_NB_v1430_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReestablishment_NB_v1430_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishment_NB_v1430_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReestablishment_NB_v1430_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReestablishment_NB_v1430_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReestablishment_NB_v1430_IEs_H_ */
#include <asn_internal.h>
