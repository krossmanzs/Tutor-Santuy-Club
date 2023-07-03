#include<iostream>

using namespace std;

int main() {
    // tipe data

    // deklarasi
    int umur;
    float tinggi;
    string nama; 

    // definisi

    // hardcoded / ditulis pada program
    umur = 17;
    tinggi = 170.6;
    nama = "Andini";
    umur = 19;
    nama = "Udin Keren";

    cout << "nama: " << nama << endl;
    cout << "tinggi: " << tinggi << endl;
    cout << "umur: " << umur << endl;

    // tipe data laen
    // bool = anggap aja kaya saklar (1/0) (hidup/mati)
    // char = karakter (1 huruf saja)
    // long = mirip kaya int cuma dia bisa menyimpan nilai lebih banyak
    //        sebagai contoh int cuma bisa -2,147,483,648 to 2,147,483,647, 
    //        long bisa -(2^63) to (2^63)-1
    // double = mirip kaya float cuma nilai yang disimpan lebi banyak

    bool lapar = true; // true = 1 | false = 0
    string indexNilai = "AB";
    char hurufA = 'A';
    long angkaBanyak = 300000000;
    double ipk = 5.2;

    cout << endl;
    cout << "lapar: " << lapar << endl;
    cout << "hurufA: " << hurufA << endl;
    cout << "indexNilai: " << indexNilai << endl;
    cout << "angkaBanyak: " << angkaBanyak << endl;
    cout << "ipk: " << ipk << endl;

    return 0;
}