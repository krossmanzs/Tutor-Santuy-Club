#include<iostream>

using namespace std;

int main() {
    int matriks[2][3] = {
        {2, 9, -2}, //  0
        {5, 7, 4} //    1
    //   0  1  2
    };

    // cout << matriks[0][2] << endl;
    // cout << matriks[1][0] << endl;

    for (int baris = 0; baris < 2; baris++) {
        for (int kolom = 0; kolom < 3; kolom++) {
            cout << matriks[baris][kolom] << " ";
        }
        cout << endl;
    }

    int matriksSatu[2][2] = {
        {1, 2},
        {3, 4}
    };

    int matriksDua[2][2] = {
        {3, 4},
        {7, 8}
    };

    int matriksHasil[2][2];

    // ngitung matriks dan masukan kedalam matriksHasil
    for (int baris = 0; baris < 2; baris++) {
        for (int kolom = 0; kolom < 2; kolom++) {
            matriksHasil[baris][kolom] = 1 + 3;
        }
    }

    cout << endl;

    // print matriks hasil
    for (int baris = 0; baris < 2; baris++) {
        for (int kolom = 0; kolom < 2; kolom++) {
            cout << matriksHasil[baris][kolom] << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}