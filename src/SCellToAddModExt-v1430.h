/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_SCellToAddModExt_v1430_H_
#define	_SCellToAddModExt_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SCellToAddModExt_v1430__ext1__sCellState_r15 {
	SCellToAddModExt_v1430__ext1__sCellState_r15_activated	= 0,
	SCellToAddModExt_v1430__ext1__sCellState_r15_dormant	= 1
} e_SCellToAddModExt_v1430__ext1__sCellState_r15;

/* SCellToAddModExt-v1430 */
typedef struct SCellToAddModExt_v1430 {
	long	*srs_SwitchFromServCellIndex_r14;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SCellToAddModExt_v1430__ext1 {
		long	*sCellState_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCellToAddModExt_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sCellState_r15_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SCellToAddModExt_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_SCellToAddModExt_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_SCellToAddModExt_v1430_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SCellToAddModExt_v1430_H_ */
#include <asn_internal.h>
