/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_PUCCH_ConfigDedicated_v1250_H_
#define	_PUCCH_ConfigDedicated_v1250_H_


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
typedef enum PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12_PR {
	PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12_PR_NOTHING,	/* No components present */
	PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12_PR_release,
	PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12_PR_setup
} PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12_PR;

/* PUCCH-ConfigDedicated-v1250 */
typedef struct PUCCH_ConfigDedicated_v1250 {
	struct PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12 {
		PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12_PR present;
		union PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12_u {
			NULL_t	 release;
			struct PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12__setup {
				long	 nkaPUCCH_AN_r12;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} nkaPUCCH_Param_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_ConfigDedicated_v1250_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_ConfigDedicated_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_PUCCH_ConfigDedicated_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_PUCCH_ConfigDedicated_v1250_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PUCCH_ConfigDedicated_v1250_H_ */
#include <asn_internal.h>
