/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#ifndef	_NavModel_KeplerianSet_H_
#define	_NavModel_KeplerianSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NavModel-KeplerianSet */
typedef struct NavModel_KeplerianSet {
	long	 keplerToeLSB;
	long	 keplerW;
	long	 keplerDeltaN;
	long	 keplerM0;
	long	 keplerOmegaDot;
	long	 keplerELSB;
	long	 keplerIDot;
	long	 keplerAPowerHalfLSB;
	long	 keplerI0;
	long	 keplerOmega0;
	long	 keplerCrs;
	long	 keplerCis;
	long	 keplerCus;
	long	 keplerCrc;
	long	 keplerCic;
	long	 keplerCuc;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NavModel_KeplerianSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NavModel_KeplerianSet;

#ifdef __cplusplus
}
#endif

#endif	/* _NavModel_KeplerianSet_H_ */
#include <asn_internal.h>
