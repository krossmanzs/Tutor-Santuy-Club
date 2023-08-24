#include <iostream>
using namespace std;

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int size) {
  for (int i = 0; i < size - 1; i++) { // 0-4
    int min = i; // menyimpan index dari nilai terkecil

    for (int j = i + 1; j < size; j++) {
      if (array[j] < array[min])
        min = j;
    }

    swap(&array[min], &array[i]);
  }
}

int main() {
  int data[] = {5, 7, 1, 0, 3, 4};
  int size = 6;
  selectionSort(data, size);
  printArray(data, size);
}