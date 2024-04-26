/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_SCPTMConfiguration_NB_r14_H_
#define	_SCPTMConfiguration_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SC-MTCH-InfoList-NB-r14.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SCPTM_NeighbourCellList_NB_r14;

/* SCPTMConfiguration-NB-r14 */
typedef struct SCPTMConfiguration_NB_r14 {
	SC_MTCH_InfoList_NB_r14_t	 sc_mtch_InfoList_r14;
	struct SCPTM_NeighbourCellList_NB_r14	*scptm_NeighbourCellList_r14;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct SCPTMConfiguration_NB_r14__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCPTMConfiguration_NB_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCPTMConfiguration_NB_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SCPTMConfiguration_NB_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SCPTMConfiguration_NB_r14_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SCPTMConfiguration_NB_r14_H_ */
#include <asn_internal.h>
