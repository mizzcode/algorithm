#include <iostream>

using namespace std;

int main() {
    int numbers [14];

    // numbers[0] = 1;
    // numbers[1] = 2;
    // numbers[2] = 3;
    // numbers[3] = 4;
    // numbers[4] = 5;
    // numbers[5] = 6;
    // numbers[6] = 7;
    // numbers[7] = 8;
    // numbers[8] = 9;
    // numbers[9] = 10;
    // numbers[10] = 11;
    // numbers[11] = 12;
    // numbers[12] = 13;
    // numbers[13] = 14;

    for (int i = 0; i < sizeof(numbers); i++)
    {
        numbers[i] = i + 1;
    }

    cout << numbers[13];
}