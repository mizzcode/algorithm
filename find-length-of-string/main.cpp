#include <iostream>

using namespace std;

int main() {
    string huruf;

    cout << "Masukan nama: ";
    cin >> huruf;

    int counter = 0;

    //  misalkan input huruf = mizz

    //  huruf[0] 
    //  m    = 1
    //  counter = 1
    //  huruf[1] 
    //  mi   = 2
    //  counter = 2
    //  huruf[2] 
    //  miz  = 3
    //  counter = 3
    //  huruf[3] 
    //  mizz = 4
    //  counter = 4

    for (int i = 0; huruf[i]; i++) {
        counter++;
    }
        cout << "Panjang huruf " << counter;
}