#include<iostream>

using namespace std;

int main() {
    string buah1, buah2, buah3;
    buah1 = "pisang";
    buah2 = "apel";
    buah3 = "manggis";

    cout << buah1 << endl;
    cout << buah2 << endl;
    cout << buah3 << endl;

    // tipe_data nama_variabel[ukuran]
    // ukuran != index max
    string buah[9];
    buah[0] = "pisang";
    buah[1] = "apel";
    buah[2] = "manggis";
    buah[3] = "manggis";
    buah[4] = "manggis";
    buah[5] = "manggis";
    buah[6] = "manggis";
    buah[7] = "manggis";
    buah[8] = "manggis";

    // looping i dari 0 sampai 2
    for (int i = 0; i < 15; i++) {
        cout << i << buah[i] << endl;
    }
    

    return 0;
}