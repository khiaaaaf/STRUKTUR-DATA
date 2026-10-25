#include "singlelinkedlist.h"
#include <iostream>
using namespace std;

int main() {
    List L;
    CreateList(L);

    insertFirst(L, 20);
    insertFirst(L, 10);
    insertLast(L, 30);
    insertAfter(L, 20, 25);

    cout << "Isi linked list: ";
    printInfo(L);

    cout << "Jumlah node: " << nbList(L) << endl;

    ElmList* P = findElm(L, 20);

    if (P != nullptr) {
        cout << "Nilai ditemukan: " << P->info << endl;
    } else {
        cout << "Nilai tidak ditemukan." << endl;
    }

    update(L, 25, 27);
    cout << "Setelah update: ";
    printInfo(L);

    delAfter(L, 20);
    cout << "Setelah delAfter: ";
    printInfo(L);

    delP(L, 30);
    cout << "Setelah delP: ";
    printInfo(L);

    delFirst(L);
    cout << "Setelah delFirst: ";
    printInfo(L);

    delLast(L);
    cout << "Setelah delLast: ";
    printInfo(L);

    cout << "Jumlah node sekarang: " << nbList(L) << endl;

    delAll(L);
    cout << "Setelah delAll: ";
    printInfo(L);

    return 0;
}