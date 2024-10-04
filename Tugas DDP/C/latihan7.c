#include <stdio.h>

int main() {
    printf("=================================\n");
    printf("Pemograman bahasa C Biodata\n");
    printf("=================================\n");

    // deklarasi variabel untuk menyimpan data input
    char nama[100], nim[100], prodi[100];

    // memberi informasi user saat program dijalankan
    printf("Masukkan Namamu disini: ");
    fgets(nama, sizeof(nama), stdin);

    printf("Masukkan NIM mu disini: ");
    fgets(nim, sizeof(nim), stdin);

    printf("Masukkan Prodimu disini: ");
    fgets(prodi, sizeof(prodi), stdin);

    // menampilkan hasil input menggunakan printf
    printf("NAMA: %s", nama);
    printf("NIM: %s", nim);
    printf("PRODI: %s", prodi);

    return 0;
}
