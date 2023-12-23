#include <iostream>

using namespace std;

int main() {
    int base, power, result = 1;

    cout << "masukan angka yang ingin di pangkatkan: ";
    cin >> base;

    cout << "masukan pangkat berapa: ";
    cin >> power;

    int pow = power;

    while (power != 0) {
        result *= base;
        power--;
    }

    cout << "Hasil dari " << base << " pangkat " << pow << " adalah " << result;
}