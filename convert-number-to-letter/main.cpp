// Algoritma konversi dari angka ke huruf

// deklarasi variabel n untuk integer dan h untuk string
// masukan input n
// buat kondisi jika n lebih dari sama dengan 80 dan kurang dari sama dengan 100 maka beri nilai A untuk variabel h
// jika n lebih dari sama dengan 70 dan kurang dari sama dengan 79 maka beri nilai B untuk variabel h
// jika n lebih dari sama dengan 60 dan kurang dari sama dengan 69 maka beri nilai C untuk variabel h
// jika n lebih dari sama dengan 50 dan kurang dari sama dengan 59 maka beri nilai D untuk variabel h
// jika n kurang dari sama dengan 49 beri nilai E untuk variabel h
// selain itu berikan pesan ke user bahwa hanya nilai 0 sampai 100 saja yang bisa diterima untuk konversi nilai ke huruf

// output h

#include <iostream>

using namespace std;

int main() {
   int n;
   string h;

   cout << "Masukkan Angka: ";
   cin >> n;

   if (n >= 80 && n <= 100) {
      h = "A";
   } else if (n >= 70 && n <= 79) {
      h = "B";
   } else if (n >= 60 && n <= 69) {
      h = "C";
   } else if (n >= 50 && n <= 59) {
      h = "D";
   } else if (n <= 49) {
      h = "E";
   } else {
      h = "Sesuai algoritma bahwa yang diterima adalah angka dari 0 sampai 100";
   }

   cout << "Selamatt!! Nilai eKoen = " << h;
}