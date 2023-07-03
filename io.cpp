#include<iostream>

using namespace std;

int main() {
    int umur = 17; // harcoded

    string kata;
    cout << "masukkan kata: ";
    getline(cin,kata);
    cout << kata << endl;

    int angka;
    cout << "masukkan angka: ";
    cin >> angka;
    cin.ignore(); // karena ada getline
    cout << angka << endl;
    cout << (char)angka << endl;

    char huruf;
    cout << "masukkan huruf: ";
    cin >> huruf;
    cin.ignore();
    cout << huruf << endl;
    cout << (int)huruf << endl;
    return 0;
}