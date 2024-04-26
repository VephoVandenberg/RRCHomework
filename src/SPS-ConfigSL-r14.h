/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_SPS_ConfigSL_r14_H_
#define	_SPS_ConfigSL_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SPS-ConfigIndex-r14.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14 {
	SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf20	= 0,
	SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf50	= 1,
	SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf100	= 2,
	SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf200	= 3,
	SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf300	= 4,
	SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf400	= 5,
	SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf500	= 6,
	SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf600	= 7,
	SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf700	= 8,
	SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf800	= 9,
	SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf900	= 10,
	SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf1000	= 11,
	SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_spare4	= 12,
	SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_spare3	= 13,
	SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_spare2	= 14,
	SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_spare1	= 15
} e_SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14;

/* SPS-ConfigSL-r14 */
typedef struct SPS_ConfigSL_r14 {
	SPS_ConfigIndex_r14_t	 sps_ConfigIndex_r14;
	long	 semiPersistSchedIntervalSL_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SPS_ConfigSL_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_semiPersistSchedIntervalSL_r14_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SPS_ConfigSL_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SPS_ConfigSL_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SPS_ConfigSL_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SPS_ConfigSL_r14_H_ */
#include <asn_internal.h>
