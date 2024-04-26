/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_RadioResourceConfigDedicatedSCell_v13c0_H_
#define	_RadioResourceConfigDedicatedSCell_v13c0_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysicalConfigDedicatedSCell-v13c0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RadioResourceConfigDedicatedSCell-v13c0 */
typedef struct RadioResourceConfigDedicatedSCell_v13c0 {
	PhysicalConfigDedicatedSCell_v13c0_t	 physicalConfigDedicatedSCell_v13c0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigDedicatedSCell_v13c0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicatedSCell_v13c0;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigDedicatedSCell_v13c0_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioResourceConfigDedicatedSCell_v13c0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RadioResourceConfigDedicatedSCell_v13c0_H_ */
#include <asn_internal.h>
