/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_Inband_DifferentPCI_TDD_NB_r15_H_
#define	_Inband_DifferentPCI_TDD_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "ChannelRasterOffset-NB-r13.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Inband_DifferentPCI_TDD_NB_r15__eutra_NumCRS_Ports_r15 {
	Inband_DifferentPCI_TDD_NB_r15__eutra_NumCRS_Ports_r15_same	= 0,
	Inband_DifferentPCI_TDD_NB_r15__eutra_NumCRS_Ports_r15_four	= 1
} e_Inband_DifferentPCI_TDD_NB_r15__eutra_NumCRS_Ports_r15;
typedef enum Inband_DifferentPCI_TDD_NB_r15__sib_InbandLocation_r15 {
	Inband_DifferentPCI_TDD_NB_r15__sib_InbandLocation_r15_lower	= 0,
	Inband_DifferentPCI_TDD_NB_r15__sib_InbandLocation_r15_higher	= 1
} e_Inband_DifferentPCI_TDD_NB_r15__sib_InbandLocation_r15;

/* Inband-DifferentPCI-TDD-NB-r15 */
typedef struct Inband_DifferentPCI_TDD_NB_r15 {
	long	 eutra_NumCRS_Ports_r15;
	ChannelRasterOffset_NB_r13_t	 rasterOffset_r15;
	long	 sib_InbandLocation_r15;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Inband_DifferentPCI_TDD_NB_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_eutra_NumCRS_Ports_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sib_InbandLocation_r15_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Inband_DifferentPCI_TDD_NB_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_Inband_DifferentPCI_TDD_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_Inband_DifferentPCI_TDD_NB_r15_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _Inband_DifferentPCI_TDD_NB_r15_H_ */
#include <asn_internal.h>