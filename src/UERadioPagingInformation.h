/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_UERadioPagingInformation_H_
#define	_UERadioPagingInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UERadioPagingInformation-r12-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UERadioPagingInformation__criticalExtensions_PR {
	UERadioPagingInformation__criticalExtensions_PR_NOTHING,	/* No components present */
	UERadioPagingInformation__criticalExtensions_PR_c1,
	UERadioPagingInformation__criticalExtensions_PR_criticalExtensionsFuture
} UERadioPagingInformation__criticalExtensions_PR;
typedef enum UERadioPagingInformation__criticalExtensions__c1_PR {
	UERadioPagingInformation__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	UERadioPagingInformation__criticalExtensions__c1_PR_ueRadioPagingInformation_r12,
	UERadioPagingInformation__criticalExtensions__c1_PR_spare7,
	UERadioPagingInformation__criticalExtensions__c1_PR_spare6,
	UERadioPagingInformation__criticalExtensions__c1_PR_spare5,
	UERadioPagingInformation__criticalExtensions__c1_PR_spare4,
	UERadioPagingInformation__criticalExtensions__c1_PR_spare3,
	UERadioPagingInformation__criticalExtensions__c1_PR_spare2,
	UERadioPagingInformation__criticalExtensions__c1_PR_spare1
} UERadioPagingInformation__criticalExtensions__c1_PR;

/* UERadioPagingInformation */
typedef struct UERadioPagingInformation {
	struct UERadioPagingInformation__criticalExtensions {
		UERadioPagingInformation__criticalExtensions_PR present;
		union UERadioPagingInformation__criticalExtensions_u {
			struct UERadioPagingInformation__criticalExtensions__c1 {
				UERadioPagingInformation__criticalExtensions__c1_PR present;
				union UERadioPagingInformation__criticalExtensions__c1_u {
					UERadioPagingInformation_r12_IEs_t	 ueRadioPagingInformation_r12;
					NULL_t	 spare7;
					NULL_t	 spare6;
					NULL_t	 spare5;
					NULL_t	 spare4;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct UERadioPagingInformation__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UERadioPagingInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UERadioPagingInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _UERadioPagingInformation_H_ */
#include <asn_internal.h>
