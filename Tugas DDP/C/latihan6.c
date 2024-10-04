#include <stdio.h>
//bintang piramida
int main()
{
    printf("=================================\n");
    printf("Pemograman bahasa C Bintang Piramida\n");
    printf("=================================\n");

    int jarak, baris;

    printf("Masukkan jumlah baris: ");
    scanf("%d", &baris);

    for (int i = 1, k = 0; i <= baris; ++i, k = 0)
    {
        for (jarak = 1; jarak <= baris - i; ++jarak)
        {
            printf("  ");
        }

        while (k != 2 * i - 1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    return 0;
}
