#include <iostream>
using namespace std;

int main() {
    cout << "================================="<< endl;
    cout << "Pemograman bahasa C++ Menentukan Bilangan Ganjil atau Genap" << endl;
    cout << "================================="<< endl;

    int x;
    cout << "Masukkan angka: ";
    cin >> x;
    if (x % 2 == 0)
        cout << x << " adalah bilangan genap.";
    else
        cout << x << " adalah bilangan ganjil.";
    return 0;
}
