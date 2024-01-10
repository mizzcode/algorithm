#include <iostream>

using namespace std;

int main() {
    int nilai [10];
    int total_ganjil = 0;
    // user input 10 nilai
    for (int i = 0; i < 10; i++) {
        cout << "Masukkan nilai ke-" << i+1 << " : ";
        cin >> nilai[i];
    }
    
    cout << "Nilai Ganjil : ";

    for (int i = 0; i < 10; i++) {
        if ((nilai[i] % 2 == 1)) {
            cout << nilai[i] << ", ";
            total_ganjil++;
        }
    }
    
    cout << endl;
    cout << "Total nilai ganjil ada " << total_ganjil;
}