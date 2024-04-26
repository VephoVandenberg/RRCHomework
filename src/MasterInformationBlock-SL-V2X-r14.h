/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_MasterInformationBlock_SL_V2X_r14_H_
#define	_MasterInformationBlock_SL_V2X_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "TDD-ConfigSL-r12.h"
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MasterInformationBlock_SL_V2X_r14__sl_Bandwidth_r14 {
	MasterInformationBlock_SL_V2X_r14__sl_Bandwidth_r14_n6	= 0,
	MasterInformationBlock_SL_V2X_r14__sl_Bandwidth_r14_n15	= 1,
	MasterInformationBlock_SL_V2X_r14__sl_Bandwidth_r14_n25	= 2,
	MasterInformationBlock_SL_V2X_r14__sl_Bandwidth_r14_n50	= 3,
	MasterInformationBlock_SL_V2X_r14__sl_Bandwidth_r14_n75	= 4,
	MasterInformationBlock_SL_V2X_r14__sl_Bandwidth_r14_n100	= 5
} e_MasterInformationBlock_SL_V2X_r14__sl_Bandwidth_r14;

/* MasterInformationBlock-SL-V2X-r14 */
typedef struct MasterInformationBlock_SL_V2X_r14 {
	long	 sl_Bandwidth_r14;
	TDD_ConfigSL_r12_t	 tdd_ConfigSL_r14;
	BIT_STRING_t	 directFrameNumber_r14;
	long	 directSubframeNumber_r14;
	BOOLEAN_t	 inCoverage_r14;
	BIT_STRING_t	 reserved_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MasterInformationBlock_SL_V2X_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sl_Bandwidth_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MasterInformationBlock_SL_V2X_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_MasterInformationBlock_SL_V2X_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_MasterInformationBlock_SL_V2X_r14_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _MasterInformationBlock_SL_V2X_r14_H_ */
#include <asn_internal.h>