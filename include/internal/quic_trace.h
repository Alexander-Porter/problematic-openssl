/*
 * Copyright 2024 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef OSSL_QUIC_TRACE_H
# define OSSL_QUIC_TRACE_H

# ifndef OPENSSL_NO_QUIC

int ossl_quic_trace(int write_p, int version, int content_type,
                    const void *buf, size_t msglen, SSL *ssl, void *arg);

# endif

#endif