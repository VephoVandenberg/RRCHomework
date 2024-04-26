/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_PRACH_Config_v1310_H_
#define	_PRACH_Config_v1310_H_


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
typedef enum PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13_PR {
	PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13_PR_NOTHING,	/* No components present */
	PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13_PR_fdd_r13,
	PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13_PR_tdd_r13
} PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13_PR;
typedef enum PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13 {
	PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13_v1	= 0,
	PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13_v1dot5	= 1,
	PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13_v2	= 2,
	PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13_v2dot5	= 3,
	PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13_v4	= 4,
	PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13_v5	= 5,
	PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13_v8	= 6,
	PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13_v10	= 7
} e_PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13;
typedef enum PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13 {
	PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13_v1	= 0,
	PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13_v2	= 1,
	PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13_v4	= 2,
	PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13_v5	= 3,
	PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13_v8	= 4,
	PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13_v10	= 5,
	PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13_v20	= 6,
	PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13_spare	= 7
} e_PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13;

/* Forward declarations */
struct RSRP_ThresholdsPrachInfoList_r13;
struct PRACH_ParametersListCE_r13;

/* PRACH-Config-v1310 */
typedef struct PRACH_Config_v1310 {
	struct RSRP_ThresholdsPrachInfoList_r13	*rsrp_ThresholdsPrachInfoList_r13;	/* OPTIONAL */
	struct PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13 {
		PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13_PR present;
		union PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13_u {
			long	 fdd_r13;
			long	 tdd_r13;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mpdcch_startSF_CSS_RA_r13;
	long	*prach_HoppingOffset_r13;	/* OPTIONAL */
	struct PRACH_ParametersListCE_r13	*prach_ParametersListCE_r13;	/* OPTIONAL */
	long	*initial_CE_level_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_Config_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_fdd_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_tdd_r13_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_Config_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_PRACH_Config_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_PRACH_Config_v1310_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _PRACH_Config_v1310_H_ */
#include <asn_internal.h>
