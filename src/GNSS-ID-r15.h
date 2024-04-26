/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_GNSS_ID_r15_H_
#define	_GNSS_ID_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GNSS_ID_r15__gnss_id_r15 {
	GNSS_ID_r15__gnss_id_r15_gps	= 0,
	GNSS_ID_r15__gnss_id_r15_sbas	= 1,
	GNSS_ID_r15__gnss_id_r15_qzss	= 2,
	GNSS_ID_r15__gnss_id_r15_galileo	= 3,
	GNSS_ID_r15__gnss_id_r15_glonass	= 4,
	GNSS_ID_r15__gnss_id_r15_bds	= 5
	/*
	 * Enumeration is extensible
	 */
} e_GNSS_ID_r15__gnss_id_r15;

/* GNSS-ID-r15 */
typedef struct GNSS_ID_r15 {
	long	 gnss_id_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GNSS_ID_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_gnss_id_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_ID_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_ID_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_ID_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _GNSS_ID_r15_H_ */
#include <asn_internal.h>
