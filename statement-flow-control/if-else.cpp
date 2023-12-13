#include<iostream>

using namespace std;

int main() {
    int i;  // deklarasi variable i dengan tipe data integer

    cout << "Masukan sembarang nilai: ";

    cin >> i;

    if (i > 2) {
        cout << "Nilai yang anda masukan adalah " << i << endl;
        cout << "Dan nilai " << i << " lebih dari 2";
    } else {
        cout << "nilai " << i << " kurang dari 2";
    }
}