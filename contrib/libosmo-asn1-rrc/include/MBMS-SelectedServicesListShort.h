/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MBMS_SelectedServicesListShort_H_
#define	_MBMS_SelectedServicesListShort_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MBMS-ShortTransmissionID.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MBMS-SelectedServicesListShort */
typedef struct MBMS_SelectedServicesListShort {
	A_SEQUENCE_OF(MBMS_ShortTransmissionID_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_SelectedServicesListShort_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_SelectedServicesListShort;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_SelectedServicesListShort_H_ */
#include <asn_internal.h>
