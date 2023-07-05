#include<iostream>

using namespace std;

int main() {
    /*
        FOR (PENCACAHAN)
        Kita akan mengulang hingga batas yang sudah ditentukan.

        for(variabel; kondisi; increment) {
            aksi
        }
    */

    for (int angkaSekarang = 1; angkaSekarang <= 10; angkaSekarang++) {
        cout << angkaSekarang << endl;
    }

    /*
        papan: ######
        panjang: 3
        kotak: 
        ######
        ######
        ######

        panjang: 4
        ######
        ######
        ######
        ######
    */

    int panjang;
    cout << "Masukkan panjang papan: ";
    cin >> panjang;

    for (int i = 0; i < panjang; i++) {
        int tengah = panjang / 2;
        if (i == tengah) {
            cout << endl;
        } else {
            cout << "######" << endl;
        }
    }

    int angkaLagi = 10;
    for(int i = 0; i < angkaLagi; i+=2) {
        cout << "Angka lagi: " << angkaLagi << endl; 
    }

    // tentukan hasil penjumlah dari angka 1 hingga n
    int hasil = 0;

    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        hasil += i;
    }
    
    cout << "Hasil: " << hasil << endl;

    return 0;
}