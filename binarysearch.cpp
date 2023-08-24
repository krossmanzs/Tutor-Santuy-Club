#include <iostream>

using namespace std;
 
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

int binarySearch(int arr[], int kiri, int kanan, int x)
{
    int count = 1;
    while (kiri <= kanan) {
        

        int m = (kiri + kanan) / 2;
 
        if (arr[m] == x) {
            return m;
        }
 
        if (arr[m] < x) {
            kiri = m + 1;
        } else {
            kanan = m - 1;
        }
        cout << count << endl;
        count++;
    }
 
    return -1;
}
 
int main(void)
{

    int arr[] = {0, 1, 3, 4, 5, 6};
    int size = 6;
    int x = 4;

    printArray(arr, size);

    int result = binarySearch(arr, 0, size - 1, x);
    if (result == -1) {
        cout << "Element is not present in array";
    } else {
        cout << "Element is present at index " << result;
    }
    return 0;
}