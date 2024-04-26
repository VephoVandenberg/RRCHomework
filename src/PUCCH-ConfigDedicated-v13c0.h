/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_PUCCH_ConfigDedicated_v13c0_H_
#define	_PUCCH_ConfigDedicated_v13c0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUCCH_ConfigDedicated_v13c0__channelSelection_v13c0__n1PUCCH_AN_CS_v13c0_PR {
	PUCCH_ConfigDedicated_v13c0__channelSelection_v13c0__n1PUCCH_AN_CS_v13c0_PR_NOTHING,	/* No components present */
	PUCCH_ConfigDedicated_v13c0__channelSelection_v13c0__n1PUCCH_AN_CS_v13c0_PR_release,
	PUCCH_ConfigDedicated_v13c0__channelSelection_v13c0__n1PUCCH_AN_CS_v13c0_PR_setup
} PUCCH_ConfigDedicated_v13c0__channelSelection_v13c0__n1PUCCH_AN_CS_v13c0_PR;

/* PUCCH-ConfigDedicated-v13c0 */
typedef struct PUCCH_ConfigDedicated_v13c0 {
	struct PUCCH_ConfigDedicated_v13c0__channelSelection_v13c0 {
		struct PUCCH_ConfigDedicated_v13c0__channelSelection_v13c0__n1PUCCH_AN_CS_v13c0 {
			PUCCH_ConfigDedicated_v13c0__channelSelection_v13c0__n1PUCCH_AN_CS_v13c0_PR present;
			union PUCCH_ConfigDedicated_v13c0__channelSelection_v13c0__n1PUCCH_AN_CS_v13c0_u {
				NULL_t	 release;
				struct PUCCH_ConfigDedicated_v13c0__channelSelection_v13c0__n1PUCCH_AN_CS_v13c0__setup {
					struct PUCCH_ConfigDedicated_v13c0__channelSelection_v13c0__n1PUCCH_AN_CS_v13c0__setup__n1PUCCH_AN_CS_ListP1_v13c0 {
						A_SEQUENCE_OF(long) list;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} n1PUCCH_AN_CS_ListP1_v13c0;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} n1PUCCH_AN_CS_v13c0;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} channelSelection_v13c0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_ConfigDedicated_v13c0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_ConfigDedicated_v13c0;
extern asn_SEQUENCE_specifics_t asn_SPC_PUCCH_ConfigDedicated_v13c0_specs_1;
extern asn_TYPE_member_t asn_MBR_PUCCH_ConfigDedicated_v13c0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PUCCH_ConfigDedicated_v13c0_H_ */
#include <asn_internal.h>