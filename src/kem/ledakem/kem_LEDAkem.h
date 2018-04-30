#ifndef __OQS_KEM_LEDA_KEM_H
#define __OQS_KEM_LEDA_KEM_H

#include <oqs/oqs.h>

OQS_KEM *OQS_KEM_ledakem_new();
extern OQS_STATUS OQS_KEM_ledakem_keypair(uint8_t *public_key, uint8_t *secret_key);
extern OQS_STATUS OQS_KEM_ledakem_encaps(uint8_t *ciphertext, uint8_t *shared_secret, const uint8_t *public_key);
extern OQS_STATUS OQS_KEM_ledakem_decaps(uint8_t *shared_secret, const unsigned char *ciphertext, const uint8_t *secret_key);

#if defined(OQS_ENABLE_KEM_ledakem_C1_N02)

#define OQS_KEM_ledakem_C1_N02_length_public_key 3480 
#define OQS_KEM_ledakem_C1_N02_length_secret_key 24
#define OQS_KEM_ledakem_C1_N02_length_ciphertext 3480
#define OQS_KEM_ledakem_C1_N02_length_shared_secret 32 

#elif defined(OQS_ENABLE_KEM_ledakem_C1_N03)

#define OQS_KEM_ledakem_C1_N03_length_public_key 4688 
#define OQS_KEM_ledakem_C1_N03_length_secret_key 24
#define OQS_KEM_ledakem_C1_N03_length_ciphertext 2344 
#define OQS_KEM_ledakem_C1_N03_length_shared_secret 32 

#elif defined(OQS_ENABLE_KEM_ledakem_C1_N04)

#define OQS_KEM_ledakem_C1_N04_length_public_key 6408
#define OQS_KEM_ledakem_C1_N04_length_secret_key 24 
#define OQS_KEM_ledakem_C1_N04_length_ciphertext 2136
#define OQS_KEM_ledakem_C1_N04_length_shared_secret 32

#elif defined(OQS_ENABLE_KEM_ledakem_C2_N02)

#define OQS_KEM_ledakem_C2_N02_length_public_key 7200
#define OQS_KEM_ledakem_C2_N02_length_secret_key 32
#define OQS_KEM_ledakem_C2_N02_length_ciphertext 7200
#define OQS_KEM_ledakem_C2_N02_length_shared_secret 48

#elif defined(OQS_ENABLE_KEM_ledakem_C2_N03)

#define OQS_KEM_ledakem_C2_N03_length_public_key 10384
#define OQS_KEM_ledakem_C2_N03_length_secret_key 32
#define OQS_KEM_ledakem_C2_N03_length_ciphertext 5192
#define OQS_KEM_ledakem_C2_N03_length_shared_secret 48

#elif defined(OQS_ENABLE_KEM_ledakem_C2_N04)

#define OQS_KEM_ledakem_C2_N04_length_public_key 13152
#define OQS_KEM_ledakem_C2_N04_length_secret_key 32
#define OQS_KEM_ledakem_C2_N04_length_ciphertext 4384
#define OQS_KEM_ledakem_C2_N04_length_shared_secret 48

#elif defined(OQS_ENABLE_KEM_ledakem_C3_N02)

#define OQS_KEM_ledakem_C3_N02_length_public_key 7200 
#define OQS_KEM_ledakem_C3_N02_length_secret_key 32
#define OQS_KEM_ledakem_C3_N02_length_ciphertext 7200
#define OQS_KEM_ledakem_C3_N02_length_shared_secret 48

#elif defined(OQS_ENABLE_KEM_ledakem_C3_N03)

#define OQS_KEM_ledakem_C3_N03_length_public_key 10384
#define OQS_KEM_ledakem_C3_N03_length_secret_key 32
#define OQS_KEM_ledakem_C3_N03_length_ciphertext 5192
#define OQS_KEM_ledakem_C3_N03_length_shared_secret 48

#elif defined(OQS_ENABLE_KEM_ledakem_C3_N04)

#define OQS_KEM_ledakem_C3_N04_length_public_key 13152
#define OQS_KEM_ledakem_C3_N04_length_secret_key 32
#define OQS_KEM_ledakem_C3_N04_length_ciphertext 4384
#define OQS_KEM_ledakem_C3_N04_length_shared_secret 48

#elif defined(OQS_ENABLE_KEM_ledakem_C4_N02)

#define OQS_KEM_ledakem__C4_N02_length_public_key 12384
#define OQS_KEM_ledakem__C4_N02_length_secret_key 40 
#define OQS_KEM_ledakem__C4_N02_length_ciphertext 12384
#define OQS_KEM_ledakem__C4_N02_length_shared_secret 64

#elif defined(OQS_ENABLE_KEM_ledakem_C4_N03)

#define OQS_KEM_ledakem_C4_N03_length_public_key 18016
#define OQS_KEM_ledakem_C4_N03_length_secret_key 40
#define OQS_KEM_ledakem_C4_N03_length_ciphertext 9008
#define OQS_KEM_ledakem_C4_N03_length_shared_secret 64

#elif defined(OQS_ENABLE_KEM_ledakem_C4_N04)

#define OQS_KEM_ledakem__C4_N04_length_public_key 22704
#define OQS_KEM_ledakem__C4_N04_length_secret_key 40
#define OQS_KEM_ledakem__C4_N04_length_ciphertext 7568
#define OQS_KEM_ledakem__C4_N04_length_shared_secret 64

#elif defined(OQS_ENABLE_KEM_ledakem_C5_N02)

#define OQS_KEM_ledakem_C5_N02_length_public_key 12384
#define OQS_KEM_ledakem_C5_N02_length_secret_key 40
#define OQS_KEM_ledakem_C5_N02_length_ciphertext 12384
#define OQS_KEM_ledakem_C5_N02_length_shared_secret 64

#elif defined(OQS_ENABLE_KEM_ledakem_C5_N03)

#define OQS_KEM_ledakem_C5_N03_length_public_key 18016
#define OQS_KEM_ledakem_C5_N03_length_secret_key 40
#define OQS_KEM_ledakem_C5_N03_length_ciphertext 9008
#define OQS_KEM_ledakem_C5_N03_length_shared_secret 64

#else

#define OQS_KEM_ledakem_C5_N04_length_public_key 22704
#define OQS_KEM_ledakem_C5_N04_length_secret_key 40
#define OQS_KEM_ledakem_C5_N04_length_ciphertext 7568
#define OQS_KEM_ledakem_C5_N04_length_shared_secret 64 

#endif
#endif
