#include<iostream>

using namespace std;

void merge(int data[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    /* create temp data arrays */
    int L[n1], R[n2];
    /* Copy data to temp data arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = data[l + i];
    for (j = 0; j < n2; j++)
        R[j] = data[m + 1 + j];
    /* Merge the temp data arrays back into data[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            data[k] = L[i];
            i++;
        }
        else
        {
            data[k] = R[j];
            j++;
        }
        k++;
    }
    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        data[k] = L[i];
        i++;
        k++;
    }
    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        data[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
sub-array of data to be sorted */
void mergeSort(int data[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = (l + (r)) / 2;
        // Split first and second halves
        mergeSort(data, l, m);
        mergeSort(data, m + 1, r);
        // Finally merge first and second halves
        merge(data, l, m, r);
    }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

int main() {
    int arr[] = {5,7,1,0,3,1};
    int size = 6;
    mergeSort(arr, 0, size-1);

    printArray(arr, size);
    return 0;
}