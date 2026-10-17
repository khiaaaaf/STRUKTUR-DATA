#include <iostream>
#include <string>
using namespace std;

struct Node {
    string nama;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void tambah(string nama) {
    Node* baru = new Node{nama, nullptr};

    if (head == nullptr) {
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
    cout << "Mahasiswa berhasil ditambahkan.\n";
}

void layani() {
    if (head == nullptr) {
        cout << "Antrean kosong.\n";
        return;
    }

    Node* hapus = head;
    cout << "Melayani: " << head->nama << endl;
    head = head->next;

    if (head == nullptr)
        tail = nullptr;

    delete hapus;
}

void tampilkan() {
    Node* bantu = head;

    if (bantu == nullptr) {
        cout << "Antrean kosong.\n";
        return;
    }

    cout << "Antrean: ";
    while (bantu != nullptr) {
        cout << bantu->nama;
        if (bantu->next != nullptr)
            cout << " -> ";
        bantu = bantu->next;
    }
    cout << endl;
}

int main() {
    int pilihan;
    string nama;

    do {
        cout << "\n1. Tambah mahasiswa\n";
        cout << "2. Layani mahasiswa\n";
        cout << "3. Tampilkan antrean\n";
        cout << "0. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1:
                cout << "Nama mahasiswa: ";
                getline(cin, nama);
                tambah(nama);
                break;
            case 2:
                layani();
                break;
            case 3:
                tampilkan();
                break;
            case 0:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 0);

    return 0;
}