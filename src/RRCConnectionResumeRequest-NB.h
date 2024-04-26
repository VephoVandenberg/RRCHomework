/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionResumeRequest_NB_H_
#define	_RRCConnectionResumeRequest_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRCConnectionResumeRequest-NB-r13-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionResumeRequest_NB__criticalExtensions_PR {
	RRCConnectionResumeRequest_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionResumeRequest_NB__criticalExtensions_PR_rrcConnectionResumeRequest_r13,
	RRCConnectionResumeRequest_NB__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionResumeRequest_NB__criticalExtensions_PR;

/* RRCConnectionResumeRequest-NB */
typedef struct RRCConnectionResumeRequest_NB {
	struct RRCConnectionResumeRequest_NB__criticalExtensions {
		RRCConnectionResumeRequest_NB__criticalExtensions_PR present;
		union RRCConnectionResumeRequest_NB__criticalExtensions_u {
			RRCConnectionResumeRequest_NB_r13_IEs_t	 rrcConnectionResumeRequest_r13;
			struct RRCConnectionResumeRequest_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionResumeRequest_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionResumeRequest_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResumeRequest_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionResumeRequest_NB_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionResumeRequest_NB_H_ */
#include <asn_internal.h>
