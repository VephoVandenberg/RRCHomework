/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_QuantityConfigUTRA_v1020_H_
#define	_QuantityConfigUTRA_v1020_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FilterCoefficient.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* QuantityConfigUTRA-v1020 */
typedef struct QuantityConfigUTRA_v1020 {
	FilterCoefficient_t	*filterCoefficient2_FDD_r10;	/* DEFAULT 4 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QuantityConfigUTRA_v1020_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QuantityConfigUTRA_v1020;
extern asn_SEQUENCE_specifics_t asn_SPC_QuantityConfigUTRA_v1020_specs_1;
extern asn_TYPE_member_t asn_MBR_QuantityConfigUTRA_v1020_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _QuantityConfigUTRA_v1020_H_ */
#include <asn_internal.h>
