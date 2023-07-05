#include<iostream>

using namespace std;

int main() {
    /*
        DO WHILE
        Perulangan mirip kaya while tetapi bedanya hanya di peletakan aksinya

        do while, dia akan menjalankan aksi terlebih dahulu baru dicek

        do {
            aksi
        } while(kondisi);
    */

    char pilihan = 'x';

    do {
        int angka1, angka2;

        cout << "angka 1: ";
        cin >> angka1;
        cout << "angka 2: ";
        cin >> angka2;
        cout << "Hasil: " << angka1 + angka2 << endl;
        cout << "Mau lanjut? (y/n): ";
        cin >> pilihan; 
    } while(pilihan == 'y') ;

    do {
        // print menu
        cout << "1. Order" << endl;
        cout << "2. Minum" << endl;
        cout << "3. Belanja" << endl;
        cout << "4. Keluar" << endl;
        cout << "Kamu memilih apa? ";
        cin >> pilihan;

        if(pilihan == '4') {
            cout << "Terimakasih" << endl;
        } else if (pilihan == '1') {
            cout << "Kamu memilih order" << endl;
        } else if (pilihan == '2') {
            cout << "Kamu memilih Minum" << endl;
        } else if (pilihan == '3') {
            cout << "Kamu memilih Belanja" << endl;
        } else {
            cout << "Pilihan tidak ada dalam menu! keluar." << endl;
        }

    } while(pilihan == '1' || pilihan == '2' || pilihan == '3');

    return 0;
}