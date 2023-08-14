#include<iostream>

using namespace std;

void swap(int *x, int *y) {
    int *tmp = y;
    y = x;
    x = tmp;
}

int main() {
    int arr[] = {2,1,4,3,0,5};
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6-i; j++) {
            if (arr[j] > arr[j+1] ) {
                swap(arr[j], arr[j+1]);
            }
        }
        cout << endl;
    }

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}