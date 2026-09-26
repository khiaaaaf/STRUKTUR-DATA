#include <iostream>
using namespace std;

int main(){
    int angka;
    string satuan[] = {"nol", "satu", "dua", "tiga", "empat",
                       "lima", "enam", "tujuh", "delapan", "sembilan"};

    cout << "Masukkan angka: ";
    cin >> angka;

    if(angka < 10)
        cout << satuan[angka];
    else if(angka == 10)
        cout << "sepuluh";
    else if(angka == 11)
        cout << "sebelas";
    else if(angka < 20)
        cout << satuan[angka - 10] << " belas";
    else if(angka == 100)
        cout << "seratus";
    else
        cout << satuan[angka / 10] << " puluh " << satuan[angka % 10];

    return 0;
}