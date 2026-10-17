#include <iostream>
#include <string>
using namespace std;

struct Node {
    string judul;
    int tahun;
    Node* next;
};

void tambah(Node*& head, string judul, int tahun) {
    Node* baru = new Node{judul, tahun, nullptr};

    if (head == nullptr) {
        head = baru;
    } else {
        Node* bantu = head;
        while (bantu->next != nullptr) {
            bantu = bantu->next;
        }
        bantu->next = baru;
    }
}

void deleteLast(Node*& head) {
    if (head == nullptr)
        return;

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* bantu = head;

    while (bantu->next->next != nullptr) {
        bantu = bantu->next;
    }

    delete bantu->next;
    bantu->next = nullptr;
}

void tampilkan(Node* head) {
    cout << "Daftar Buku:\n";

    Node* bantu = head;
    while (bantu != nullptr) {
        cout << "Buku " << bantu->judul
             << " (" << bantu->tahun << ")\n";
        bantu = bantu->next;
    }
}

int main() {
    int n, tahun;
    string judul;
    Node* head = nullptr;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> judul >> tahun;
        tambah(head, judul, tahun);
    }

    deleteLast(head);
    tampilkan(head);

    return 0;
}