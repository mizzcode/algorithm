#include <iostream>

using namespace std;

int main() {
    int a,b,c1,c2,d1,d2;

    a = 2;
    b = 7;

    c1 = ++a;
    c2 = a++;

    d1 = --b;
    d2 = b--;

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "d1 = " << d1 << endl;
    cout << "d2 = " << d2 << endl;

}