#include <iostream>

using namespace std;
// tgl 27-nov-23
int main() {
    int a = 5;      // initial value: 5
    int b = 3;      // initial value: 3
    int c = 2;      // initial value: 2
    int result;     // initial value undetermined

    a += b;
    result = a - c;

    cout << "result = " << result << endl;

    int d = 5, e = 3;
    auto f = d;         // auto yaitu akan otomatis mengetahui nilai nya itu type data nya apa
    decltype(f) g = 6;      // deklarasi type dari variable f yaitu int, ke variable g, sehingga variable g memiliki type data integer

    cout << "nilai f = " << f << endl;
    cout << "nilai g = " << g;
}