/*
 *
 * Copyright 2019 AT&T Intellectual Property
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */


/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asnFiles/X2AP-PDU-Contents.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_E_RABs_Admitted_ToBeAdded_SgNBAddReqAck_Item_SgNBPDCPpresent_H_
#define	_E_RABs_Admitted_ToBeAdded_SgNBAddReqAck_Item_SgNBPDCPpresent_H_


#include "asn_application.h"

/* Including external dependencies */
#include "GTPtunnelEndpoint.h"
#include "RLCMode.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GTPtunnelEndpoint;
struct E_RAB_Level_QoS_Parameters;
struct ULConfiguration;
struct ProtocolExtensionContainer;

/* E-RABs-Admitted-ToBeAdded-SgNBAddReqAck-Item-SgNBPDCPpresent */
typedef struct E_RABs_Admitted_ToBeAdded_SgNBAddReqAck_Item_SgNBPDCPpresent {
	GTPtunnelEndpoint_t	 s1_DL_GTPtunnelEndpoint;
	struct GTPtunnelEndpoint	*sgNB_UL_GTP_TEIDatPDCP;	/* OPTIONAL */
	RLCMode_t	*rlc_Mode;	/* OPTIONAL */
	struct GTPtunnelEndpoint	*dL_Forwarding_GTPtunnelEndpoint;	/* OPTIONAL */
	struct GTPtunnelEndpoint	*uL_Forwarding_GTPtunnelEndpoint;	/* OPTIONAL */
	struct E_RAB_Level_QoS_Parameters	*mCG_E_RAB_Level_QoS_Parameters;	/* OPTIONAL */
	struct ULConfiguration	*uL_Configuration;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_RABs_Admitted_ToBeAdded_SgNBAddReqAck_Item_SgNBPDCPpresent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_RABs_Admitted_ToBeAdded_SgNBAddReqAck_Item_SgNBPDCPpresent;
extern asn_SEQUENCE_specifics_t asn_SPC_E_RABs_Admitted_ToBeAdded_SgNBAddReqAck_Item_SgNBPDCPpresent_specs_1;
extern asn_TYPE_member_t asn_MBR_E_RABs_Admitted_ToBeAdded_SgNBAddReqAck_Item_SgNBPDCPpresent_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _E_RABs_Admitted_ToBeAdded_SgNBAddReqAck_Item_SgNBPDCPpresent_H_ */
#include "asn_internal.h"
