#include <iostream>
using namespace std;

int nilai_siswa [] = {75,80,77,91,63};  // init array
int n, result = 0;

int main ()
{
    for ( n = 0 ; n < 5 ; ++n )
    {
        result += nilai_siswa[n];
        
        cout << "Nilai siswa ke-" << n+1 << ": " << nilai_siswa[n] << endl;
    }

    cout <<  "Total seluruh nilai siswa adalah " << result << endl;
    #include "test.h"
}