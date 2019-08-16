#include <stdint.h>
#include <stdlib.h>
#include "api.h"
#include "cpa_kem.h"
#include "r5_cca_kem.h"

int PQCLEAN_ROUND5R5ND_5CCAKEM_5D_CLEAN_crypto_kem_keypair(unsigned char *pk, unsigned char *sk) {
    PQCLEAN_ROUND5R5ND_5CCAKEM_5D_CLEAN_r5_cca_kem_keygen(pk, sk);
    return 0;
}

int PQCLEAN_ROUND5R5ND_5CCAKEM_5D_CLEAN_crypto_kem_enc(unsigned char *ct, unsigned char *key, const unsigned char *pk) {
    PQCLEAN_ROUND5R5ND_5CCAKEM_5D_CLEAN_r5_cca_kem_encapsulate(ct, key, pk);
    return 0;
}

int PQCLEAN_ROUND5R5ND_5CCAKEM_5D_CLEAN_crypto_kem_dec(unsigned char *key, unsigned char *ct, const unsigned char *sk) {
    PQCLEAN_ROUND5R5ND_5CCAKEM_5D_CLEAN_r5_cca_kem_decapsulate(key, ct, sk);
    return 0;
}