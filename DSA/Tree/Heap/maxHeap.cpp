#include <bits/stdc++.h>
using namespace std;

void swap(int*, int*);

void heapify(int arr[], int size, int i)
{
    if (size == 1)
        cout << "Single element in the heap" << endl;

    else
    {
        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 1;

        if (l < size && arr[i] > arr[largest])
            largest = l;

        if (r < size && arr[r] > arr[largest])
            largest = r;

        if (largest != i)
        {
            swap(&arr[i], &arr[largest]);
            heapify(arr, size, largest);
        }
    }
}



int main()
{

    return 0;
}