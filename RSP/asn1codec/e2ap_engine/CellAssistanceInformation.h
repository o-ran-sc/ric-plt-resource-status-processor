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

#ifndef	_CellAssistanceInformation_H_
#define	_CellAssistanceInformation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellAssistanceInformation_PR {
	CellAssistanceInformation_PR_NOTHING,	/* No components present */
	CellAssistanceInformation_PR_limited_list,
	CellAssistanceInformation_PR_full_list
	/* Extensions may appear below */
	
} CellAssistanceInformation_PR;
typedef enum CellAssistanceInformation__full_list {
	CellAssistanceInformation__full_list_allServedNRcells	= 0
	/*
	 * Enumeration is extensible
	 */
} e_CellAssistanceInformation__full_list;

/* Forward declarations */
struct Limited_list;

/* CellAssistanceInformation */
typedef struct CellAssistanceInformation {
	CellAssistanceInformation_PR present;
	union CellAssistanceInformation_u {
		struct Limited_list	*limited_list;
		long	 full_list;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellAssistanceInformation_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_full_list_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CellAssistanceInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _CellAssistanceInformation_H_ */
#include "asn_internal.h"
