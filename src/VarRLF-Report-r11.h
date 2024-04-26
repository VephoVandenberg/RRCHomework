/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_VarRLF_Report_r11_H_
#define	_VarRLF_Report_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RLF-Report-r9.h"
#include "PLMN-IdentityList3-r11.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VarRLF-Report-r11 */
typedef struct VarRLF_Report_r11 {
	RLF_Report_r9_t	 rlf_Report_r10;
	PLMN_IdentityList3_r11_t	 plmn_IdentityList_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarRLF_Report_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarRLF_Report_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _VarRLF_Report_r11_H_ */
#include <asn_internal.h>
