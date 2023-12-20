#include <iostream>
using namespace std;

int pengurangan(int a, int b) {
    return a - b;
}

int perkalian(int a, int b) {
    return a * b;
}

int pembagian(int a, int b) {
    return a / b;
}

int main ()
{
    cout << "Hasil dari fungsi pengurangan adalah " << pengurangan(1,1) << endl;
    cout << "Hasil dari fungsi perkalian adalah " << perkalian(10,10) << endl;
    cout << "Hasil dari fungsi pembagian adalah " << pembagian(10,5);
}