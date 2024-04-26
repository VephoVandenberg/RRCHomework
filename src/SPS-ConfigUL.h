/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#ifndef	_SPS_ConfigUL_H_
#define	_SPS_ConfigUL_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include "SPS-ConfigIndex-r14.h"
#include "SPS-ConfigIndex-r15.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SPS_ConfigUL_PR {
	SPS_ConfigUL_PR_NOTHING,	/* No components present */
	SPS_ConfigUL_PR_release,
	SPS_ConfigUL_PR_setup
} SPS_ConfigUL_PR;
typedef enum SPS_ConfigUL__setup__semiPersistSchedIntervalUL {
	SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf10	= 0,
	SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf20	= 1,
	SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf32	= 2,
	SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf40	= 3,
	SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf64	= 4,
	SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf80	= 5,
	SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf128	= 6,
	SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf160	= 7,
	SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf320	= 8,
	SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf640	= 9,
	SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf1_v1430	= 10,
	SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf2_v1430	= 11,
	SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf3_v1430	= 12,
	SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf4_v1430	= 13,
	SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf5_v1430	= 14,
	SPS_ConfigUL__setup__semiPersistSchedIntervalUL_spare1	= 15
} e_SPS_ConfigUL__setup__semiPersistSchedIntervalUL;
typedef enum SPS_ConfigUL__setup__implicitReleaseAfter {
	SPS_ConfigUL__setup__implicitReleaseAfter_e2	= 0,
	SPS_ConfigUL__setup__implicitReleaseAfter_e3	= 1,
	SPS_ConfigUL__setup__implicitReleaseAfter_e4	= 2,
	SPS_ConfigUL__setup__implicitReleaseAfter_e8	= 3
} e_SPS_ConfigUL__setup__implicitReleaseAfter;
typedef enum SPS_ConfigUL__setup__twoIntervalsConfig {
	SPS_ConfigUL__setup__twoIntervalsConfig_true	= 0
} e_SPS_ConfigUL__setup__twoIntervalsConfig;
typedef enum SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12_PR {
	SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12_PR_NOTHING,	/* No components present */
	SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12_PR_release,
	SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12_PR_setup
} SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12_PR;
typedef enum SPS_ConfigUL__setup__ext3__fixedRV_NonAdaptive_r14 {
	SPS_ConfigUL__setup__ext3__fixedRV_NonAdaptive_r14_true	= 0
} e_SPS_ConfigUL__setup__ext3__fixedRV_NonAdaptive_r14;
typedef enum SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430 {
	SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf50	= 0,
	SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf100	= 1,
	SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf200	= 2,
	SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf300	= 3,
	SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf400	= 4,
	SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf500	= 5,
	SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf600	= 6,
	SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf700	= 7,
	SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf800	= 8,
	SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf900	= 9,
	SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf1000	= 10,
	SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_spare5	= 11,
	SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_spare4	= 12,
	SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_spare3	= 13,
	SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_spare2	= 14,
	SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_spare1	= 15
} e_SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430;
typedef enum SPS_ConfigUL__setup__ext4__cyclicShiftSPS_r15 {
	SPS_ConfigUL__setup__ext4__cyclicShiftSPS_r15_cs0	= 0,
	SPS_ConfigUL__setup__ext4__cyclicShiftSPS_r15_cs1	= 1,
	SPS_ConfigUL__setup__ext4__cyclicShiftSPS_r15_cs2	= 2,
	SPS_ConfigUL__setup__ext4__cyclicShiftSPS_r15_cs3	= 3,
	SPS_ConfigUL__setup__ext4__cyclicShiftSPS_r15_cs4	= 4,
	SPS_ConfigUL__setup__ext4__cyclicShiftSPS_r15_cs5	= 5,
	SPS_ConfigUL__setup__ext4__cyclicShiftSPS_r15_cs6	= 6,
	SPS_ConfigUL__setup__ext4__cyclicShiftSPS_r15_cs7	= 7
} e_SPS_ConfigUL__setup__ext4__cyclicShiftSPS_r15;
typedef enum SPS_ConfigUL__setup__ext4__rv_SPS_UL_Repetitions_r15 {
	SPS_ConfigUL__setup__ext4__rv_SPS_UL_Repetitions_r15_ulrvseq1	= 0,
	SPS_ConfigUL__setup__ext4__rv_SPS_UL_Repetitions_r15_ulrvseq2	= 1,
	SPS_ConfigUL__setup__ext4__rv_SPS_UL_Repetitions_r15_ulrvseq3	= 2
} e_SPS_ConfigUL__setup__ext4__rv_SPS_UL_Repetitions_r15;
typedef enum SPS_ConfigUL__setup__ext4__totalNumberPUSCH_SPS_UL_Repetitions_r15 {
	SPS_ConfigUL__setup__ext4__totalNumberPUSCH_SPS_UL_Repetitions_r15_n2	= 0,
	SPS_ConfigUL__setup__ext4__totalNumberPUSCH_SPS_UL_Repetitions_r15_n3	= 1,
	SPS_ConfigUL__setup__ext4__totalNumberPUSCH_SPS_UL_Repetitions_r15_n4	= 2,
	SPS_ConfigUL__setup__ext4__totalNumberPUSCH_SPS_UL_Repetitions_r15_n6	= 3
} e_SPS_ConfigUL__setup__ext4__totalNumberPUSCH_SPS_UL_Repetitions_r15;

