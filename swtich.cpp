#include<iostream>

using namespace std;

int main() {
    /*
        SWITCH
        salah satu jenis percabangan mirip seperti ifelseif
        switch itu anggap aja kaya saklar, disetiap tombolnya ada aksinya
        Ketika semua kondisi tidak terpenuhi, maka terdapat default case.
    */

    // definisi
    int lantai;

    cout << "Kamu ingin ke lantai berapa? ";
    cin >> lantai;
    
    if (lantai == 1) { // false
        cout << "Menuju lantai 1" << endl;
    } else if (lantai == 2) { // false
        cout << "Menuju lantai 2" << endl;
    } else if (lantai == 3) { // false
        cout << "Menuju lantai 3" << endl;
    } else if (lantai == 4) { // false
        cout << "Menuju lantai 4" << endl;
    } else if (lantai == 5) { // false
        cout << "Menuju lantai 5" << endl;
    } else {
        cout << "Lantai tidak tersedia!" << endl;
    }

    switch(lantai) {
        case 1:
            cout << "Menuju lantai 1" << endl;
            main();
            break;
        case 2:
            cout << "Menuju lantai 2" << endl;
            break;
        case 3:
            cout << "Menuju lantai 3" << endl;
            break;
        case 4:
            cout << "Menuju lantai 4" << endl;
            break;
        case 5:
            cout << "Menuju lantai 5" << endl;
            break;
        default:
            cout << "Lantai tidak tersedia!" << endl;
    }

    int pilihanMenu;
    cout << "1. Beli makanan" << endl;
    cout << "2. Order Gofud" << endl;
    cout << "3. Jual Barang" << endl;
    cout << "4. Minta pinjol" << endl;
    cout << "Pilih menu: ";
    cin >> pilihanMenu;

    switch (pilihanMenu)
    {
    case 1:
        cout << "Membeli makanan" << endl;
        // beliMakan();
        break;
    case 2:
        cout << "Melakukan order gofud" << endl;
        // orderGofud();
        break;
    case 3:
        cout << "Menjual barang" << endl;
        break;
    case 4:
        cout << "Njir pinjol" << endl;
        break;
    default:
        cout << "Menu tidak tersedia" << endl;
        break;
    }

    return 0;
}