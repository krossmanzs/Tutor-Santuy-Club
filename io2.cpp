#include<iostream>

using namespace std;

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;
    cin.ignore(); // gunain ketika di program kita ada getline
    
    cout << angka << endl;

    string nama;
    cout << "Masukkan nama: ";
    // getline(cin,nama);
    cin >> nama;
    cin.ignore();

    cout << "Namamu adalah: " << nama << endl;

    int umur;
    cout << "Masukkan umur: ";
    cin >> umur;
    cin.ignore();

    cout << "Umurmu adalah: " << umur << endl;

    return 0;
}