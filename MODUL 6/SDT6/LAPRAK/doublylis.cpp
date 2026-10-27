
#include "Doublylist.h"

void CreateList(List &L) {
    L.First = NULL;
    L.Last = NULL;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = NULL;
    P->prev = NULL;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = NULL;
}

void insertLast(List &L, address P) {
    if (L.First == NULL) {
        L.First = P;
        L.Last = P;
    } else {
        P->prev = L.Last;
        L.Last->next = P;
        L.Last = P;
    }
}

void printInfo(List L) {
    address P = L.Last;

    while (P != NULL) {
        cout << "Nomor Polisi : " << P->info.nopol << endl;
        cout << "Warna        : " << P->info.warna << endl;
        cout << "Tahun        : " << P->info.thnBuat << endl;
        P = P->prev;
    }
}

address findElm(List L, infotype x) {
    address P = L.First;

    while (P != NULL) {
        if (P->info.nopol == x.nopol)
            return P;
        P = P->next;
    }

    return NULL;
}

void deleteFirst(List &L, address &P) {
    P = L.First;

    if (P != NULL) {
        L.First = P->next;

        if (L.First != NULL)
            L.First->prev = NULL;
        else
            L.Last = NULL;

        P->next = NULL;
        P->prev = NULL;
    }
}

void deleteLast(List &L, address &P) {
    P = L.Last;

    if (P != NULL) {
        L.Last = P->prev;

        if (L.Last != NULL)
            L.Last->next = NULL;
        else
            L.First = NULL;

        P->next = NULL;
        P->prev = NULL;
    }
}

void deleteAfter(address Prec, address &P) {
    if (Prec != NULL && Prec->next != NULL) {
        P = Prec->next;
        Prec->next = P->next;

        if (P->next != NULL)
            P->next->prev = Prec;

        P->next = NULL;
        P->prev = NULL;
    } else {
        P = NULL;
    }
}

void hapusKendaraan(List &L, string nopol) {
    infotype x;
    x.nopol = nopol;

    address P = findElm(L, x);

    if (P == NULL) {
        cout << "Data tidak ditemukan." << endl;
        return;
    }

    address Hapus = NULL;

    if (P == L.First) {
        deleteFirst(L, Hapus);
    } else if (P == L.Last) {
        deleteLast(L, Hapus);
    } else {
        deleteAfter(P->prev, Hapus);
    }

    dealokasi(Hapus);
    cout << "Data dengan nomor polisi " << nopol
         << " berhasil dihapus." << endl;
}
