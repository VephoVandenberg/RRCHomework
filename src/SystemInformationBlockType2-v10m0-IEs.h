/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType2_v10m0_IEs_H_
#define	_SystemInformationBlockType2_v10m0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AdditionalSpectrumEmission-v10l0.h"
#include <constr_SEQUENCE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SystemInformationBlockType2_v10n0_IEs;

/* SystemInformationBlockType2-v10m0-IEs */
typedef struct SystemInformationBlockType2_v10m0_IEs {
	struct SystemInformationBlockType2_v10m0_IEs__freqInfo_v10l0 {
		AdditionalSpectrumEmission_v10l0_t	 additionalSpectrumEmission_v10l0;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *freqInfo_v10l0;
	struct SystemInformationBlockType2_v10m0_IEs__multiBandInfoList_v10l0 {
		A_SEQUENCE_OF(AdditionalSpectrumEmission_v10l0_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *multiBandInfoList_v10l0;
	struct SystemInformationBlockType2_v10n0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType2_v10m0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType2_v10m0_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType2_v10m0_IEs_H_ */
#include <asn_internal.h>
