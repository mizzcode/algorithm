// Algoritma konversi dari angka ke huruf

// deklarasi variabel n untuk integer dan h untuk string
// masukan nilai n
// membuat kondisi jika n lebih dari 100 maka beri pesan ke user bahwa "angka 0 sampai 100 saja yang bisa di konversi ke huruf" untuk variable h
// atau jika n lebih dari sama dengan 80 maka beri nilai "A" untuk variable h
// atau jika n lebih dari sama dengan 70 maka beri nilai "B" untuk variable h
// atau jika n lebih dari sama dengan 60 maka beri nilai "C" untuk variable h
// atau jika n lebih dari sama dengan 50 maka beri nilai "D" untuk variable h
// selain itu beri nilai "E" untuk variabel h

// output h

#include <iostream>

using namespace std;

int main() {
   int n;
   string h;

   cout << "Masukkan Angka: ";
   cin >> n;
   
   if (n > 100) {
      h = "Hanya angka 0 sampai 100 saja yang bisa di konversi ke huruf";
   } else if (n >= 80 && n <= 100) {
      h = "A";
   } else if (n >= 70 && n <= 79) {
      h = "B";
   } else if (n >= 60 && n <= 69) {
      h = "C";
   } else if (n >= 50 && n <= 59) {
      h = "D";
   } else {
      h = "E";
   }

   cout << "Selamatt!! Nilai eKoen = " << h;
}
