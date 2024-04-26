/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRCConnectionRequest.asn1"
 * 	`asn1c -D src -pdu=auto -fcompound-names -no-gen-OER -no-gen-example -fno-include-deps`
 */

#include "MeasObjectGERAN.h"

#include "PhysCellIdGERAN.h"
static int
memb_ncc_Permitted_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 8UL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_ncc_Permitted_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static int asn_DFL_3_cmp_0(const void *sptr) {
	const Q_OffsetRangeInterRAT_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_3_set_0(void **sptr) {
	Q_OffsetRangeInterRAT_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
static int asn_DFL_4_cmp(const void *sptr) {
	static const uint8_t defv[] = { 0xFF };
	const BIT_STRING_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	if(st->size == (sizeof(defv))
	&& memcmp(st->buf, &defv, sizeof(defv)) == 0)
		return 0;
	return 1;
}
static int asn_DFL_4_set(void **sptr) {
	static const uint8_t defv[] = { 0xFF };
	BIT_STRING_t *st = *sptr;
	uint8_t *nstr = MALLOC(sizeof(defv));
	
	if(!nstr) return -1;
	memcpy(nstr, defv, sizeof(defv));
	
	if(st) {
		FREEMEM(st->buf);
	} else {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) { FREEMEM(nstr); return -1; }
	}
	st->buf = nstr;
	st->size = sizeof(defv);
	st->bits_unused = 0;
	
	return 0;
}
asn_TYPE_member_t asn_MBR_MeasObjectGERAN_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectGERAN, carrierFreqs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqsGERAN,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"carrierFreqs"
		},
	{ ATF_NOFLAGS, 3, offsetof(struct MeasObjectGERAN, offsetFreq),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_OffsetRangeInterRAT,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		&asn_DFL_3_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_3_set_0,	/* Set DEFAULT 0 */
		"offsetFreq"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectGERAN, ncc_Permitted),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_ncc_Permitted_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_ncc_Permitted_constraint_1
		},
		&asn_DFL_4_cmp,	/* Compare DEFAULT "�" */
		&asn_DFL_4_set,	/* Set DEFAULT "�" */
		"ncc-Permitted"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectGERAN, cellForWhichToReportCGI),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdGERAN,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"cellForWhichToReportCGI"
		},
};
static const int asn_MAP_MeasObjectGERAN_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_MeasObjectGERAN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasObjectGERAN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreqs */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* offsetFreq */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ncc-Permitted */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* cellForWhichToReportCGI */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasObjectGERAN_specs_1 = {
	sizeof(struct MeasObjectGERAN),
	offsetof(struct MeasObjectGERAN, _asn_ctx),
	asn_MAP_MeasObjectGERAN_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MeasObjectGERAN_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasObjectGERAN = {
	"MeasObjectGERAN",
	"MeasObjectGERAN",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasObjectGERAN_tags_1,
	sizeof(asn_DEF_MeasObjectGERAN_tags_1)
		/sizeof(asn_DEF_MeasObjectGERAN_tags_1[0]), /* 1 */
	asn_DEF_MeasObjectGERAN_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasObjectGERAN_tags_1)
		/sizeof(asn_DEF_MeasObjectGERAN_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MeasObjectGERAN_1,
	4,	/* Elements count */
	&asn_SPC_MeasObjectGERAN_specs_1	/* Additional specs */
};

