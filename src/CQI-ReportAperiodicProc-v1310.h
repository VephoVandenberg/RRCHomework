/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_CQI_ReportAperiodicProc_v1310_H_
#define	_CQI_ReportAperiodicProc_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CQI-ReportAperiodicProc-v1310 */
typedef struct CQI_ReportAperiodicProc_v1310 {
	BOOLEAN_t	 trigger001_r13;
	BOOLEAN_t	 trigger010_r13;
	BOOLEAN_t	 trigger011_r13;
	BOOLEAN_t	 trigger100_r13;
	BOOLEAN_t	 trigger101_r13;
	BOOLEAN_t	 trigger110_r13;
	BOOLEAN_t	 trigger111_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportAperiodicProc_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportAperiodicProc_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportAperiodicProc_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_CQI_ReportAperiodicProc_v1310_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportAperiodicProc_v1310_H_ */
#include <asn_internal.h>
