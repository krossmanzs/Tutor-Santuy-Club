#include<iostream>

using namespace std;

/*
RECORD

struct <nama_objek> {
    <tipe_data> <nama_properti>;
    <tipe_data> <nama_properti>;
    ..
    ...
};

*/

struct orang {
    int umur;
    string nama;
    float tb;
    string hobi;
    float bb;
};

void deskripsiOrang(orang manusia) {
    cout << "Deskripsi orang bernama " << manusia.nama << endl;
    cout << "Umur        : " << manusia.umur << endl;
    cout << "Berat badan : " << manusia.bb << endl;
    cout << "Tinggi badan: " << manusia.tb << endl;
    cout << "Hobi        : " << manusia.hobi << endl;
}

int main() {
    // <tipe_data> <nama_variabel>;
    orang udin, kucing;
    udin.nama = "udin";
    udin.umur = 15;
    udin.bb = 73.3;
    udin.tb = 172.5;
    udin.hobi = "game";

    kucing.nama = "cimeng";
    kucing.umur = 3;
    kucing.bb = 15;
    kucing.tb = 1;
    kucing.hobi = "tidur";

    deskripsiOrang(udin);
    deskripsiOrang(kucing);

    orang manusia[3];
    manusia[0].nama = "ujang";
    manusia[1].nama = "Agus";
    manusia[2].nama = "Upu";

    return 0;
}