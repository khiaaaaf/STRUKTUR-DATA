#include <iostream>
#include <string>
using namespace std;


struct Pelajaran {
    string namaMapel;
    string kodeMapel;
};


Pelajaran createPelajaran(string nama, string kode) {
    Pelajaran P;
    P.namaMapel = nama;
    P.kodeMapel = kode;
    return P;
}


void tampilPelajaran(Pelajaran P) {
    cout << "Nama Pelajaran : " << P.namaMapel << endl;
    cout << "Kode Pelajaran : " << P.kodeMapel << endl;
}

int main() {
    string namaMapel, kodeMapel;

    cout << "Masukkan nama pelajaran: ";
    getline(cin, namaMapel);

    cout << "Masukkan kode pelajaran: ";
    getline(cin, kodeMapel);

    Pelajaran P = createPelajaran(namaMapel, kodeMapel);

    tampilPelajaran(P);

    return 0;
}