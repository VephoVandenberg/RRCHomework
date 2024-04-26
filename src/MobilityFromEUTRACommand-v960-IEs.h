/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_MobilityFromEUTRACommand_v960_IEs_H_
#define	_MobilityFromEUTRACommand_v960_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BandIndicatorGERAN.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MobilityFromEUTRACommand_v1530_IEs;

/* MobilityFromEUTRACommand-v960-IEs */
typedef struct MobilityFromEUTRACommand_v960_IEs {
	BandIndicatorGERAN_t	*bandIndicator;	/* OPTIONAL */
	struct MobilityFromEUTRACommand_v1530_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MobilityFromEUTRACommand_v960_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MobilityFromEUTRACommand_v960_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_MobilityFromEUTRACommand_v960_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_MobilityFromEUTRACommand_v960_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MobilityFromEUTRACommand_v960_IEs_H_ */
#include <asn_internal.h>
