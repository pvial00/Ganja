#include "ganja.c"

int main(int argc, char *argv[]) {
    int keylen = 32;
    int iterations = 10000;
    unsigned char *password;
    unsigned char *salt = "DarkCastleSui";
    unsigned char D[32] = {0};
    unsigned char *buf;
    char digest[32*2+1];
    if (argc != 2) {
        printf("ganjakdf <password>\n");
        exit(1);
    }
    password = argv[1];
    ganja_kdf(password, strlen(password), D, iterations, keylen, salt);
    for (int x = 0; x < 32; x++) {
        sprintf(&digest[x*2], "%02x", D[x]);
    }
    printf("%s\n", digest);
}
