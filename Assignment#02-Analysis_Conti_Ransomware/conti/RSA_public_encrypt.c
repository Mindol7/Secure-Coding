#define _GNU_SOURCE
#include <stdio.h>
#include <dlfcn.h>
#include <string.h>
#include <openssl/rsa.h>

int RSA_public_encrypt(int flen, const unsigned char *from,
                       unsigned char *to, RSA *rsa, int padding) {

    printf("Intercepted RSA_public_encrypt!\n");
    printf("\nFlen: %d\n", flen);
    printf("\nRSA Size: %d\n", RSA_size(rsa));

    printf("\nOriginal Data Size: %d\n", strlen(from));

    printf("\nInput Data: ");
    
    for (int i = 0; i < strlen(from); i++) {
        printf("%02x", from[i]);
    }

    printf("\n");
    
    memcpy(to, from, strlen(from));

    printf("\nCopy Data: ");
    for(int i = 0; i < strlen(from); i++){
	    printf("%02x", to[i]);
    }
    printf("\n");
    printf("==========================================================================\n");

    return RSA_size(rsa);

}

