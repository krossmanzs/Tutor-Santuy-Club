#include<iostream>

using namespace std;

/*
    Fungsi ada 2 tipe
    - Void      -> Prosedur
    - Non-Void  -> Fungsi

    Non-Void (Fungsi)
    Fungsi yang mengembalikan suatu nilai
    Nilainya bisa berbentuk semua tipe data
    int, char, String, dll

    Void (Prosedur)
    Fungsi tanpa mengembalikan suatu nilai
    hanya memproses suatu operasi

    penulisan fungsi
    <tipe data> <nama fungsi> (<parameter>, <parameter>, ...) {
        <aksi>
    }

    Aturan:
    - parameter itu opsional (bebas semau kita berapapun banyaknya)
*/

void tampilkanPesan(string pesan) {
    cout << pesan << endl;
}

void bunyikanKlakson() {
    cout << "Tinnn" << endl;
}

void penjumlahan(int bilSatu, int bilDua, int hasil) {
    cout << "Bilangan pertama   : " << bilSatu << endl;
    cout << "Bilangan kedua     : " << bilDua << endl;
    hasil = bilSatu + bilDua;
    cout << "Hasil penjumlahan  : " << hasil << endl;
}

int penjumlahan(int bilSatu, int bilDua) {
    cout << "Bilangan pertama   : " << bilSatu << endl;
    cout << "Bilangan kedua     : " << bilDua << endl;
    int hasil = bilSatu + bilDua;
    return hasil;
}

int pengurangan(int a, int b) {
    return a-b;
}

int main() {
    tampilkanPesan("Halo semuanya");
    bunyikanKlakson();
    bunyikanKlakson();

    int hasilMain = 0;
    penjumlahan(3,2, hasilMain);

    cout << "Hasil dalam main: " << hasilMain << endl << endl;

    hasilMain = penjumlahan(3,2);
    cout << "Hasil dalam main: " << hasilMain << endl;

    int hasilPengurangan = pengurangan(8,7);
    cout << "Hasil pengurangan: " << hasilPengurangan << endl;

    return 0;
}