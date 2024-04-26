/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_CellGlobalIdEUTRA_H_
#define	_CellGlobalIdEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-Identity.h"
#include "CellIdentity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellGlobalIdEUTRA */
typedef struct CellGlobalIdEUTRA {
	PLMN_Identity_t	 plmn_Identity;
	CellIdentity_t	 cellIdentity;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellGlobalIdEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellGlobalIdEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_CellGlobalIdEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_CellGlobalIdEUTRA_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CellGlobalIdEUTRA_H_ */
#include <asn_internal.h>
