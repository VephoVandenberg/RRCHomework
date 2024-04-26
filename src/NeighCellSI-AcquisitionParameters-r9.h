/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_NeighCellSI_AcquisitionParameters_r9_H_
#define	_NeighCellSI_AcquisitionParameters_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NeighCellSI_AcquisitionParameters_r9__intraFreqSI_AcquisitionForHO_r9 {
	NeighCellSI_AcquisitionParameters_r9__intraFreqSI_AcquisitionForHO_r9_supported	= 0
} e_NeighCellSI_AcquisitionParameters_r9__intraFreqSI_AcquisitionForHO_r9;
typedef enum NeighCellSI_AcquisitionParameters_r9__interFreqSI_AcquisitionForHO_r9 {
	NeighCellSI_AcquisitionParameters_r9__interFreqSI_AcquisitionForHO_r9_supported	= 0
} e_NeighCellSI_AcquisitionParameters_r9__interFreqSI_AcquisitionForHO_r9;
typedef enum NeighCellSI_AcquisitionParameters_r9__utran_SI_AcquisitionForHO_r9 {
	NeighCellSI_AcquisitionParameters_r9__utran_SI_AcquisitionForHO_r9_supported	= 0
} e_NeighCellSI_AcquisitionParameters_r9__utran_SI_AcquisitionForHO_r9;

/* NeighCellSI-AcquisitionParameters-r9 */
typedef struct NeighCellSI_AcquisitionParameters_r9 {
	long	*intraFreqSI_AcquisitionForHO_r9;	/* OPTIONAL */
	long	*interFreqSI_AcquisitionForHO_r9;	/* OPTIONAL */
	long	*utran_SI_AcquisitionForHO_r9;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeighCellSI_AcquisitionParameters_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_intraFreqSI_AcquisitionForHO_r9_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interFreqSI_AcquisitionForHO_r9_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_utran_SI_AcquisitionForHO_r9_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NeighCellSI_AcquisitionParameters_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_NeighCellSI_AcquisitionParameters_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_NeighCellSI_AcquisitionParameters_r9_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NeighCellSI_AcquisitionParameters_r9_H_ */
#include <asn_internal.h>
