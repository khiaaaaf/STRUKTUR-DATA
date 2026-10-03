#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int nilai[100];
    int total = 0;

    for (int i = 0; i < N; i++) {
        cin >> nilai[i];
        total += nilai[i];
    }

    int rataRata = total / N;
    int jumlah = 0;

    for (int i = 0; i < N; i++) {
        if (nilai[i] > rataRata) {
            jumlah++;
        }
    }

    cout << "Rata-rata: " << rataRata << endl;
    cout << "Di atas rata-rata: " << jumlah << endl;

    return 0;
}