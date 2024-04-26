/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_PLMN_IdentityInfo2_r12_H_
#define	_PLMN_IdentityInfo2_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "PLMN-Identity.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PLMN_IdentityInfo2_r12_PR {
	PLMN_IdentityInfo2_r12_PR_NOTHING,	/* No components present */
	PLMN_IdentityInfo2_r12_PR_plmn_Index_r12,
	PLMN_IdentityInfo2_r12_PR_plmnIdentity_r12
} PLMN_IdentityInfo2_r12_PR;

/* PLMN-IdentityInfo2-r12 */
typedef struct PLMN_IdentityInfo2_r12 {
	PLMN_IdentityInfo2_r12_PR present;
	union PLMN_IdentityInfo2_r12_u {
		long	 plmn_Index_r12;
		PLMN_Identity_t	 plmnIdentity_r12;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_IdentityInfo2_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityInfo2_r12;
extern asn_CHOICE_specifics_t asn_SPC_PLMN_IdentityInfo2_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_PLMN_IdentityInfo2_r12_1[2];
extern asn_per_constraints_t asn_PER_type_PLMN_IdentityInfo2_r12_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _PLMN_IdentityInfo2_r12_H_ */
#include <asn_internal.h>
