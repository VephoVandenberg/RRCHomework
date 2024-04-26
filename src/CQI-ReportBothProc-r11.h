/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_CQI_ReportBothProc_r11_H_
#define	_CQI_ReportBothProc_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CSI-ProcessId-r11.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_ReportBothProc_r11__pmi_RI_Report_r11 {
	CQI_ReportBothProc_r11__pmi_RI_Report_r11_setup	= 0
} e_CQI_ReportBothProc_r11__pmi_RI_Report_r11;

/* CQI-ReportBothProc-r11 */
typedef struct CQI_ReportBothProc_r11 {
	CSI_ProcessId_r11_t	*ri_Ref_CSI_ProcessId_r11;	/* OPTIONAL */
	long	*pmi_RI_Report_r11;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportBothProc_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_pmi_RI_Report_r11_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportBothProc_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportBothProc_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_CQI_ReportBothProc_r11_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportBothProc_r11_H_ */
#include <asn_internal.h>
