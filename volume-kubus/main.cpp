#include <iostream>

using namespace std;

int main() {
    cout << "-----Program Menghitung Volume Kubus-----" << endl;
    // deklarasi variable;
    int sisi;
    int volume;
    // assignment ke masing-masing variable
    cout << "Masukan Sisi Kubus: ";
    cin >> sisi;
    // rumus volume kubus
    volume = sisi * sisi * sisi;

    cout << "Volume Kubus adalah: " << volume;
}