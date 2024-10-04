#include <iostream>

int main()
{
    const int ukuranArray = 20;
    char daftarHuruf[ukuranArray];

    // Menerima input 10 buah karakter huruf dari user atau sebanyak yang dimasukkan
    std::cout << "Masukkan 20 karakter huruf: ";
    for (int i = 0; i < ukuranArray; ++i)
    {
        // Menerima input karakter huruf
        std::cin >> daftarHuruf[i];

        // Cek apakah sudah mencapai akhir input
        if (std::cin.peek() == '\n')
        {
            break;
        }
    }

    // Menghitung jumlah huruf vokal dan konsonan
    int jumlahVokal = 0;
    int jumlahKonsonan = 0;

    for (int i = 0; i < ukuranArray && daftarHuruf[i] != '\0'; ++i)
    {
        // Menggunakan tabel ASCII untuk mengecek huruf vokal
        if (daftarHuruf[i] == 'a' || daftarHuruf[i] == 'e' || daftarHuruf[i] == 'i' ||
            daftarHuruf[i] == 'o' || daftarHuruf[i] == 'u' || daftarHuruf[i] == 'A' ||
            daftarHuruf[i] == 'E' || daftarHuruf[i] == 'I' || daftarHuruf[i] == 'O' ||
            daftarHuruf[i] == 'U')
        {
            ++jumlahVokal;
        }
        else if ((daftarHuruf[i] >= 'a' && daftarHuruf[i] <= 'z') || (daftarHuruf[i] >= 'A' && daftarHuruf[i] <= 'Z'))
        {
            // Menghitung huruf konsonan
            ++jumlahKonsonan;
        }
    }

    // Mencetak informasi jumlah masing-masing huruf vocal dan huruf konsonan
    std::cout << "Jumlah huruf vokal: " << jumlahVokal << std::endl;
    std::cout << "Jumlah huruf konsonan: " << jumlahKonsonan << std::endl;

    return 0;
}
