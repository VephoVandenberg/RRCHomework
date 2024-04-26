/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasIdleConfigDedicated_r15_H_
#define	_MeasIdleConfigDedicated_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasIdleConfigDedicated_r15__measIdleDuration_r15 {
	MeasIdleConfigDedicated_r15__measIdleDuration_r15_sec10	= 0,
	MeasIdleConfigDedicated_r15__measIdleDuration_r15_sec30	= 1,
	MeasIdleConfigDedicated_r15__measIdleDuration_r15_sec60	= 2,
	MeasIdleConfigDedicated_r15__measIdleDuration_r15_sec120	= 3,
	MeasIdleConfigDedicated_r15__measIdleDuration_r15_sec180	= 4,
	MeasIdleConfigDedicated_r15__measIdleDuration_r15_sec240	= 5,
	MeasIdleConfigDedicated_r15__measIdleDuration_r15_sec300	= 6,
	MeasIdleConfigDedicated_r15__measIdleDuration_r15_spare	= 7
} e_MeasIdleConfigDedicated_r15__measIdleDuration_r15;

/* Forward declarations */
struct EUTRA_CarrierList_r15;

/* MeasIdleConfigDedicated-r15 */
typedef struct MeasIdleConfigDedicated_r15 {
	struct EUTRA_CarrierList_r15	*measIdleCarrierListEUTRA_r15;	/* OPTIONAL */
	long	 measIdleDuration_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasIdleConfigDedicated_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_measIdleDuration_r15_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasIdleConfigDedicated_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasIdleConfigDedicated_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasIdleConfigDedicated_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasIdleConfigDedicated_r15_H_ */
#include <asn_internal.h>