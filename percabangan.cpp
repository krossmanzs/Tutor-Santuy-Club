#include<iostream>

using namespace std;

int main() {
    /*
        PERCABANGAN
        kondisi
            jika terpenuhi maka akan menjalankan aksi
        
        if
        percabangan ketika kondisi terpenuhi

        else-if
        dijalankan ketika kondisi sebelumnya tidak terpenuhi,
        maka akan dicek kondisi berikutnya.
        
        else
        ketika semua kondisi sebelumnya tidak ada yg terpenuhi,
        maka akan menjalankan else
    */

    /*
        KONDISI DAN KOMPARASI
        Struktur kondisi: a <kondisi> b
        Contoh kondisi  : a == b

        == sama dengan (apakah a sama dengan b?)
        != tidak sama dengan (apakah a tidak sama dengan b?)
        >  lebih dari (apakah a lebih dari b?)
        >= lebih dari sama dengan (apakah a lebih dari sama dengan b?)
        <  kurang dari (apakah a kurang dari b?)
        <= kurang dari sama dengan (apakah a kurang dari sama dengan b?)

        && AND (bernilai true jika kedua nilai bernilai true) cth. true && true = true , true && false = false
        || OR (bernilai true jika salah satu nilai bernilai true) cth. true || true = true , true || false = true 
        !  NOT (memutar balikkan fakta), cth !true = false atau !false = true
    */

    // definisi
    int angka1 = 5;
    int angka2 = 45;

    if(angka1 == angka2) { // false
        cout << "Benar" << endl;
    } else {
        cout << "Salah" << endl;
    }

    bool lapar = false;
    bool haus = false;

    if (lapar == true) { // false == true -> false
        cout << "Makan dong" << endl;
    } else if (haus == true) { // haus == true -> false
        cout << "Minum dong" << endl;
    } else {
        cout << "Kamu tidak lapar dan tidak haus" << endl;
    }

    // definisi ulang
    angka1 = 8;
    angka2 = 10;

    // jika angka1 tidak sama dengan angka 2 dan
    // angka1 + 2 tidak sama dengan 10

    // ((8 != 10) && (8 + 2 == 10))
    // (true && (10 == 10))
    // (true && true)
    // true
    if ((angka1 != angka2) && (angka1 + 2 == 10)) {
        cout << "Terpenuhi" << endl;
    } else {
        cout << "Tidak terpenuhi" << endl;
    }

    // definisi
    int lantai = 3;
    
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

    // nested if
    lantai = 10;
    lapar = false;
    haus = true;

    if (lantai == 1) { // true
        cout << "Menuju lantai 1" << endl;
        if(lapar == true) {
            cout << "Saya lapar, saya akan menuju tempat makan" << endl;
        }
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
        if (haus == true) { // true == true
            cout << "Mungkin kamu haus, minum dulu" << endl;
        }
    }

    lapar = true;
    haus = true;

    /*
        true && true = true
        true || true = true
        !true = false
    */

    if(lapar && haus) { // (lapar == true && haus == true)
        cout << "Kamu lapar dan haus" << endl;
    } else if(lapar || haus) { // lapar == true || haus == true
        cout << "Kamu lapar ataupun haus" << endl;
    } else if(!lapar) { // !lapar = true
        cout << "Kamu tidak lapar" << endl;
    }

    return 0;
}