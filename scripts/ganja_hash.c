#include "ganja.c"

int main(int argc, char *argv[]) {
    unsigned char *password;
    unsigned char *salt = "RedDyeCipher";
    unsigned char D[32] = {0};
    unsigned char *buf;
    char digest[32*2+1];
    FILE *infile;
    infile = fopen(argv[1], "rb");
    fseek(infile, 0, SEEK_END);
    long fsize = ftell(infile);
    fseek(infile, 0, SEEK_SET);
    buf = (unsigned char *)malloc(fsize);
    fread(buf, 1, fsize, infile);
    fclose(infile);
    ganja_digest(buf, fsize, D, salt);
    for (int x = 0; x < 32; x++) {
        sprintf(&digest[x*2], "%02x", D[x]);
    }
    printf("%s\n", digest);
}
