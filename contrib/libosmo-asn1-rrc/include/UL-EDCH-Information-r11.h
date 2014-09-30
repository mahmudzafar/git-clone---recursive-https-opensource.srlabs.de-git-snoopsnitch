/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UL_EDCH_Information_r11_H_
#define	_UL_EDCH_Information_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_EDCH_Information_r11__mac_es_e_resetIndicator {
	UL_EDCH_Information_r11__mac_es_e_resetIndicator_true	= 0
} e_UL_EDCH_Information_r11__mac_es_e_resetIndicator;
typedef enum UL_EDCH_Information_r11__modeSpecificInfo_PR {
	UL_EDCH_Information_r11__modeSpecificInfo_PR_NOTHING,	/* No components present */
	UL_EDCH_Information_r11__modeSpecificInfo_PR_fdd,
	UL_EDCH_Information_r11__modeSpecificInfo_PR_tdd
} UL_EDCH_Information_r11__modeSpecificInfo_PR;

/* Forward declarations */
struct E_DPCCH_Info_r7;
struct E_DPDCH_Info_r8;
struct UL_MIMO_InfoFDD;
struct E_DPDCH_SchedulingTransmConfiguration;
struct UL_16QAM_Settings;
struct UL_64QAM_Settings;
struct E_RUCCH_Info;
struct E_PUCH_Info;
struct Non_ScheduledTransGrantInfoTDD_r9;

/* UL-EDCH-Information-r11 */
typedef struct UL_EDCH_Information_r11 {
	long	*mac_es_e_resetIndicator	/* OPTIONAL */;
	struct UL_EDCH_Information_r11__modeSpecificInfo {
		UL_EDCH_Information_r11__modeSpecificInfo_PR present;
		union UL_EDCH_Information_r11__modeSpecificInfo_u {
			struct UL_EDCH_Information_r11__modeSpecificInfo__fdd {
				struct E_DPCCH_Info_r7	*e_DPCCH_Info	/* OPTIONAL */;
				struct E_DPDCH_Info_r8	*e_DPDCH_Info	/* OPTIONAL */;
				struct UL_MIMO_InfoFDD	*ul_MIMO_Info	/* OPTIONAL */;
				struct E_DPDCH_SchedulingTransmConfiguration	*schedulingTransmConfiguration	/* OPTIONAL */;
				struct UL_16QAM_Settings	*ul_16QAM_Settings	/* OPTIONAL */;
				struct UL_64QAM_Settings	*ul_64QAM_Settings	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct UL_EDCH_Information_r11__modeSpecificInfo__tdd {
				struct E_RUCCH_Info	*e_RUCCH_Info	/* OPTIONAL */;
				struct E_PUCH_Info	*e_PUCH_Info	/* OPTIONAL */;
				struct Non_ScheduledTransGrantInfoTDD_r9	*non_ScheduledTransGrantInfo	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_EDCH_Information_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mac_es_e_resetIndicator_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UL_EDCH_Information_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "E-DPCCH-Info-r7.h"
#include "E-DPDCH-Info-r8.h"
#include "UL-MIMO-InfoFDD.h"
#include "E-DPDCH-SchedulingTransmConfiguration.h"
#include "UL-16QAM-Settings.h"
#include "UL-64QAM-Settings.h"
#include "E-RUCCH-Info.h"
#include "E-PUCH-Info.h"
#include "Non-ScheduledTransGrantInfoTDD-r9.h"

#endif	/* _UL_EDCH_Information_r11_H_ */
#include <asn_internal.h>