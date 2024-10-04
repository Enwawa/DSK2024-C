#include <stdio.h>

int main() {
    printf("=================================\n");
    printf("Pemograman bahasa C Bintang Persegi\n");
    printf("=================================\n");

    int ukuran;

    printf("Masukkan ukuran persegi: ");
    scanf("%d", &ukuran);


    for (int i = 0; i < ukuran; i++) {

        for (int j = 0; j < ukuran; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
