/* Automatically generated by generate_ssl_debug_helpers.py. DO NOT EDIT. */
#ifndef MBEDTLS_SSL_DEBUG_HELPERS_H
#define MBEDTLS_SSL_DEBUG_HELPERS_H

#include "common.h"

#if defined(MBEDTLS_DEBUG_C)

#include "mbedtls/ssl.h"
#include "ssl_misc.h"


const char *mbedtls_ssl_states_str( mbedtls_ssl_states in );

const char *mbedtls_tls_prf_types_str( mbedtls_tls_prf_types in );

const char *mbedtls_ssl_key_export_type_str( mbedtls_ssl_key_export_type in );



#endif /* MBEDTLS_DEBUG_C */

#endif /* SSL_DEBUG_HELPERS_H */

/* End of automatically generated file. */

