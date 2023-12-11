#include <iostream>

using namespace std;

const float pi = 3.14159;   // nilai phi kita tetapkan sebagai konstanta agar nilai tidak bisa diubah

int main() {
    float r = 5.0;  // radius
    float kelilingLingkaran, luasLingkaran;

    kelilingLingkaran = 2 * pi * r;
    luasLingkaran = pi * r * r;

    cout << "Keliling Lingkaran: " <<  kelilingLingkaran << endl;
    cout << "Luas Lingkaran: " << luasLingkaran;
}