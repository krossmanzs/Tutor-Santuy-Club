#include<iostream>

using namespace std;

int main() {
    // * adalah reference   -> pointer
    // & adalah dereference -> utk mengambil alamat memori

    // a = 9 | b = 9 | c = 5

    int a = 5;
    int b = a;
    int *c = &a; // menyimpan alamat memori si a

    a = 5000; // kalau kita ubah a-nya, c nya pasti ngikut

    cout << "a: " << a << " memori: " << &a << endl;
    cout << "b: " << b << " memori: " << &b << endl;
    cout << "c: " << *c << " memori: " << c << endl << endl;

    int f = 999;
    int *g = &f;

    cout << f << endl;
    cout << *g << endl;

    f = 20;
    g = &a;

    cout << f << endl;
    cout << *g << endl << endl;

    int z = 9;
    int x = z;

    cout << z << endl;
    cout << x << endl;

    z = 123;
    cout << z << endl;
    cout << x << endl;

    return 0;
}