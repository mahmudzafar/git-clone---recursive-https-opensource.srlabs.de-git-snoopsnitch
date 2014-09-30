/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_ReportingIntervalLong_H_
#define	_ReportingIntervalLong_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReportingIntervalLong {
	ReportingIntervalLong_ril0	= 0,
	ReportingIntervalLong_ril0_25	= 1,
	ReportingIntervalLong_ril0_5	= 2,
	ReportingIntervalLong_ril1	= 3,
	ReportingIntervalLong_ril2	= 4,
	ReportingIntervalLong_ril3	= 5,
	ReportingIntervalLong_ril4	= 6,
	ReportingIntervalLong_ril6	= 7,
	ReportingIntervalLong_ril8	= 8,
	ReportingIntervalLong_ril12	= 9,
	ReportingIntervalLong_ril16	= 10,
	ReportingIntervalLong_ril20	= 11,
	ReportingIntervalLong_ril24	= 12,
	ReportingIntervalLong_ril28	= 13,
	ReportingIntervalLong_ril32	= 14,
	ReportingIntervalLong_ril64	= 15
} e_ReportingIntervalLong;

/* ReportingIntervalLong */
typedef long	 ReportingIntervalLong_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReportingIntervalLong;
asn_struct_free_f ReportingIntervalLong_free;
asn_struct_print_f ReportingIntervalLong_print;
asn_constr_check_f ReportingIntervalLong_constraint;
ber_type_decoder_f ReportingIntervalLong_decode_ber;
der_type_encoder_f ReportingIntervalLong_encode_der;
xer_type_decoder_f ReportingIntervalLong_decode_xer;
xer_type_encoder_f ReportingIntervalLong_encode_xer;
per_type_decoder_f ReportingIntervalLong_decode_uper;
per_type_encoder_f ReportingIntervalLong_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ReportingIntervalLong_H_ */
#include <asn_internal.h>