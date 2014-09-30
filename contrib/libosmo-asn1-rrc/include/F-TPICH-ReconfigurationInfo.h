/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_F_TPICH_ReconfigurationInfo_H_
#define	_F_TPICH_ReconfigurationInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct F_TPICH_InfoNewServingCell;
struct F_TPICH_InfoOtherCell;

/* F-TPICH-ReconfigurationInfo */
typedef struct F_TPICH_ReconfigurationInfo {
	struct F_TPICH_InfoNewServingCell	*f_tpich_InfoNewServingCell	/* OPTIONAL */;
	struct F_TPICH_ReconfigurationInfo__f_tpich_InfoOtherCellList {
		A_SEQUENCE_OF(struct F_TPICH_InfoOtherCell) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *f_tpich_InfoOtherCellList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F_TPICH_ReconfigurationInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F_TPICH_ReconfigurationInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "F-TPICH-InfoNewServingCell.h"
#include "F-TPICH-InfoOtherCell.h"

#endif	/* _F_TPICH_ReconfigurationInfo_H_ */
#include <asn_internal.h>