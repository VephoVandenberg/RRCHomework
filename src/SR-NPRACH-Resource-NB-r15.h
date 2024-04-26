/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_SR_NPRACH_Resource_NB_r15_H_
#define	_SR_NPRACH_Resource_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SR_NPRACH_Resource_NB_r15__nprach_SubCarrierIndex_r15_PR {
	SR_NPRACH_Resource_NB_r15__nprach_SubCarrierIndex_r15_PR_NOTHING,	/* No components present */
	SR_NPRACH_Resource_NB_r15__nprach_SubCarrierIndex_r15_PR_nprach_Fmt0Fmt1_r15,
	SR_NPRACH_Resource_NB_r15__nprach_SubCarrierIndex_r15_PR_nprach_Fmt2_r15
} SR_NPRACH_Resource_NB_r15__nprach_SubCarrierIndex_r15_PR;
typedef enum SR_NPRACH_Resource_NB_r15__alpha_r15 {
	SR_NPRACH_Resource_NB_r15__alpha_r15_al0	= 0,
	SR_NPRACH_Resource_NB_r15__alpha_r15_al04	= 1,
	SR_NPRACH_Resource_NB_r15__alpha_r15_al05	= 2,
	SR_NPRACH_Resource_NB_r15__alpha_r15_al06	= 3,
	SR_NPRACH_Resource_NB_r15__alpha_r15_al07	= 4,
	SR_NPRACH_Resource_NB_r15__alpha_r15_al08	= 5,
	SR_NPRACH_Resource_NB_r15__alpha_r15_al09	= 6,
	SR_NPRACH_Resource_NB_r15__alpha_r15_al1	= 7
} e_SR_NPRACH_Resource_NB_r15__alpha_r15;

/* SR-NPRACH-Resource-NB-r15 */
typedef struct SR_NPRACH_Resource_NB_r15 {
	long	 nprach_CarrierIndex_r15;
	long	 nprach_ResourceIndex_r15;
	struct SR_NPRACH_Resource_NB_r15__nprach_SubCarrierIndex_r15 {
		SR_NPRACH_Resource_NB_r15__nprach_SubCarrierIndex_r15_PR present;
		union SR_NPRACH_Resource_NB_r15__nprach_SubCarrierIndex_r15_u {
			long	 nprach_Fmt0Fmt1_r15;
			long	 nprach_Fmt2_r15;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} nprach_SubCarrierIndex_r15;
	long	 p0_SR_r15;
	long	 alpha_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SR_NPRACH_Resource_NB_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_alpha_r15_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SR_NPRACH_Resource_NB_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_SR_NPRACH_Resource_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SR_NPRACH_Resource_NB_r15_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _SR_NPRACH_Resource_NB_r15_H_ */
#include <asn_internal.h>
