#include <iostream>

using namespace std;

int main() {
    // declare variable
    int no;
    int tagihan = 0;
    string daftarPesanan = "";
    string confirm;

    // Perulangan While
    while (true) {
        cout << "--------------------" << endl;
        cout << "MENU" << endl;
        cout << "--------------------" << endl;
        cout << "1. Makanan" << endl;
        cout << "2. Minuman" << endl;
        cout << "3. Bayar" << endl;
        cout << "4. Exit" << endl;
        cout << "--------------------" << endl;
        cout << "Pilihan anda 1/2/3/4? ";

        cin >> no;

        if (no == 1) {
            cout << "--------------------" << endl;
            cout << "MENU MAKANAN" << endl;
            cout << "--------------------" << endl;
            cout << "1. Nasi Goreng (Rp 15.000)" << endl;
            cout << "2. Mie Goreng (Rp 12.000)" << endl;
            cout << "3. Menu Utama" << endl;
            cout << "--------------------" << endl;
            cout << "Pilihan anda 1/2/3? ";

            cin >> no;

            if (no == 1) {
                tagihan += 15000;
                cout << "Anda Pesan Nasi Goreng!" << endl;
                daftarPesanan += "Nasi Goreng (Rp 15.000) = 15000\n";
            }
        } else if (no == 2) {
            cout << "--------------------" << endl;
            cout << "MENU MINUMAN" << endl;
            cout << "--------------------" << endl;
            cout << "1. Es Teh Manis (Rp 5.000)" << endl;
            cout << "2. Teh Manis Panas (Rp 5.000)" << endl;
            cout << "3. Es Kopi (Rp 8.000)" << endl;
            cout << "4. Kopi Panas (Rp 7.000)" << endl;
            cout << "5. Menu Utama" << endl;
            cout << "--------------------" << endl;
            cout << "Pilihan anda 1/2/3/4/5? ";

            cin >> no;

            if (no == 1) {
                tagihan += 5000;
                cout << "Anda Pesan Es Teh Manis" << endl;
                daftarPesanan += "Es Teh Manis (Rp 5.000) = 5000\n";
            }
        } else if (no == 3) {
            cout << "--------------------" << endl;
            cout << "DAFTAR PESANAN" << endl;
            cout << "--------------------" << endl;
            cout << daftarPesanan;
            cout << "--------------------" << endl;
            cout << "Total Bayar : " <<  tagihan << endl;
            cout << "Kembali ke Menu Utama (Y/T) : ";

            cin >> confirm;

            if (confirm == "T" || confirm == "t") {
                break;
            }
        } else if (no == 4) {
            break;
        } else if (cin.fail()) {
            cerr << "Pilihan hanya boleh angka atau number!" << endl;
            break;
        } else {
            cout << "Pilihan sulit dimengerti semoga harimu menyenangkan!" << endl;
        }
    }

    cout << "Sayonara ~";
}