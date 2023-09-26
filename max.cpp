#include <iostream>

using namespace std;

int main() {
    // judul program
    cout << "Program Mencari Bilangan Tertinggi" << endl;
    // declare variable
    int x, y, z, tertinggi;
    // assign the variable
    cout << "Masukkan Bilangan Pertama:";
    cin >> x;

    cout << "Masukkan Bilangan Kedua:";
    cin >> y;

    cout << "Masukkan Bilangan Ketiga:";
    cin >>z;
    // percabangan kondisi
    if (x > y && x > z) {
        tertinggi = x;
    } else if (y > x && y > z) {
        tertinggi = y;
    } else {
        tertinggi = z;
    }
    // display the ouput tertinggi
    cout << "Bilangan tertinggi adalah: " << tertinggi;
}
