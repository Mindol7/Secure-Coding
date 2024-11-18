CC=gcc
AS=nasm
OBJ= elfinject RSA_public_encrypt.so

.PHONY: all clean

all: $(OBJ)

elfinject: elfinject.c
	$(CC) -o elfinject -O2 elfinject.c -lelf

RSA_public_encrypt.so: RSA_public_encrypt.c
	$(CC) -o RSA_public_encrypt.so -fPIC -shared -D_GNU_SOURCE RSA_public_encrypt.c -ldl
