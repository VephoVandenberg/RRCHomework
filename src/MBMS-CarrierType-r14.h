/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_MBMS_CarrierType_r14_H_
#define	_MBMS_CarrierType_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS_CarrierType_r14__carrierType_r14 {
	MBMS_CarrierType_r14__carrierType_r14_mbms	= 0,
	MBMS_CarrierType_r14__carrierType_r14_fembmsMixed	= 1,
	MBMS_CarrierType_r14__carrierType_r14_fembmsDedicated	= 2
} e_MBMS_CarrierType_r14__carrierType_r14;

/* MBMS-CarrierType-r14 */
typedef struct MBMS_CarrierType_r14 {
	long	 carrierType_r14;
	long	*frameOffset_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_CarrierType_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_carrierType_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_CarrierType_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_MBMS_CarrierType_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_MBMS_CarrierType_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_CarrierType_r14_H_ */
#include <asn_internal.h>
