#include <iostream>
#include <string>
#include <cctype>

bool isPalindrome(const std::string& kata) {
    // Menghapus spasi dan mengonversi ke huruf kecil
    std::string tanpaSpasi;
    for (char c : kata) {
        if (!std::isspace(c)) {
            tanpaSpasi += std::tolower(c);
        }
    }

    // Mengecek apakah kata merupakan palindrom
    int panjang = tanpaSpasi.length();
    for (int i = 0; i < panjang / 2; ++i) {
        if (tanpaSpasi[i] != tanpaSpasi[panjang - i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string kata;

    // Menerima input dari pengguna
    std::cout << "Masukkan kata: ";
    std::getline(std::cin, kata);

    // Mengecek apakah kata merupakan palindrom atau bukan
    if (isPalindrome(kata)) {
        std::cout << kata << " adalah Palindrom.\n";
    } else {
        std::cout << kata << " bukan Palindrom.\n";
    }

    return 0;
}
