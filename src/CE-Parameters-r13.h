/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_CE_Parameters_r13_H_
#define	_CE_Parameters_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CE_Parameters_r13__ce_ModeA_r13 {
	CE_Parameters_r13__ce_ModeA_r13_supported	= 0
} e_CE_Parameters_r13__ce_ModeA_r13;
typedef enum CE_Parameters_r13__ce_ModeB_r13 {
	CE_Parameters_r13__ce_ModeB_r13_supported	= 0
} e_CE_Parameters_r13__ce_ModeB_r13;

/* CE-Parameters-r13 */
typedef struct CE_Parameters_r13 {
	long	*ce_ModeA_r13;	/* OPTIONAL */
	long	*ce_ModeB_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CE_Parameters_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_ModeA_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_ModeB_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CE_Parameters_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_CE_Parameters_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_CE_Parameters_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CE_Parameters_r13_H_ */
#include <asn_internal.h>
