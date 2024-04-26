/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_PSSCH_TxConfig_r14_H_
#define	_SL_PSSCH_TxConfig_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-TypeTxSync-r14.h"
#include <NativeEnumerated.h>
#include "SL-PSSCH-TxParameters-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_PSSCH_TxConfig_r14__thresUE_Speed_r14 {
	SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph60	= 0,
	SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph80	= 1,
	SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph100	= 2,
	SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph120	= 3,
	SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph140	= 4,
	SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph160	= 5,
	SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph180	= 6,
	SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph200	= 7
} e_SL_PSSCH_TxConfig_r14__thresUE_Speed_r14;

/* Forward declarations */
struct SL_PSSCH_TxParameters_v1530;

/* SL-PSSCH-TxConfig-r14 */
typedef struct SL_PSSCH_TxConfig_r14 {
	SL_TypeTxSync_r14_t	*typeTxSync_r14;	/* OPTIONAL */
	long	 thresUE_Speed_r14;
	SL_PSSCH_TxParameters_r14_t	 parametersAboveThres_r14;
	SL_PSSCH_TxParameters_r14_t	 parametersBelowThres_r14;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SL_PSSCH_TxConfig_r14__ext1 {
		struct SL_PSSCH_TxParameters_v1530	*parametersAboveThres_v1530;	/* OPTIONAL */
		struct SL_PSSCH_TxParameters_v1530	*parametersBelowThres_v1530;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_PSSCH_TxConfig_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_thresUE_Speed_r14_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_PSSCH_TxConfig_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_PSSCH_TxConfig_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_PSSCH_TxConfig_r14_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_PSSCH_TxConfig_r14_H_ */
#include <asn_internal.h>
