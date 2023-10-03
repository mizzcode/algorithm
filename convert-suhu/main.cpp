#include <iostream>

using namespace std;

int main() {
    // Judul program
    cout << "Program Convert Suhu Celsius To Fahrenheit" << endl;
    // declare variable
    double celsius;
    double fahrenheit;
    // assign the variable
    cout << "Masukkan Suhu Celsius:";
    cin >> celsius;
    // rumus convert celsius to fahrenheit
    fahrenheit = (9.0 / 5.0) * celsius + 32;
    // display to output for the result convert
    cout << "Suhu Celsius dalam Fahrenheit adalah: "<< fahrenheit;
}