#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAfter(Node* head, int target, int nilaiBaru) {
    Node* bantu = head;

    while (bantu != nullptr && bantu->data != target) {
        bantu = bantu->next;
    }

    if (bantu == nullptr) {
        cout << "Nilai tidak ditemukan.\n";
        return;
    }

    Node* baru = new Node{nilaiBaru, bantu->next};
    bantu->next = baru;
}

void tampilkan(Node* head) {
    Node* bantu = head;

    while (bantu != nullptr) {
        cout << bantu->data;
        if (bantu->next != nullptr)
            cout << " -> ";
        bantu = bantu->next;
    }
    cout << endl;
}

int main() {
    int n, nilai, target, nilaiBaru;
    Node *head = nullptr, *tail = nullptr;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> nilai;
        Node* baru = new Node{nilai, nullptr};

        if (head == nullptr)
            head = tail = baru;
        else {
            tail->next = baru;
            tail = baru;
        }
    }

    cin >> target >> nilaiBaru;

    insertAfter(head, target, nilaiBaru);

    tampilkan(head);

    return 0;
}