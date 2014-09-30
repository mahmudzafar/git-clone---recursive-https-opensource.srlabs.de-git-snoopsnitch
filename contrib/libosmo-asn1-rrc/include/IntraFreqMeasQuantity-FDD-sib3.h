/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_IntraFreqMeasQuantity_FDD_sib3_H_
#define	_IntraFreqMeasQuantity_FDD_sib3_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IntraFreqMeasQuantity_FDD_sib3 {
	IntraFreqMeasQuantity_FDD_sib3_cpich_Ec_N0	= 0,
	IntraFreqMeasQuantity_FDD_sib3_cpich_RSCP	= 1
} e_IntraFreqMeasQuantity_FDD_sib3;

/* IntraFreqMeasQuantity-FDD-sib3 */
typedef long	 IntraFreqMeasQuantity_FDD_sib3_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqMeasQuantity_FDD_sib3;
asn_struct_free_f IntraFreqMeasQuantity_FDD_sib3_free;
asn_struct_print_f IntraFreqMeasQuantity_FDD_sib3_print;
asn_constr_check_f IntraFreqMeasQuantity_FDD_sib3_constraint;
ber_type_decoder_f IntraFreqMeasQuantity_FDD_sib3_decode_ber;
der_type_encoder_f IntraFreqMeasQuantity_FDD_sib3_encode_der;
xer_type_decoder_f IntraFreqMeasQuantity_FDD_sib3_decode_xer;
xer_type_encoder_f IntraFreqMeasQuantity_FDD_sib3_encode_xer;
per_type_decoder_f IntraFreqMeasQuantity_FDD_sib3_decode_uper;
per_type_encoder_f IntraFreqMeasQuantity_FDD_sib3_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _IntraFreqMeasQuantity_FDD_sib3_H_ */
#include <asn_internal.h>