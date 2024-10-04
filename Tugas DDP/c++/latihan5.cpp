#include <iostream>
using namespace std;

int main() {
    cout << "================================="<< endl;
    cout << "Pemograman Bahasa C++ Bintang Segitiga" << endl;
    cout << "================================="<< endl;

    int baris;

    cout << "Masukan Jumlah Baris: ";
    cin >> baris;

    for(int i = 1; i <= baris; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
