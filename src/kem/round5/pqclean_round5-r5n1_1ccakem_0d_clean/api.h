/*
 * Copyright (c) 2019, Koninklijke Philips N.V.
 */

/**
 * @file
 * Declaration of the NIST API functions and setting of the NIST API
 * algorithm parameters: `CRYPTO_SECRETKEYBYTES`, `CRYPTO_PUBLICKEYBYTES`,
 * `CRYPTO_BYTES`, and `CRYPTO_CIPHERBYTES`.
 */

#ifndef PQCLEAN_ROUND5R5N1_1CCAKEM_0D_CLEAN_API_H
#define PQCLEAN_ROUND5R5N1_1CCAKEM_0D_CLEAN_API_H

#define PQCLEAN_ROUND5R5N1_1CCAKEM_0D_CLEAN_CRYPTO_ALGNAME "R5N1_1PKE_0d"
#define PQCLEAN_ROUND5R5N1_1CCAKEM_0D_CLEAN_CRYPTO_SECRETKEYBYTES 5772
#define PQCLEAN_ROUND5R5N1_1CCAKEM_0D_CLEAN_CRYPTO_PUBLICKEYBYTES 5740
#define PQCLEAN_ROUND5R5N1_1CCAKEM_0D_CLEAN_CRYPTO_BYTES 16
#define PQCLEAN_ROUND5R5N1_1CCAKEM_0D_CLEAN_CRYPTO_CIPHERTEXTBYTES 5788

int PQCLEAN_ROUND5R5N1_1CCAKEM_0D_CLEAN_crypto_kem_keypair(unsigned char *pk, unsigned char *sk);
int PQCLEAN_ROUND5R5N1_1CCAKEM_0D_CLEAN_crypto_kem_enc(unsigned char *ct, unsigned char *key, const unsigned char *pk);
int PQCLEAN_ROUND5R5N1_1CCAKEM_0D_CLEAN_crypto_kem_dec(unsigned char *key, unsigned char *ct, const unsigned char *sk);

#endif /* _API_H_ */