/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_BandParameters_r11_H_
#define	_BandParameters_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicator-r11.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BandParameters_r11__supportedCSI_Proc_r11 {
	BandParameters_r11__supportedCSI_Proc_r11_n1	= 0,
	BandParameters_r11__supportedCSI_Proc_r11_n3	= 1,
	BandParameters_r11__supportedCSI_Proc_r11_n4	= 2
} e_BandParameters_r11__supportedCSI_Proc_r11;

/* Forward declarations */
struct BandParametersUL_r10;
struct BandParametersDL_r10;

/* BandParameters-r11 */
typedef struct BandParameters_r11 {
	FreqBandIndicator_r11_t	 bandEUTRA_r11;
	struct BandParametersUL_r10	*bandParametersUL_r11;	/* OPTIONAL */
	struct BandParametersDL_r10	*bandParametersDL_r11;	/* OPTIONAL */
	long	*supportedCSI_Proc_r11;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandParameters_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_supportedCSI_Proc_r11_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BandParameters_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_BandParameters_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_BandParameters_r11_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _BandParameters_r11_H_ */
#include <asn_internal.h>
