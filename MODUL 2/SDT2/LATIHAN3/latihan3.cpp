#include <iostream>
using namespace std;

// A. Pemanggilan dengan Nilai (Call by Value)
void tukarNilai(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

// B. Pemanggilan dengan Pointer
void tukarPointer(int *px, int *py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}

// C. Pemanggilan dengan Referensi
void tukarReference(int &px, int &py) {
    int temp = px;
    px = py;
    py = temp;
}

int main() {
    int a = 4, b = 6;

    cout << "Kondisi Awal -> a: " << a << " b: " << b << endl;

    // Test Call by Value
    tukarNilai(a, b);
    cout << "Setelah tukarNilai -> a: " << a << " b: " << b << endl;

    // Test Call by Pointer
    tukarPointer(&a, &b);
    cout << "Setelah tukarPointer -> a: " << a << " b: " << b << endl;

    // Test Call by Reference
    tukarReference(a, b);
    cout << "Setelah tukarReference -> a: " << a << " b: " << b << endl;

    return 0;
}