/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_FeatureSetUplinkPerCC_H_
#define	_RRC_FeatureSetUplinkPerCC_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_SubcarrierSpacing.h"
#include "RRC_SupportedBandwidth.h"
#include <NativeEnumerated.h>
#include "RRC_MIMO-LayersUL.h"
#include "RRC_ModulationOrder.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_FeatureSetUplinkPerCC__channelBW_90mhz {
	RRC_FeatureSetUplinkPerCC__channelBW_90mhz_supported	= 0
} e_RRC_FeatureSetUplinkPerCC__channelBW_90mhz;

/* RRC_FeatureSetUplinkPerCC */
typedef struct RRC_FeatureSetUplinkPerCC {
	RRC_SubcarrierSpacing_t	 supportedSubcarrierSpacingUL;
	RRC_SupportedBandwidth_t	 supportedBandwidthUL;
	long	*channelBW_90mhz;	/* OPTIONAL */
	struct RRC_FeatureSetUplinkPerCC__mimo_CB_PUSCH {
		RRC_MIMO_LayersUL_t	*maxNumberMIMO_LayersCB_PUSCH;	/* OPTIONAL */
		long	 maxNumberSRS_ResourcePerSet;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mimo_CB_PUSCH;
	RRC_MIMO_LayersUL_t	*maxNumberMIMO_LayersNonCB_PUSCH;	/* OPTIONAL */
	RRC_ModulationOrder_t	*supportedModulationOrderUL;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_FeatureSetUplinkPerCC_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_channelBW_90mhz_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_FeatureSetUplinkPerCC;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_FeatureSetUplinkPerCC_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_FeatureSetUplinkPerCC_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_FeatureSetUplinkPerCC_H_ */
#include <asn_internal.h>