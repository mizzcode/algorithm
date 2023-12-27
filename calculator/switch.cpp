#include <iostream>

using namespace std;

int main() {
    int b1, b2;
    char op;

    cout << "Masukan bilangan pertama: ";
    cin >> b1;

    cout << "Masukan operator aritmatika (+, -, *, /): ";
    cin >> op;

    cout << "Masukan bilangan kedua: ";
    cin >> b2;

    switch (op)
    {
    case '+':
        cout << b1 << " + " << b2 << " = " << b1 + b2;
        break;
    case '-':
        cout << b1 << " - " << b2 << " = " << b1 - b2;
        break;
    case '*':
        cout << b1 << " * " << b2 << " = " << b1 * b2;
        break;
    case '/':
        cout << b1 << " / " << b2 << " = " << b1 / b2;
        break;
    default:
        cout << "Operator tidak dikenali";
        break;
    }
}