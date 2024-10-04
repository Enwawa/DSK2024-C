#include <stdio.h>

int main() {
    printf("=================================\n");
    printf("Pemograman bahasa C Menampilkan Bilangan dari 1 hingga N\n");
    printf("=================================\n");

    int N;
    printf("Masukkan batas angka: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        printf("%d ", i);
    }
    
    return 0;
}
