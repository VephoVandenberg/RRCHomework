/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_SchedulingInfo_BR_r13_H_
#define	_SchedulingInfo_BR_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SchedulingInfo_BR_r13__si_TBS_r13 {
	SchedulingInfo_BR_r13__si_TBS_r13_b152	= 0,
	SchedulingInfo_BR_r13__si_TBS_r13_b208	= 1,
	SchedulingInfo_BR_r13__si_TBS_r13_b256	= 2,
	SchedulingInfo_BR_r13__si_TBS_r13_b328	= 3,
	SchedulingInfo_BR_r13__si_TBS_r13_b408	= 4,
	SchedulingInfo_BR_r13__si_TBS_r13_b504	= 5,
	SchedulingInfo_BR_r13__si_TBS_r13_b600	= 6,
	SchedulingInfo_BR_r13__si_TBS_r13_b712	= 7,
	SchedulingInfo_BR_r13__si_TBS_r13_b808	= 8,
	SchedulingInfo_BR_r13__si_TBS_r13_b936	= 9
} e_SchedulingInfo_BR_r13__si_TBS_r13;

/* SchedulingInfo-BR-r13 */
typedef struct SchedulingInfo_BR_r13 {
	long	 si_Narrowband_r13;
	long	 si_TBS_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingInfo_BR_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_si_TBS_r13_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingInfo_BR_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_SchedulingInfo_BR_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SchedulingInfo_BR_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SchedulingInfo_BR_r13_H_ */
#include <asn_internal.h>
