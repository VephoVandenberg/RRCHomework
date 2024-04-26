/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_TxPoolToAddMod_r14_H_
#define	_SL_TxPoolToAddMod_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-V2X-TxPoolIdentity-r14.h"
#include "SL-CommResourcePoolV2X-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SL-TxPoolToAddMod-r14 */
typedef struct SL_TxPoolToAddMod_r14 {
	SL_V2X_TxPoolIdentity_r14_t	 poolIdentity_r14;
	SL_CommResourcePoolV2X_r14_t	 pool_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_TxPoolToAddMod_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_TxPoolToAddMod_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_TxPoolToAddMod_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_TxPoolToAddMod_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_TxPoolToAddMod_r14_H_ */
#include <asn_internal.h>
