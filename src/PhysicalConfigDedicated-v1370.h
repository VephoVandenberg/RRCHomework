/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_PhysicalConfigDedicated_v1370_H_
#define	_PhysicalConfigDedicated_v1370_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PUCCH_ConfigDedicated_v1370;

/* PhysicalConfigDedicated-v1370 */
typedef struct PhysicalConfigDedicated_v1370 {
	struct PUCCH_ConfigDedicated_v1370	*pucch_ConfigDedicated_v1370;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalConfigDedicated_v1370_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalConfigDedicated_v1370;
extern asn_SEQUENCE_specifics_t asn_SPC_PhysicalConfigDedicated_v1370_specs_1;
extern asn_TYPE_member_t asn_MBR_PhysicalConfigDedicated_v1370_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PhysicalConfigDedicated_v1370_H_ */
#include <asn_internal.h>
