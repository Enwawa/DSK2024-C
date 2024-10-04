#include <stdio.h>

int main() {
    printf("=================================\n");
    printf("Pemograman bahasa C Menentukan Bilangan Ganjil atau Genap\n");
    printf("=================================\n");

    int x;
    printf("Masukkan angka: ");
    scanf("%d", &x);

    if (x % 2 == 0)
        printf("%d adalah bilangan genap.\n", x);
    else
        printf("%d adalah bilangan ganjil.\n", x);

    return 0;
}
