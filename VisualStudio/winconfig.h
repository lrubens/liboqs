#ifndef __WINCONFIG_H
#define __WINCONFIG_H

/* Enable schemes supported on Windows */
///// OQS_COPY_FROM_PQCLEAN_FRAGMENT_KEMS_START
#define OQS_ENABLE_KEM_kyber_512
#define OQS_ENABLE_KEM_kyber_768
#define OQS_ENABLE_KEM_kyber_1024
#define OQS_ENABLE_KEM_round5_r5nd_1kem_0d
#define OQS_ENABLE_KEM_round5_r5nd_0kem_2iot
#define OQS_ENABLE_KEM_round5_r5nd_1kem_5d
#define OQS_ENABLE_KEM_round5_r5nd_5kem_0d
#define OQS_ENABLE_KEM_round5_r5nd_1kem_4longkey
#define OQS_ENABLE_KEM_round5_r5nd_3kem_5d
#define OQS_ENABLE_KEM_round5_r5n1_3kem_0d
#define OQS_ENABLE_KEM_round5_r5n1_1kem_0d
#define OQS_ENABLE_KEM_round5_r5n1_5kem_0d
#define OQS_ENABLE_KEM_round5_r5nd_3kem_0d
#define OQS_ENABLE_KEM_round5_r5nd_5kem_5d
#define OQS_ENABLE_KEM_round5_r5n1_3ccakem_0smallct
#define OQS_ENABLE_KEM_round5_r5nd_5ccakem_0d
#define OQS_ENABLE_KEM_round5_r5nd_3ccakem_0d
#define OQS_ENABLE_KEM_round5_r5nd_5ccakem_5d
#define OQS_ENABLE_KEM_round5_r5nd_1ccakem_5d
#define OQS_ENABLE_KEM_round5_r5nd_1ccakem_0d
#define OQS_ENABLE_KEM_round5_r5n1_3ccakem_0d
#define OQS_ENABLE_KEM_round5_r5nd_3ccakem_5d
#define OQS_ENABLE_KEM_round5_r5n1_5ccakem_0d
#define OQS_ENABLE_KEM_round5_r5n1_1ccakem_0d
#define OQS_ENABLE_KEM_newhope_512cca
#define OQS_ENABLE_KEM_newhope_1024cca
#define OQS_ENABLE_KEM_ntru_hps2048509
#define OQS_ENABLE_KEM_ntru_hps2048677
#define OQS_ENABLE_KEM_ntru_hps4096821
#define OQS_ENABLE_KEM_ntru_hrss701
#define OQS_ENABLE_KEM_saber_lightsaber
#define OQS_ENABLE_KEM_saber_saber
#define OQS_ENABLE_KEM_saber_firesaber
///// OQS_COPY_FROM_PQCLEAN_FRAGMENT_KEMS_END
#define OQS_ENABLE_KEM_frodokem_640_aes
#define OQS_ENABLE_KEM_frodokem_640_shake
#define OQS_ENABLE_KEM_frodokem_976_aes
#define OQS_ENABLE_KEM_frodokem_976_shake
#define OQS_ENABLE_KEM_frodokem_1344_aes
#define OQS_ENABLE_KEM_frodokem_1344_shake
#define OQS_ENABLE_KEM_sike_p434
#define OQS_ENABLE_KEM_sike_p503
#define OQS_ENABLE_KEM_sike_p610
#define OQS_ENABLE_KEM_sike_p751
#define OQS_ENABLE_KEM_sidh_p434
#define OQS_ENABLE_KEM_sidh_p503
#define OQS_ENABLE_KEM_sidh_p610
#define OQS_ENABLE_KEM_sidh_p751
#define OQS_ENABLE_SIG_picnic_L1_FS
#define OQS_ENABLE_SIG_picnic_L1_UR
#define OQS_ENABLE_SIG_picnic_L3_FS
#define OQS_ENABLE_SIG_picnic_L3_UR
#define OQS_ENABLE_SIG_picnic_L5_FS
#define OQS_ENABLE_SIG_picnic_L5_UR
#define OQS_ENABLE_SIG_picnic2_L1_FS
#define OQS_ENABLE_SIG_picnic2_L3_FS
#define OQS_ENABLE_SIG_picnic2_L5_FS
///// OQS_COPY_FROM_PQCLEAN_FRAGMENT_SIGS_START
#define OQS_ENABLE_SIG_dilithium_2
#define OQS_ENABLE_SIG_dilithium_3
#define OQS_ENABLE_SIG_dilithium_4
#define OQS_ENABLE_SIG_mqdss_31_48
#define OQS_ENABLE_SIG_mqdss_31_64
#define OQS_ENABLE_SIG_rainbow_Ia_classic
#define OQS_ENABLE_SIG_rainbow_Ia_cyclic
#define OQS_ENABLE_SIG_rainbow_Ia_cyclic_compressed
#define OQS_ENABLE_SIG_rainbow_IIIc_classic
#define OQS_ENABLE_SIG_rainbow_IIIc_cyclic
#define OQS_ENABLE_SIG_rainbow_IIIc_cyclic_compressed
#define OQS_ENABLE_SIG_rainbow_Vc_classic
#define OQS_ENABLE_SIG_rainbow_Vc_cyclic
#define OQS_ENABLE_SIG_rainbow_Vc_cyclic_compressed
#define OQS_ENABLE_SIG_sphincs_haraka_128f_robust
#define OQS_ENABLE_SIG_sphincs_haraka_128f_simple
#define OQS_ENABLE_SIG_sphincs_haraka_128s_robust
#define OQS_ENABLE_SIG_sphincs_haraka_128s_simple
#define OQS_ENABLE_SIG_sphincs_haraka_192f_robust
#define OQS_ENABLE_SIG_sphincs_haraka_192f_simple
#define OQS_ENABLE_SIG_sphincs_haraka_192s_robust
#define OQS_ENABLE_SIG_sphincs_haraka_192s_simple
#define OQS_ENABLE_SIG_sphincs_haraka_256f_robust
#define OQS_ENABLE_SIG_sphincs_haraka_256f_simple
#define OQS_ENABLE_SIG_sphincs_haraka_256s_robust
#define OQS_ENABLE_SIG_sphincs_haraka_256s_simple
#define OQS_ENABLE_SIG_sphincs_sha256_128f_robust
#define OQS_ENABLE_SIG_sphincs_sha256_128f_simple
#define OQS_ENABLE_SIG_sphincs_sha256_128s_robust
#define OQS_ENABLE_SIG_sphincs_sha256_128s_simple
#define OQS_ENABLE_SIG_sphincs_sha256_192f_robust
#define OQS_ENABLE_SIG_sphincs_sha256_192f_simple
#define OQS_ENABLE_SIG_sphincs_sha256_192s_robust
#define OQS_ENABLE_SIG_sphincs_sha256_192s_simple
#define OQS_ENABLE_SIG_sphincs_sha256_256f_robust
#define OQS_ENABLE_SIG_sphincs_sha256_256f_simple
#define OQS_ENABLE_SIG_sphincs_sha256_256s_robust
#define OQS_ENABLE_SIG_sphincs_sha256_256s_simple
#define OQS_ENABLE_SIG_sphincs_shake256_128f_robust
#define OQS_ENABLE_SIG_sphincs_shake256_128f_simple
#define OQS_ENABLE_SIG_sphincs_shake256_128s_robust
#define OQS_ENABLE_SIG_sphincs_shake256_128s_simple
#define OQS_ENABLE_SIG_sphincs_shake256_192f_robust
#define OQS_ENABLE_SIG_sphincs_shake256_192f_simple
#define OQS_ENABLE_SIG_sphincs_shake256_192s_robust
#define OQS_ENABLE_SIG_sphincs_shake256_192s_simple
#define OQS_ENABLE_SIG_sphincs_shake256_256f_robust
#define OQS_ENABLE_SIG_sphincs_shake256_256f_simple
#define OQS_ENABLE_SIG_sphincs_shake256_256s_robust
#define OQS_ENABLE_SIG_sphincs_shake256_256s_simple
///// OQS_COPY_FROM_PQCLEAN_FRAGMENT_SIGS_END
#define OQS_KEM_DEFAULT OQS_KEM_alg_sike_p434
#define OQS_SIG_DEFAULT OQS_SIG_alg_picnic_L1_FS

#define OQS_MASTER_BRANCH /**/
#define OQS_VERSION_NUMBER 0x00200000L
#define OQS_VERSION_TEXT "0.2.0-dev"

#endif
