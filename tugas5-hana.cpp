#include<iostream>

using namespace std;

void tampilkanKalkulator(string pesan) {
    cout << pesan << endl;
}

int penjumlahan(int bilanganSatu, int bilanganDua, int hasil) {
    cout << "Bilangan pertama   : " << bilanganSatu << endl;
    cout << "Bilangan kedua     : " << bilanganDua << endl;
    hasil = bilanganSatu + bilanganDua;
    cout << "Maka Hasilnya  : " << hasil << endl;
}

int penjumlahan(int bilanganSatu, int bilanganDua) {
    cout << "Bilangan pertama   : " << bilanganSatu << endl;
    cout << "Bilangan kedua     : " << bilanganDua << endl;
    int hasil = bilanganSatu + bilanganDua;
    return hasil;
}

int pengurangan(int bilanganSatu, int bilanganDua) {
    cout << "Bilangan pertama   : " << bilanganSatu << endl;
    cout << "Bilangan kedua     : " << bilanganDua << endl;
    int hasil = bilanganSatu - bilanganDua;
    return hasil;
}

int pembagian(int bilanganSatu, int bilanganDua) {
    cout << "Bilangan pertama   : " << bilanganSatu << endl;
    cout << "Bilangan kedua     : " << bilanganDua << endl;
    int hasil = bilanganSatu / bilanganDua;
    return hasil;
}
int pembagian(int bilanganSatu, int bilanganDua, int hasil) {
    cout << "Bilangan pertama   : " << bilanganSatu << endl;
    cout << "Bilangan kedua     : " << bilanganDua << endl;
    hasil = bilanganSatu /  bilanganDua;
    cout << "Maka Hasilnya  : " << hasil << endl;
}
int perkalian(int bilanganSatu, int bilanganDua) {
    cout << "Bilangan pertama   : " << bilanganSatu << endl;
    cout << "Bilangan kedua     : " << bilanganDua << endl;
    int hasil = bilanganSatu * bilanganDua;
    return hasil;
}
int perkalian(int bilanganSatu, int bilanganDua, int hasil) {
    cout << "Bilangan pertama   : " << bilanganSatu << endl;
    cout << "Bilangan kedua     : " << bilanganDua << endl;
    hasil = bilanganSatu * bilanganDua;
    cout << "Maka Hasilnya  : " << hasil << endl;
}
int modulo(int bilanganSatu, int bilanganDua) {
    cout << "Bilangan pertama   : " << bilanganSatu << endl;
    cout << "Bilangan kedua     : " << bilanganDua << endl;
    int hasil = bilanganSatu % bilanganDua;
    return hasil;
}
int modulo(int bilanganSatu, int bilanganDua, int hasil) {
    cout << "Bilangan pertama   : " << bilanganSatu << endl;
    cout << "Bilangan kedua     : " << bilanganDua << endl;
    hasil = bilanganSatu % bilanganDua;
    cout << "Maka Hasilnya  : " << hasil << endl;
}

int main() {
    tampilkanKalkulator("Ayo Memulai Perhitungan");
    
    int hasilMain = 0;
    penjumlahan(3,6, hasilMain);

    cout << "Hasil mainnya: " << hasilMain << endl << endl;

    hasilMain = penjumlahan(3,6);
    cout << "Hasil dalam main: " << hasilMain << endl;

    int hasilPengurangan = pengurangan(6,3);
    cout << "Hasil pengurangan: " << hasilPengurangan << endl;

    return 0;
}

