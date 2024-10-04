#include <iostream>
using namespace std;

int main() {
    cout << "================================="<< endl;
    cout << "Pemograman bahasa C++ Bintang Persegi" << endl;
    cout << "================================="<< endl;

    int ukuran;

    cout << "Masukkan ukuran persegi: ";
    cin >> ukuran;

    for (int i = 0; i < ukuran; i++) {

        for (int j = 0; j < ukuran; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
