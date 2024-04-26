/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_CSI_RS_ConfigZP_r11_H_
#define	_CSI_RS_ConfigZP_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CSI-RS-ConfigZPId-r11.h"
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CSI-RS-ConfigZP-r11 */
typedef struct CSI_RS_ConfigZP_r11 {
	CSI_RS_ConfigZPId_r11_t	 csi_RS_ConfigZPId_r11;
	BIT_STRING_t	 resourceConfigList_r11;
	long	 subframeConfig_r11;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_RS_ConfigZP_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_RS_ConfigZP_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_ConfigZP_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_RS_ConfigZP_r11_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_RS_ConfigZP_r11_H_ */
#include <asn_internal.h>
