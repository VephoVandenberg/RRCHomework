/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType16_r11_H_
#define	_SystemInformationBlockType16_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <INTEGER.h>
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TimeReferenceInfo_r15;

/* SystemInformationBlockType16-r11 */
typedef struct SystemInformationBlockType16_r11 {
	struct SystemInformationBlockType16_r11__timeInfo_r11 {
		INTEGER_t	 timeInfoUTC_r11;
		BIT_STRING_t	*dayLightSavingTime_r11;	/* OPTIONAL */
		long	*leapSeconds_r11;	/* OPTIONAL */
		long	*localTimeOffset_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *timeInfo_r11;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SystemInformationBlockType16_r11__ext1 {
		struct TimeReferenceInfo_r15	*timeReferenceInfo_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType16_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType16_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType16_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType16_r11_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType16_r11_H_ */
#include <asn_internal.h>
