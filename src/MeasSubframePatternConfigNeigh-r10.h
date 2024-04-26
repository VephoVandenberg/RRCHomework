/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasSubframePatternConfigNeigh_r10_H_
#define	_MeasSubframePatternConfigNeigh_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "MeasSubframePattern-r10.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasSubframePatternConfigNeigh_r10_PR {
	MeasSubframePatternConfigNeigh_r10_PR_NOTHING,	/* No components present */
	MeasSubframePatternConfigNeigh_r10_PR_release,
	MeasSubframePatternConfigNeigh_r10_PR_setup
} MeasSubframePatternConfigNeigh_r10_PR;

/* Forward declarations */
struct MeasSubframeCellList_r10;

/* MeasSubframePatternConfigNeigh-r10 */
typedef struct MeasSubframePatternConfigNeigh_r10 {
	MeasSubframePatternConfigNeigh_r10_PR present;
	union MeasSubframePatternConfigNeigh_r10_u {
		NULL_t	 release;
		struct MeasSubframePatternConfigNeigh_r10__setup {
			MeasSubframePattern_r10_t	 measSubframePatternNeigh_r10;
			struct MeasSubframeCellList_r10	*measSubframeCellList_r10;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasSubframePatternConfigNeigh_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasSubframePatternConfigNeigh_r10;
extern asn_CHOICE_specifics_t asn_SPC_MeasSubframePatternConfigNeigh_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasSubframePatternConfigNeigh_r10_1[2];
extern asn_per_constraints_t asn_PER_type_MeasSubframePatternConfigNeigh_r10_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasSubframePatternConfigNeigh_r10_H_ */
#include <asn_internal.h>
