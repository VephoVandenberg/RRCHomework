/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_HandoverPreparationInformation_v9e0_IEs_H_
#define	_HandoverPreparationInformation_v9e0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AS_Config_v9e0;
struct HandoverPreparationInformation_v1130_IEs;

/* HandoverPreparationInformation-v9e0-IEs */
typedef struct HandoverPreparationInformation_v9e0_IEs {
	struct AS_Config_v9e0	*as_Config_v9e0;	/* OPTIONAL */
	struct HandoverPreparationInformation_v1130_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationInformation_v9e0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_v9e0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_HandoverPreparationInformation_v9e0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_HandoverPreparationInformation_v9e0_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverPreparationInformation_v9e0_IEs_H_ */
#include <asn_internal.h>
