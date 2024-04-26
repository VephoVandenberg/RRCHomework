/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_DL_CCCH_MessageType_NB_H_
#define	_DL_CCCH_MessageType_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRCConnectionReestablishment-NB.h"
#include "RRCConnectionReestablishmentReject.h"
#include "RRCConnectionReject-NB.h"
#include "RRCConnectionSetup-NB.h"
#include "RRCEarlyDataComplete-NB-r15.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_CCCH_MessageType_NB_PR {
	DL_CCCH_MessageType_NB_PR_NOTHING,	/* No components present */
	DL_CCCH_MessageType_NB_PR_c1,
	DL_CCCH_MessageType_NB_PR_messageClassExtension
} DL_CCCH_MessageType_NB_PR;
typedef enum DL_CCCH_MessageType_NB__c1_PR {
	DL_CCCH_MessageType_NB__c1_PR_NOTHING,	/* No components present */
	DL_CCCH_MessageType_NB__c1_PR_rrcConnectionReestablishment_r13,
	DL_CCCH_MessageType_NB__c1_PR_rrcConnectionReestablishmentReject_r13,
	DL_CCCH_MessageType_NB__c1_PR_rrcConnectionReject_r13,
	DL_CCCH_MessageType_NB__c1_PR_rrcConnectionSetup_r13,
	DL_CCCH_MessageType_NB__c1_PR_rrcEarlyDataComplete_r15,
	DL_CCCH_MessageType_NB__c1_PR_spare3,
	DL_CCCH_MessageType_NB__c1_PR_spare2,
	DL_CCCH_MessageType_NB__c1_PR_spare1
} DL_CCCH_MessageType_NB__c1_PR;

/* DL-CCCH-MessageType-NB */
typedef struct DL_CCCH_MessageType_NB {
	DL_CCCH_MessageType_NB_PR present;
	union DL_CCCH_MessageType_NB_u {
		struct DL_CCCH_MessageType_NB__c1 {
			DL_CCCH_MessageType_NB__c1_PR present;
			union DL_CCCH_MessageType_NB__c1_u {
				RRCConnectionReestablishment_NB_t	 rrcConnectionReestablishment_r13;
				RRCConnectionReestablishmentReject_t	 rrcConnectionReestablishmentReject_r13;
				RRCConnectionReject_NB_t	 rrcConnectionReject_r13;
				RRCConnectionSetup_NB_t	 rrcConnectionSetup_r13;
				RRCEarlyDataComplete_NB_r15_t	 rrcEarlyDataComplete_r15;
				NULL_t	 spare3;
				NULL_t	 spare2;
				NULL_t	 spare1;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct DL_CCCH_MessageType_NB__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_CCCH_MessageType_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_CCCH_MessageType_NB;
extern asn_CHOICE_specifics_t asn_SPC_DL_CCCH_MessageType_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_DL_CCCH_MessageType_NB_1[2];
extern asn_per_constraints_t asn_PER_type_DL_CCCH_MessageType_NB_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_CCCH_MessageType_NB_H_ */
#include <asn_internal.h>
