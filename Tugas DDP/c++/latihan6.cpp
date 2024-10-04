#include <iostream>
using namespace std;

int main() {
    cout << "================================="<< endl;
    cout << "Pemograman bahasa C++ Bintang Piramida" << endl;
    cout << "================================="<< endl;

    int jarak, baris;

    cout <<"Masukan jumlah baris: ";
    cin >> baris;

    for(int i = 1, k = 0; i <= baris; ++i, k = 0) {
        for(jarak = 1; jarak <= baris-i; ++jarak) {
            cout <<"  ";
        }

        while(k != 2*i-1) {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}

