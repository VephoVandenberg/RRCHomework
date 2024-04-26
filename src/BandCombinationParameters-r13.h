/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_BandCombinationParameters_r13_H_
#define	_BandCombinationParameters_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "SupportedBandwidthCombinationSet-r10.h"
#include "BandInfoEUTRA.h"
#include <BIT_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BandCombinationParameters_r13__differentFallbackSupported_r13 {
	BandCombinationParameters_r13__differentFallbackSupported_r13_true	= 0
} e_BandCombinationParameters_r13__differentFallbackSupported_r13;
typedef enum BandCombinationParameters_r13__multipleTimingAdvance_r13 {
	BandCombinationParameters_r13__multipleTimingAdvance_r13_supported	= 0
} e_BandCombinationParameters_r13__multipleTimingAdvance_r13;
typedef enum BandCombinationParameters_r13__simultaneousRx_Tx_r13 {
	BandCombinationParameters_r13__simultaneousRx_Tx_r13_supported	= 0
} e_BandCombinationParameters_r13__simultaneousRx_Tx_r13;
typedef enum BandCombinationParameters_r13__dc_Support_r13__asynchronous_r13 {
	BandCombinationParameters_r13__dc_Support_r13__asynchronous_r13_supported	= 0
} e_BandCombinationParameters_r13__dc_Support_r13__asynchronous_r13;
typedef enum BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13_PR {
	BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13_PR_NOTHING,	/* No components present */
	BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13_PR_threeEntries_r13,
	BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13_PR_fourEntries_r13,
	BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13_PR_fiveEntries_r13
} BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13_PR;

/* Forward declarations */
struct BandParameters_r13;

/* BandCombinationParameters-r13 */
typedef struct BandCombinationParameters_r13 {
	long	*differentFallbackSupported_r13;	/* OPTIONAL */
	struct BandCombinationParameters_r13__bandParameterList_r13 {
		A_SEQUENCE_OF(struct BandParameters_r13) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} bandParameterList_r13;
	SupportedBandwidthCombinationSet_r10_t	*supportedBandwidthCombinationSet_r13;	/* OPTIONAL */
	long	*multipleTimingAdvance_r13;	/* OPTIONAL */
	long	*simultaneousRx_Tx_r13;	/* OPTIONAL */
	BandInfoEUTRA_t	 bandInfoEUTRA_r13;
	struct BandCombinationParameters_r13__dc_Support_r13 {
		long	*asynchronous_r13;	/* OPTIONAL */
		struct BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13 {
			BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13_PR present;
			union BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13_u {
				BIT_STRING_t	 threeEntries_r13;
				BIT_STRING_t	 fourEntries_r13;
				BIT_STRING_t	 fiveEntries_r13;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *supportedCellGrouping_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dc_Support_r13;
	BIT_STRING_t	*supportedNAICS_2CRS_AP_r13;	/* OPTIONAL */
	BIT_STRING_t	*commSupportedBandsPerBC_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombinationParameters_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_differentFallbackSupported_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_multipleTimingAdvance_r13_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_simultaneousRx_Tx_r13_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_asynchronous_r13_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BandCombinationParameters_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_BandCombinationParameters_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_BandCombinationParameters_r13_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _BandCombinationParameters_r13_H_ */
#include <asn_internal.h>
