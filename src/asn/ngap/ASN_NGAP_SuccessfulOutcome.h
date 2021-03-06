/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Descriptions"
 * 	found in "asn/ngap-15.8.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_SuccessfulOutcome_H_
#define	_ASN_NGAP_SuccessfulOutcome_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_ProcedureCode.h"
#include "ASN_NGAP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "ASN_NGAP_AMFConfigurationUpdate.h"
#include "ASN_NGAP_AMFConfigurationUpdateAcknowledge.h"
#include "ASN_NGAP_AMFConfigurationUpdateFailure.h"
#include "ASN_NGAP_HandoverCancel.h"
#include "ASN_NGAP_HandoverCancelAcknowledge.h"
#include "ASN_NGAP_HandoverRequired.h"
#include "ASN_NGAP_HandoverCommand.h"
#include "ASN_NGAP_HandoverPreparationFailure.h"
#include "ASN_NGAP_HandoverRequest.h"
#include "ASN_NGAP_HandoverRequestAcknowledge.h"
#include "ASN_NGAP_HandoverFailure.h"
#include "ASN_NGAP_InitialContextSetupRequest.h"
#include "ASN_NGAP_InitialContextSetupResponse.h"
#include "ASN_NGAP_InitialContextSetupFailure.h"
#include "ASN_NGAP_NGReset.h"
#include "ASN_NGAP_NGResetAcknowledge.h"
#include "ASN_NGAP_NGSetupRequest.h"
#include "ASN_NGAP_NGSetupResponse.h"
#include "ASN_NGAP_NGSetupFailure.h"
#include "ASN_NGAP_PathSwitchRequest.h"
#include "ASN_NGAP_PathSwitchRequestAcknowledge.h"
#include "ASN_NGAP_PathSwitchRequestFailure.h"
#include "ASN_NGAP_PDUSessionResourceModifyRequest.h"
#include "ASN_NGAP_PDUSessionResourceModifyResponse.h"
#include "ASN_NGAP_PDUSessionResourceModifyIndication.h"
#include "ASN_NGAP_PDUSessionResourceModifyConfirm.h"
#include "ASN_NGAP_PDUSessionResourceReleaseCommand.h"
#include "ASN_NGAP_PDUSessionResourceReleaseResponse.h"
#include "ASN_NGAP_PDUSessionResourceSetupRequest.h"
#include "ASN_NGAP_PDUSessionResourceSetupResponse.h"
#include "ASN_NGAP_PWSCancelRequest.h"
#include "ASN_NGAP_PWSCancelResponse.h"
#include "ASN_NGAP_RANConfigurationUpdate.h"
#include "ASN_NGAP_RANConfigurationUpdateAcknowledge.h"
#include "ASN_NGAP_RANConfigurationUpdateFailure.h"
#include "ASN_NGAP_UEContextModificationRequest.h"
#include "ASN_NGAP_UEContextModificationResponse.h"
#include "ASN_NGAP_UEContextModificationFailure.h"
#include "ASN_NGAP_UEContextReleaseCommand.h"
#include "ASN_NGAP_UEContextReleaseComplete.h"
#include "ASN_NGAP_UERadioCapabilityCheckRequest.h"
#include "ASN_NGAP_UERadioCapabilityCheckResponse.h"
#include "ASN_NGAP_WriteReplaceWarningRequest.h"
#include "ASN_NGAP_WriteReplaceWarningResponse.h"
#include "ASN_NGAP_AMFStatusIndication.h"
#include "ASN_NGAP_CellTrafficTrace.h"
#include "ASN_NGAP_DeactivateTrace.h"
#include "ASN_NGAP_DownlinkNASTransport.h"
#include "ASN_NGAP_DownlinkNonUEAssociatedNRPPaTransport.h"
#include "ASN_NGAP_DownlinkRANConfigurationTransfer.h"
#include "ASN_NGAP_DownlinkRANStatusTransfer.h"
#include "ASN_NGAP_DownlinkUEAssociatedNRPPaTransport.h"
#include "ASN_NGAP_ErrorIndication.h"
#include "ASN_NGAP_HandoverNotify.h"
#include "ASN_NGAP_InitialUEMessage.h"
#include "ASN_NGAP_LocationReport.h"
#include "ASN_NGAP_LocationReportingControl.h"
#include "ASN_NGAP_LocationReportingFailureIndication.h"
#include "ASN_NGAP_NASNonDeliveryIndication.h"
#include "ASN_NGAP_OverloadStart.h"
#include "ASN_NGAP_OverloadStop.h"
#include "ASN_NGAP_Paging.h"
#include "ASN_NGAP_PDUSessionResourceNotify.h"
#include "ASN_NGAP_PrivateMessage.h"
#include "ASN_NGAP_PWSFailureIndication.h"
#include "ASN_NGAP_PWSRestartIndication.h"
#include "ASN_NGAP_RerouteNASRequest.h"
#include "ASN_NGAP_RRCInactiveTransitionReport.h"
#include "ASN_NGAP_SecondaryRATDataUsageReport.h"
#include "ASN_NGAP_TraceFailureIndication.h"
#include "ASN_NGAP_TraceStart.h"
#include "ASN_NGAP_UEContextReleaseRequest.h"
#include "ASN_NGAP_UERadioCapabilityInfoIndication.h"
#include "ASN_NGAP_UETNLABindingReleaseRequest.h"
#include "ASN_NGAP_UplinkNASTransport.h"
#include "ASN_NGAP_UplinkNonUEAssociatedNRPPaTransport.h"
#include "ASN_NGAP_UplinkRANConfigurationTransfer.h"
#include "ASN_NGAP_UplinkRANStatusTransfer.h"
#include "ASN_NGAP_UplinkUEAssociatedNRPPaTransport.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_NGAP_SuccessfulOutcome__value_PR {
	ASN_NGAP_SuccessfulOutcome__value_PR_NOTHING,	/* No components present */
	ASN_NGAP_SuccessfulOutcome__value_PR_AMFConfigurationUpdateAcknowledge,
	ASN_NGAP_SuccessfulOutcome__value_PR_HandoverCancelAcknowledge,
	ASN_NGAP_SuccessfulOutcome__value_PR_HandoverCommand,
	ASN_NGAP_SuccessfulOutcome__value_PR_HandoverRequestAcknowledge,
	ASN_NGAP_SuccessfulOutcome__value_PR_InitialContextSetupResponse,
	ASN_NGAP_SuccessfulOutcome__value_PR_NGResetAcknowledge,
	ASN_NGAP_SuccessfulOutcome__value_PR_NGSetupResponse,
	ASN_NGAP_SuccessfulOutcome__value_PR_PathSwitchRequestAcknowledge,
	ASN_NGAP_SuccessfulOutcome__value_PR_PDUSessionResourceModifyResponse,
	ASN_NGAP_SuccessfulOutcome__value_PR_PDUSessionResourceModifyConfirm,
	ASN_NGAP_SuccessfulOutcome__value_PR_PDUSessionResourceReleaseResponse,
	ASN_NGAP_SuccessfulOutcome__value_PR_PDUSessionResourceSetupResponse,
	ASN_NGAP_SuccessfulOutcome__value_PR_PWSCancelResponse,
	ASN_NGAP_SuccessfulOutcome__value_PR_RANConfigurationUpdateAcknowledge,
	ASN_NGAP_SuccessfulOutcome__value_PR_UEContextModificationResponse,
	ASN_NGAP_SuccessfulOutcome__value_PR_UEContextReleaseComplete,
	ASN_NGAP_SuccessfulOutcome__value_PR_UERadioCapabilityCheckResponse,
	ASN_NGAP_SuccessfulOutcome__value_PR_WriteReplaceWarningResponse
} ASN_NGAP_SuccessfulOutcome__value_PR;

