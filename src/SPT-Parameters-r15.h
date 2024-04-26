/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_SPT_Parameters_r15_H_
#define	_SPT_Parameters_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SPT-Parameters-r15 */
typedef struct SPT_Parameters_r15 {
	BIT_STRING_t	*frameStructureType_SPT_r15;	/* OPTIONAL */
	long	*maxNumberCCs_SPT_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SPT_Parameters_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SPT_Parameters_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_SPT_Parameters_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SPT_Parameters_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SPT_Parameters_r15_H_ */
#include <asn_internal.h>
