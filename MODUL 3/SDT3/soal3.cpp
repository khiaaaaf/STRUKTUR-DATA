#include <iostream>
using namespace std;

const int baris = 3;
const int kolom = 3;

void tampilArray(int A[baris][kolom]) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

void jumlahArray(int A[baris][kolom], int B[baris][kolom],
                 int C[baris][kolom]) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int jumlahPointer(int *a, int *b) {
    return *a + *b;
}

int main() {
    int A[baris][kolom] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[baris][kolom] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int C[baris][kolom];

    cout << "Array A:" << endl;
    tampilArray(A);

    cout << "\nArray B:" << endl;
    tampilArray(B);

    jumlahArray(A, B, C);

    cout << "\nHasil penjumlahan Array A + Array B:" << endl;
    tampilArray(C);

    int x = 10;
    int y = 20;

    int *p1 = &x;
    int *p2 = &y;

    cout << "\nPenjumlahan menggunakan pointer: "
         << jumlahPointer(p1, p2) << endl;

    return 0;
}