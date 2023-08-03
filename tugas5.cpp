#include<iostream>

using namespace std;

int penjumlahan(int a, int b) {
    int hasil = a + b;
    return hasil;
}

int pengurangan(int a, int b) {
    return a - b;
}

int perkalian(int a, int b) {
    return a * b;
}

double pembagian(double a, double b) {
    return a / b;
}

void printMenu() {
    cout << "Operasi:\n";
    cout << "1. +\n";
    cout << "2. -\n";
    cout << "3. x\n";
    cout << "4. /\n";
}

int main() {
    /*
        TUGAS
        Buat kalkulator kaya tugas ke 3, tapi gabungin menggunakan
        fungsi
    */

    char lanjut = 'y';

    do {
        int operasi, angkaSatu, angkaDua;
        double hasil;
        printMenu(); // print menu
        cout << "Pilih: "; // menampilkan perintah utk pilih operasi
        cin >> operasi; // memasukkan user input kedalam operasi

        // memasukkan angka
        cout << "Masukin nilai pertama: ";
        cin >> angkaSatu;
        cout << "Masukin nilai kedua: ";
        cin >> angkaDua;

        // melakukan percabangan dan mendapatkan hasil sesuai operasi
        switch (operasi) {
            case 1:
                hasil = penjumlahan(angkaSatu, angkaDua);
                break;
            case 2:
                hasil = pengurangan(angkaSatu, angkaDua);
                break;
            case 3:
                hasil = perkalian(angkaSatu, angkaDua);
                break;
            case 4:
                hasil = pembagian(angkaSatu, angkaDua);
                break;
            default: // akan dijalankan ketika kasus" diatas tidak terpenuhi
                cout << "Operasi yang anda masukkan tidak ada!";
                break;
        }

        cout << "Hasilnya adalah: " << hasil << endl;

        cout << "Apakah masih ingin lanjut? (y/n): ";
        cin >> lanjut;

    } while (lanjut == 'y');
}