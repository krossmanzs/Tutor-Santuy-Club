#include<iostream>

using namespace std;

int main() {
    /*
        TUGAS
        Menghitung penjumlahan dari bilangan genap 1 hingga n
    */

    /*
        7
        2+4+6 = 12
    */

    bool lanjut = false;

    //kita looping jika masih lanjut
    cout << "Sebelum while" << endl;
    while (lanjut) { // ketika masih lanjut
        // maka: Menghitung penjumlahan dari bilangan genap 1 hingga n

        int n; // nilai max
        int hasil = 0; // total penjumlahan
        char pilihan; // menyimpan pilihan user (y/n)

        cout << "Masukkan bilangan n: ";
        cin >> n; // 7

        // 1 2 3 4 5 7
        // 2 + 4 + 6 
        for(int i = 1; i <= n; i++) {
            // jika i adalah bilangan genap
            cout << i << " ";
            if(i % 2 == 0) {
                // maka hasil ditambah dengan i
                hasil += i;
            }
        }

        cout << "Hasilnya adalah: " << hasil << endl;

        cout << "Masih mau lanjut? (y/n): ";
        cin >> pilihan;
        
        if(pilihan == 'n') {
            lanjut = false;
        }
    }

    cout << "Sesudah while" << endl;

    return 0;
}