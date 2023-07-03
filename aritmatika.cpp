#include<iostream>

using namespace std;

int main() {
    /*
        Aritmatika
        + penjumlah
        - pengurangan
        * perkalian
        / pembagian
        % modulo (sisa bagi)
    */

    // deklarasi
    float angka1, angka2;
    float penjumlahan, pengurangan, perkalian, mod;
    float pembagian;

    // input
    cout << "Masukkan angka1: ";
    cin >> angka1;
    cout << "Masukkan angka2: ";
    cin >> angka2;

    // definisi
    penjumlahan = angka1 + angka2;
    pengurangan = angka1 - angka2;
    pembagian = angka2 / pengurangan;
    perkalian = penjumlahan * pembagian;
    mod = (int)angka2 % (int)angka1;

    cout << penjumlahan << endl;
    cout << pengurangan << endl;
    cout << pembagian << endl;
    cout << perkalian << endl;
    cout << mod << endl;

    //              angka1 = 20, angka2 = 4
    cout << ((angka1 + angka2) * angka1 / angka2 - angka1) << endl;
    /*
        langkah":
        20 + 4 * 20 / 4 - 20
        20 + 80 / 4 - 20
        20 + 20 - 20
        20

        langkah":
        (20 + 4) * 20 / 4 - 20
        24 * 20 / 4 - 20
        480 / 4 - 20
        120 - 20
        100
    */


    return 0;
}