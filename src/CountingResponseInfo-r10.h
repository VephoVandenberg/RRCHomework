/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_CountingResponseInfo_r10_H_
#define	_CountingResponseInfo_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CountingResponseInfo-r10 */
typedef struct CountingResponseInfo_r10 {
	long	 countingResponseService_r10;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CountingResponseInfo_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CountingResponseInfo_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_CountingResponseInfo_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_CountingResponseInfo_r10_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CountingResponseInfo_r10_H_ */
#include <asn_internal.h>