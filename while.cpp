#include<iostream>

using namespace std;

int main() {
    /*
        WHILE
        Perulangan yang akan berjalan ketika kondisinya masih
        terpenuhi

        while(kondisi) {
            aksi/body
        }
    */

    char pilihan = 'y'; // untuk menyimpan karakter y/n

    // lanjut = false
    while(pilihan == 'y') { // lanjut == true -> false
        int angka1, angka2;

        cout << "angka 1: ";
        cin >> angka1;
        cout << "angka 2: ";
        cin >> angka2;
        cout << "Hasil: " << angka1 + angka2 << endl;
        cout << "Mau lanjut? (y/n): ";
        cin >> pilihan;

        // pilihan = n
        // lanjut = false
        
        // if (pilihan == 'n') { // true
        //     lanjut = false;
        // }
    }

    int angka = 0;

    while(angka < 5) {
        cout << angka << endl;
        angka = angka + 1;
    }

    bool selesaiBelanja = false;

    // ketika gw belom kelar belanja, gw bakal borong terus
    while(selesaiBelanja == false) {
        // borong
        // sudah beli sesuatu
        char pilihan;
        cout << "Pembayaran selesai, kamu mau belanja lagi? (y/n): ";
        cin >> pilihan;

        if (pilihan == 'n') {
            selesaiBelanja = true;
        }
    }

    return 0;
}