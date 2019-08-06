#ifndef __OQS_KEM_ROUND5_H
#define __OQS_KEM_ROUND5_H

#include <oqs/oqs.h>

#ifdef OQS_ENABLE_KEM_round5_r5n1_1kem_0d
#define OQS_KEM_round5_r5n1_1kem_0d_length_public_key 5214
#define OQS_KEM_round5_r5n1_1kem_0d_length_secret_key 16
#define OQS_KEM_round5_r5n1_1kem_0d_length_ciphertext 5236
#define OQS_KEM_round5_r5n1_1kem_0d_length_shared_secret 16
OQS_KEM *OQS_KEM_round5_r5n1_1kem_0d_new();
OQS_API OQS_STATUS OQS_KEM_round5_r5n1_1kem_0d_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_KEM_round5_r5n1_1kem_0d_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_KEM_round5_r5n1_1kem_0d_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);
#endif

#endif
