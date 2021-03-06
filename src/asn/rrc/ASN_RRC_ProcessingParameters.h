/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_ProcessingParameters_H_
#define	_ASN_RRC_ProcessingParameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "ASN_RRC_NumberOfCarriers.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_ProcessingParameters__fallback {
	ASN_RRC_ProcessingParameters__fallback_sc	= 0,
	ASN_RRC_ProcessingParameters__fallback_cap1_only	= 1
} e_ASN_RRC_ProcessingParameters__fallback;

/* ASN_RRC_ProcessingParameters */
typedef struct ASN_RRC_ProcessingParameters {
	long	 fallback;
	struct ASN_RRC_ProcessingParameters__differentTB_PerSlot {
		ASN_RRC_NumberOfCarriers_t	*upto1;	/* OPTIONAL */
		ASN_RRC_NumberOfCarriers_t	*upto2;	/* OPTIONAL */
		ASN_RRC_NumberOfCarriers_t	*upto4;	/* OPTIONAL */
		ASN_RRC_NumberOfCarriers_t	*upto7;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *differentTB_PerSlot;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_ProcessingParameters_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_fallback_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_ProcessingParameters;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_ProcessingParameters_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_ProcessingParameters_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_ProcessingParameters_H_ */
#include <asn_internal.h>
