#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int jumlah(Node* head) {
    int total = 0;
    Node* bantu = head;

    while (bantu != nullptr) {
        total += bantu->data;
        bantu = bantu->next;
    }

    return total;
}

int main() {
    int n, nilai;
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

    cout << jumlah(head) << endl;

    return 0;
}