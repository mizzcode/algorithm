#include <iostream>

using namespace std;

int main() {
    int nilai [10];
    int ganjil;

    // user input 10 nilai
    for (int i = 0; i < 10; i++) {
        cout << "Masukkan nilai ke-" << i+1 << " : ";
        cin >> nilai[i];

        ganjil = (nilai[i] % 2 == 1);

        if (ganjil) {
            cout << "Nilai ganjil : " << nilai[i] << endl;
        }
    }
}