#include <iostream>

using namespace std;

int main() {
    // judul program
    cout << "Program Mencari Bilangan Tertinggi" << endl;
    // declare variable
    int x, y, z, terbesar;
    // assign the variable
    cout << "Masukkan Bilangan Pertama:";
    cin >> x;

    cout << "Masukkan Bilangan Kedua:";
    cin >> y;

    cout << "Masukkan Bilangan Ketiga:";
    cin >>z;
    // percabangan kondisi
    if (x > y && x > z) {
        terbesar = x;
    } else if (y > x && y > z) {
        terbesar = y;
    } else {
        terbesar = z;
    }
    // display the ouput terbesar
    cout << "Bilangan terbesar adalah: " << terbesar;
}