/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_LWIP_Parameters_r13_H_
#define	_LWIP_Parameters_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LWIP_Parameters_r13__lwip_r13 {
	LWIP_Parameters_r13__lwip_r13_supported	= 0
} e_LWIP_Parameters_r13__lwip_r13;

/* LWIP-Parameters-r13 */
typedef struct LWIP_Parameters_r13 {
	long	*lwip_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LWIP_Parameters_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_lwip_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LWIP_Parameters_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LWIP_Parameters_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LWIP_Parameters_r13_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LWIP_Parameters_r13_H_ */
#include <asn_internal.h>
