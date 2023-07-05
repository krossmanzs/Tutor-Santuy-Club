        
#include<iostream>

using namespace std;

int main() {
    /*
        a++ -> menambahkan satu angka dari variabel a
        i++ -> menambahkan satu angka dari variabel i
        b-- -> mengurangi satu angka dari variabel b
        c++ -> menambahkan satu angka dari variabel c

        kita menambahkan/mengurangi nilai tersebut sebanyak 1 angka

        b+=2 -> menambahkan dua angka dari variabel b
        b-=2 -> mengurangi dua angka dari variabel b
        b/=2 -> membagi angka dua dari variabel b
        b*=2 -> mengalikan angka dua dari variabel b
        b%=2 -> mencari nilai bagi dengan angka 2 dari variabel b
    */

    int a = 5;
    cout << a++ << endl;
    cout << a << endl;
    cout << ++a << endl;
    cout << a << endl << endl;

    int b = 10;
    --b; // b = b - 1
    cout << b++ << endl;
    cout << b << endl << endl;

    int c = 2;
    c+=2; // c = c + 2;
    c*=3; // c = c * 3;
    cout << c << endl;
    c%= 1;
    cout << c << endl;

    return 0;
}