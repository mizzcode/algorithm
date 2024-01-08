#include <iostream>

using namespace std;

int main() {
    // penghitung nilai rata-rata
    double nilai [10];
    double total;
    double rata_rata;
    double nilai_diatas_rata_rata;

    // user input 10 nilai
    for (int i = 0; i < 10; i++) {
        cout << "Masukkan nilai ke-" << i+1 << " : ";
        cin >> nilai[i];
    }

    // proses penjumlahan seluruh nilai
    for (int i = 0; i < 10; i++) {
        total += nilai[i];
    }

    // proses mendapatkan rata-rata nilai
    rata_rata = total / 10;

    cout << "Nilai Rata-Rata : " << rata_rata << endl;

    // misalkan nilai diatas rata-rata nya dari indeks 0
    nilai_diatas_rata_rata = nilai[0];

    // proses mendapatkan nilai diatas rata-rata
    for (int i = 1; i < 10; i++) {
        /**
         * jika ada nilai di dalam array lebih dari variable diatas rata-rata
         * maka isi nilai ke dalam variable nilai diatas rata-rata
        */
        if (nilai[i] > nilai_diatas_rata_rata) {
            nilai_diatas_rata_rata = nilai[i];
        }
    }

    cout << "Nilai Diatas Rata-Rata : " << nilai_diatas_rata_rata << endl;
}