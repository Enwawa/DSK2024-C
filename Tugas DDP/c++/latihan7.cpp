#include <iostream>
#include <string>
using namespace std;
 
int main() {
    cout << "================================="<< endl;
    cout << "Pemograman bahasa C++ Biodata" << endl;
    cout << "================================="<< endl;

    string nama,nim,prodi;
 

    cout << "Masukan Namamu disini : ";
    getline(cin, nama);

    cout << "Masukan NIM mu disini : ";
    getline(cin, nim);

    cout << "Masukan Prodimu disini : ";
    getline(cin, prodi);
 

    cout << "NAMA: " << nama << endl;
    cout << "NIM: " << nim << endl;
    cout << "PRODI: " << prodi << endl;

 
    return 0;
}