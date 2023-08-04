#include<iostream>

using namespace std;

int main() {
    int arr[] = {3,4,1,2,8,9};
    int angkaYangDicari;
    bool ada = false;

    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> angkaYangDicari;

    for (int i = 0; i < 6; i++) {
        // cek apakah array dengan index i adalah 8
        if(arr[i] == angkaYangDicari) {
            ada = true;
            break;
        }
    }

    if(ada) { // ada == true
        cout << "Angka " << angkaYangDicari << " ada";
    } else {
        cout << "Angka " << angkaYangDicari << " tidak ada";
    }

    return 0;
}