/* Forward declarations */
struct TPC_PDCCH_Config;

/* SPS-ConfigUL */
typedef struct SPS_ConfigUL {
	SPS_ConfigUL_PR present;
	union SPS_ConfigUL_u {
		NULL_t	 release;
		struct SPS_ConfigUL__setup {
			long	 semiPersistSchedIntervalUL;
			long	 implicitReleaseAfter;
			struct SPS_ConfigUL__setup__p0_Persistent {
				long	 p0_NominalPUSCH_Persistent;
				long	 p0_UE_PUSCH_Persistent;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *p0_Persistent;
			long	*twoIntervalsConfig;	/* OPTIONAL */
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			struct SPS_ConfigUL__setup__ext1 {
				struct SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12 {
					SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12_PR present;
					union SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12_u {
						NULL_t	 release;
						struct SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12__setup {
							long	 p0_NominalPUSCH_PersistentSubframeSet2_r12;
							long	 p0_UE_PUSCH_PersistentSubframeSet2_r12;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} setup;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *p0_PersistentSubframeSet2_r12;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *ext1;
			struct SPS_ConfigUL__setup__ext2 {
				long	*numberOfConfUlSPS_Processes_r13;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *ext2;
			struct SPS_ConfigUL__setup__ext3 {
				long	*fixedRV_NonAdaptive_r14;	/* OPTIONAL */
				SPS_ConfigIndex_r14_t	*sps_ConfigIndex_r14;	/* OPTIONAL */
				long	*semiPersistSchedIntervalUL_v1430;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *ext3;
			struct SPS_ConfigUL__setup__ext4 {
				long	*cyclicShiftSPS_r15;	/* OPTIONAL */
				long	*harq_ProcID_Offset_r15;	/* OPTIONAL */
				long	*rv_SPS_UL_Repetitions_r15;	/* OPTIONAL */
				struct TPC_PDCCH_Config	*tpc_PDCCH_ConfigPUSCH_SPS_r15;	/* OPTIONAL */
				long	*totalNumberPUSCH_SPS_UL_Repetitions_r15;	/* OPTIONAL */
				SPS_ConfigIndex_r15_t	*sps_ConfigIndex_r15;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *ext4;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SPS_ConfigUL_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_semiPersistSchedIntervalUL_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_implicitReleaseAfter_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_twoIntervalsConfig_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_fixedRV_NonAdaptive_r14_41;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_semiPersistSchedIntervalUL_v1430_44;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cyclicShiftSPS_r15_62;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rv_SPS_UL_Repetitions_r15_72;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_totalNumberPUSCH_SPS_UL_Repetitions_r15_77;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SPS_ConfigUL;
extern asn_CHOICE_specifics_t asn_SPC_SPS_ConfigUL_specs_1;
extern asn_TYPE_member_t asn_MBR_SPS_ConfigUL_1[2];
extern asn_per_constraints_t asn_PER_type_SPS_ConfigUL_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SPS_ConfigUL_H_ */
#include <asn_internal.h>
