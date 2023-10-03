#include <iostream>

using namespace std;

int main() {
    // judul program
    cout << "Program Mencari Bilangan Terkecil" << endl;
    // declare variable
    int x, y, z, terkecil;
    // assign the variable
    cout << "Masukkan Bilangan Pertama:";
    cin >> x;

    cout << "Masukkan Bilangan Kedua:";
    cin >> y;

    cout << "Masukkan Bilangan Ketiga:";
    cin >>z;
    // percabangan kondisi
    if (x < y && x < z) {
        terkecil = x;
    } else if (y < x && y < z) {
        terkecil = y;
    } else {
        terkecil = z;
    }
    // display the ouput terbesar
    cout << "Bilangan terkecil adalah: " << terkecil;
}