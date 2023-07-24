#include<iostream>

using namespace std;

/*
    Rekursif
    memanggil fungsinya sendiri

    perbedaan fungsi rekursif dan fungsi biasa:
    - pada fungsi rekursif ada pemanggilan nama fungsinya sendiri dalam bodynya
*/

// fungsi rekursif
void penjumlahan(int a, int b) {
    penjumlahan(b,a);
}

// fungsi biasa (prosedur)
void pengurangan(int a, int b) {
    cout << a - b << endl;
}

void rekursif(int n) {
    if (n >= 0) {
        cout << "Halo, ini rekursif ke " << n << endl;
        rekursif(n-1);
    }
}

void printGenap(int n) {
    if((n <= 10)) {
        cout << n << " ";
        printGenap(n+2);
    }
}

int main() {
    // stackoverflow
    // prosesnya tidak berhenti samsek
    // solusinya, pencet ctrl + c untuk berenti
    // cout << "test" << endl;
    // main();

    rekursif(5);
    printGenap(0);
    return 0;
}