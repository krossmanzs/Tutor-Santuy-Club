#include<iostream>

using namespace std;

/*
    Fungsi Passing by Value
    Fungsi pada parameternya diterima dengan hanya
    nilainya saja

    Fungsi Passing by Reference
    Fungsi pada parameter terdapat pointer, dimana
    variabel aslinya bisa kita ubah
*/

void ubahAngkaByValue(int angka) {
    angka = 5;
}

void ubahAngkaByReference(int *angka) {
    *angka = 999;
}

void penjumlahan(int a, int b, int *hasil) {
    *hasil = a + b;
}

int main() {
    int a = 10;
    ubahAngkaByValue(a);
    cout << a << endl;

    ubahAngkaByReference(&a);
    cout << a << endl;

    int angkaSatu = 10, angkaDua = 12, angkaHasil;
    penjumlahan(angkaSatu, angkaDua, &angkaHasil);
    
    return 0;
}