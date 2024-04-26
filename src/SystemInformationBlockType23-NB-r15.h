/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType23_NB_r15_H_
#define	_SystemInformationBlockType23_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UL_ConfigCommonList_NB_v1530;

/* SystemInformationBlockType23-NB-r15 */
typedef struct SystemInformationBlockType23_NB_r15 {
	struct UL_ConfigCommonList_NB_v1530	*ul_ConfigList_v1530;	/* OPTIONAL */
	struct UL_ConfigCommonList_NB_v1530	*ul_ConfigListMixed_v1530;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType23_NB_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType23_NB_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType23_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType23_NB_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType23_NB_r15_H_ */
#include <asn_internal.h>
