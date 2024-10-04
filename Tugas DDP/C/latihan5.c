#include <stdio.h>

//bintang segitiga
int main() {
    printf("=================================\n");
    printf("Pemograman bahasa C Bintang Segitiga\n");
    printf("=================================\n");


    int baris;

    printf("Masukkan Jumlah Baris: ");
    scanf("%d", &baris);

    for(int i = 1; i <= baris; ++i) {
        for(int j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
