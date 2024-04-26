/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_GapPattern_r13_H_
#define	_SL_GapPattern_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "SL-OffsetIndicator-r12.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_GapPattern_r13__gapPeriod_r13 {
	SL_GapPattern_r13__gapPeriod_r13_sf40	= 0,
	SL_GapPattern_r13__gapPeriod_r13_sf60	= 1,
	SL_GapPattern_r13__gapPeriod_r13_sf70	= 2,
	SL_GapPattern_r13__gapPeriod_r13_sf80	= 3,
	SL_GapPattern_r13__gapPeriod_r13_sf120	= 4,
	SL_GapPattern_r13__gapPeriod_r13_sf140	= 5,
	SL_GapPattern_r13__gapPeriod_r13_sf160	= 6,
	SL_GapPattern_r13__gapPeriod_r13_sf240	= 7,
	SL_GapPattern_r13__gapPeriod_r13_sf280	= 8,
	SL_GapPattern_r13__gapPeriod_r13_sf320	= 9,
	SL_GapPattern_r13__gapPeriod_r13_sf640	= 10,
	SL_GapPattern_r13__gapPeriod_r13_sf1280	= 11,
	SL_GapPattern_r13__gapPeriod_r13_sf2560	= 12,
	SL_GapPattern_r13__gapPeriod_r13_sf5120	= 13,
	SL_GapPattern_r13__gapPeriod_r13_sf10240	= 14
} e_SL_GapPattern_r13__gapPeriod_r13;

/* SL-GapPattern-r13 */
typedef struct SL_GapPattern_r13 {
	long	 gapPeriod_r13;
	SL_OffsetIndicator_r12_t	 gapOffset_r12;
	BIT_STRING_t	 gapSubframeBitmap_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_GapPattern_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_gapPeriod_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_GapPattern_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_GapPattern_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_GapPattern_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_GapPattern_r13_H_ */
#include <asn_internal.h>
