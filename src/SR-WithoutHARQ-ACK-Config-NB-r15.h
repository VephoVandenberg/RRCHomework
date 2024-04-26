/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_SR_WithoutHARQ_ACK_Config_NB_r15_H_
#define	_SR_WithoutHARQ_ACK_Config_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SR_WithoutHARQ_ACK_Config_NB_r15_PR {
	SR_WithoutHARQ_ACK_Config_NB_r15_PR_NOTHING,	/* No components present */
	SR_WithoutHARQ_ACK_Config_NB_r15_PR_release,
	SR_WithoutHARQ_ACK_Config_NB_r15_PR_setup
} SR_WithoutHARQ_ACK_Config_NB_r15_PR;

/* Forward declarations */
struct SR_NPRACH_Resource_NB_r15;

/* SR-WithoutHARQ-ACK-Config-NB-r15 */
typedef struct SR_WithoutHARQ_ACK_Config_NB_r15 {
	SR_WithoutHARQ_ACK_Config_NB_r15_PR present;
	union SR_WithoutHARQ_ACK_Config_NB_r15_u {
		NULL_t	 release;
		struct SR_WithoutHARQ_ACK_Config_NB_r15__setup {
			long	*sr_ProhibitTimer_r15;	/* OPTIONAL */
			struct SR_NPRACH_Resource_NB_r15	*sr_NPRACH_Resource_r15;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SR_WithoutHARQ_ACK_Config_NB_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SR_WithoutHARQ_ACK_Config_NB_r15;
extern asn_CHOICE_specifics_t asn_SPC_SR_WithoutHARQ_ACK_Config_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SR_WithoutHARQ_ACK_Config_NB_r15_1[2];
extern asn_per_constraints_t asn_PER_type_SR_WithoutHARQ_ACK_Config_NB_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SR_WithoutHARQ_ACK_Config_NB_r15_H_ */
#include <asn_internal.h>
