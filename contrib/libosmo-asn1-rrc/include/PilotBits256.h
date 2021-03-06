/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_PilotBits256_H_
#define	_PilotBits256_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PilotBits256 {
	PilotBits256_pb2	= 0,
	PilotBits256_pb4	= 1,
	PilotBits256_pb8	= 2
} e_PilotBits256;

/* PilotBits256 */
typedef long	 PilotBits256_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PilotBits256;
asn_struct_free_f PilotBits256_free;
asn_struct_print_f PilotBits256_print;
asn_constr_check_f PilotBits256_constraint;
ber_type_decoder_f PilotBits256_decode_ber;
der_type_encoder_f PilotBits256_encode_der;
xer_type_decoder_f PilotBits256_decode_xer;
xer_type_encoder_f PilotBits256_encode_xer;
per_type_decoder_f PilotBits256_decode_uper;
per_type_encoder_f PilotBits256_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PilotBits256_H_ */
#include <asn_internal.h>
