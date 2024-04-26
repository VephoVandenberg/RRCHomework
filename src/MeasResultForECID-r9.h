/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasResultForECID_r9_H_
#define	_MeasResultForECID_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultForECID-r9 */
typedef struct MeasResultForECID_r9 {
	long	 ue_RxTxTimeDiffResult_r9;
	BIT_STRING_t	 currentSFN_r9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultForECID_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultForECID_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultForECID_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultForECID_r9_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultForECID_r9_H_ */
#include <asn_internal.h>