/* ASN_NGAP_SuccessfulOutcome */
typedef struct ASN_NGAP_SuccessfulOutcome {
	ASN_NGAP_ProcedureCode_t	 procedureCode;
	ASN_NGAP_Criticality_t	 criticality;
	struct ASN_NGAP_SuccessfulOutcome__value {
		ASN_NGAP_SuccessfulOutcome__value_PR present;
		union ASN_NGAP_SuccessfulOutcome__ASN_NGAP_value_u {
			ASN_NGAP_AMFConfigurationUpdateAcknowledge_t	 AMFConfigurationUpdateAcknowledge;
			ASN_NGAP_HandoverCancelAcknowledge_t	 HandoverCancelAcknowledge;
			ASN_NGAP_HandoverCommand_t	 HandoverCommand;
			ASN_NGAP_HandoverRequestAcknowledge_t	 HandoverRequestAcknowledge;
			ASN_NGAP_InitialContextSetupResponse_t	 InitialContextSetupResponse;
			ASN_NGAP_NGResetAcknowledge_t	 NGResetAcknowledge;
			ASN_NGAP_NGSetupResponse_t	 NGSetupResponse;
			ASN_NGAP_PathSwitchRequestAcknowledge_t	 PathSwitchRequestAcknowledge;
			ASN_NGAP_PDUSessionResourceModifyResponse_t	 PDUSessionResourceModifyResponse;
			ASN_NGAP_PDUSessionResourceModifyConfirm_t	 PDUSessionResourceModifyConfirm;
			ASN_NGAP_PDUSessionResourceReleaseResponse_t	 PDUSessionResourceReleaseResponse;
			ASN_NGAP_PDUSessionResourceSetupResponse_t	 PDUSessionResourceSetupResponse;
			ASN_NGAP_PWSCancelResponse_t	 PWSCancelResponse;
			ASN_NGAP_RANConfigurationUpdateAcknowledge_t	 RANConfigurationUpdateAcknowledge;
			ASN_NGAP_UEContextModificationResponse_t	 UEContextModificationResponse;
			ASN_NGAP_UEContextReleaseComplete_t	 UEContextReleaseComplete;
			ASN_NGAP_UERadioCapabilityCheckResponse_t	 UERadioCapabilityCheckResponse;
			ASN_NGAP_WriteReplaceWarningResponse_t	 WriteReplaceWarningResponse;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_SuccessfulOutcome_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_SuccessfulOutcome;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_SuccessfulOutcome_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_SuccessfulOutcome_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_SuccessfulOutcome_H_ */
#include <asn_internal.h>
