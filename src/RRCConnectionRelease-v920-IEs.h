/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionRelease_v920_IEs_H_
#define	_RRCConnectionRelease_v920_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellInfoListGERAN-r9.h"
#include "CellInfoListUTRA-FDD-r9.h"
#include "CellInfoListUTRA-TDD-r9.h"
#include "CellInfoListUTRA-TDD-r10.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionRelease_v920_IEs__cellInfoList_r9_PR {
	RRCConnectionRelease_v920_IEs__cellInfoList_r9_PR_NOTHING,	/* No components present */
	RRCConnectionRelease_v920_IEs__cellInfoList_r9_PR_geran_r9,
	RRCConnectionRelease_v920_IEs__cellInfoList_r9_PR_utra_FDD_r9,
	RRCConnectionRelease_v920_IEs__cellInfoList_r9_PR_utra_TDD_r9,
	/* Extensions may appear below */
	RRCConnectionRelease_v920_IEs__cellInfoList_r9_PR_utra_TDD_r10
} RRCConnectionRelease_v920_IEs__cellInfoList_r9_PR;

/* Forward declarations */
struct RRCConnectionRelease_v1020_IEs;

/* RRCConnectionRelease-v920-IEs */
typedef struct RRCConnectionRelease_v920_IEs {
	struct RRCConnectionRelease_v920_IEs__cellInfoList_r9 {
		RRCConnectionRelease_v920_IEs__cellInfoList_r9_PR present;
		union RRCConnectionRelease_v920_IEs__cellInfoList_r9_u {
			CellInfoListGERAN_r9_t	 geran_r9;
			CellInfoListUTRA_FDD_r9_t	 utra_FDD_r9;
			CellInfoListUTRA_TDD_r9_t	 utra_TDD_r9;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			CellInfoListUTRA_TDD_r10_t	 utra_TDD_r10;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cellInfoList_r9;
	struct RRCConnectionRelease_v1020_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRelease_v920_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRelease_v920_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionRelease_v920_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionRelease_v920_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionRelease_v920_IEs_H_ */
#include <asn_internal.h>
