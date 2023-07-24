#include<iostream>

using namespace std;

int main() {
    /*
        BREAK
        berhenti dari suatu loop

        CONTINUE
        melangkah satu proses loop
    */

    // 1 2 3 4 5 6 7
    for(int i = 1; i < 8; i++) {
        cout << i << " ";
        if(i == 3) {
            break;
        }
    }

    cout << endl;

    // 1 2 3 5 7 8
    for(int i = 1; i < 9; i++) {
        if(i == 4) {
            continue;
        } if (i == 2) {
            continue;
        } else {
            cout << i << " ";
        }
    }

    return 0;
}