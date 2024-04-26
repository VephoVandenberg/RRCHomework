/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasResultCellNR_r15_H_
#define	_MeasResultCellNR_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellIdNR-r15.h"
#include "MeasResultNR-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasResultSSB_IndexList_r15;
struct CGI_InfoNR_r15;

/* MeasResultCellNR-r15 */
typedef struct MeasResultCellNR_r15 {
	PhysCellIdNR_r15_t	 pci_r15;
	MeasResultNR_r15_t	 measResultCell_r15;
	struct MeasResultSSB_IndexList_r15	*measResultRS_IndexList_r15;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MeasResultCellNR_r15__ext1 {
		struct CGI_InfoNR_r15	*cgi_Info_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultCellNR_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultCellNR_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultCellNR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultCellNR_r15_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultCellNR_r15_H_ */
#include <asn_internal.h>
