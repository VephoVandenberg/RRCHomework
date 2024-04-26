/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_PCCH_MessageType_H_
#define	_PCCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Paging.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PCCH_MessageType_PR {
	PCCH_MessageType_PR_NOTHING,	/* No components present */
	PCCH_MessageType_PR_c1,
	PCCH_MessageType_PR_messageClassExtension
} PCCH_MessageType_PR;
typedef enum PCCH_MessageType__c1_PR {
	PCCH_MessageType__c1_PR_NOTHING,	/* No components present */
	PCCH_MessageType__c1_PR_paging
} PCCH_MessageType__c1_PR;

/* PCCH-MessageType */
typedef struct PCCH_MessageType {
	PCCH_MessageType_PR present;
	union PCCH_MessageType_u {
		struct PCCH_MessageType__c1 {
			PCCH_MessageType__c1_PR present;
			union PCCH_MessageType__c1_u {
				Paging_t	 paging;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct PCCH_MessageType__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PCCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PCCH_MessageType;
extern asn_CHOICE_specifics_t asn_SPC_PCCH_MessageType_specs_1;
extern asn_TYPE_member_t asn_MBR_PCCH_MessageType_1[2];
extern asn_per_constraints_t asn_PER_type_PCCH_MessageType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _PCCH_MessageType_H_ */
#include <asn_internal.h>
