#include <iostream>

using namespace std;
// tgl 27-nov-23
int main() {
    // int a = 5;      // initial value: 5
    // int b = 3;      // initial value: 3
    // int c = 2;      // initial value: 2
    // int result;     // initial value undetermined

    // a += b;
    // result = a - c;

    // cout << result;

    int a = 5, b = 3;
    auto d = a;         // auto yaitu akan otomatis mengetahui nilai nya itu type data nya apa
    decltype(b) e = 6;      // deklarasi type dari variable b yaitu int, ke variable e, sehingga variable e memiliki type data integer

    cout << "nilai d = " << d << endl;
    cout << "nilai e = " << e;
}