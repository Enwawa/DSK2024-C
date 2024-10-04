#include <iostream>
using namespace std;

int main() {
    cout << "================================="<< endl;
    cout << "Pemograman bahasa C++ Menampilkan Bilangan dari 1 hingga N" << endl;
    cout << "================================="<< endl;

    int N;
    cout << "Masukkan batas angka: ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cout << i << " ";
    }
    return 0;
}
