
#include "Doublylist.h"

int main() {
    List L;
    CreateList(L);

    int n;
    cout << "Jumlah data kendaraan: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        infotype x;

        cout << "\nMasukkan nomor polisi: ";
        cin >> x.nopol;
        cout << "Masukkan warna kendaraan: ";
        cin >> x.warna;
        cout << "Masukkan tahun kendaraan: ";
        cin >> x.thnBuat;

        if (findElm(L, x) != NULL) {
            cout << "Nomor polisi sudah terdaftar." << endl;
        } else {
            insertLast(L, alokasi(x));
        }
    }

    cout << "\n=== DATA LIST 1 ===" << endl;
    printInfo(L);

    infotype cari;
    cout << "\nMasukkan nomor polisi yang dicari: ";
    cin >> cari.nopol;

    address hasil = findElm(L, cari);

    if (hasil != NULL) {
        cout << "\nNomor Polisi : " << hasil->info.nopol << endl;
        cout << "Warna        : " << hasil->info.warna << endl;
        cout << "Tahun        : " << hasil->info.thnBuat << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }

    string hapus;
    cout << "\nMasukkan nomor polisi yang akan dihapus: ";
    cin >> hapus;

    hapusKendaraan(L, hapus);

    cout << "\n=== DATA LIST SETELAH PENGHAPUSAN ===" << endl;
    printInfo(L);

    while (L.First != NULL) {
        address P;
        deleteFirst(L, P);
        dealokasi(P);
    }

    return 0;
}
