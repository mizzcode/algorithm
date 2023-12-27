#include <iostream>

int nilai_siswa [] = {75,80,77,91,63};  // init array
int n, result = 0;

int main ()
{
    for ( n = 0 ; n < 5 ; ++n )
    {
        result += nilai_siswa[n];
        
        std::cout << "Nilai siswa ke-" << n+1 << ": " << nilai_siswa[n] << std::endl;
    }

    std::cout <<  "Total seluruh nilai siswa adalah " << result << std::endl;
    #include "test.h"
}