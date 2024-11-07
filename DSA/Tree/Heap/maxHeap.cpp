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

void insert(int arr[], int newNum, int size)
{
    if(size == 0)
    {
        arr[0] = newNum;
        size += 1;
    }

    else
    {
        arr[size] = newNum;
        size += 1;
        for (int i = (size / 2) - 1; i >= 0; i--)
        {
            heapify(arr, size, i);
        }
        
    }
}

void deletion(int array[], int num, int size)
{
    int i;
    for(i=0;i<size;i++){
        if(num==array[i]){
            break;
        }
    }
    swap(&array[i],&array[size-1]);
    size=size-1;
    for(int i=size/2-1;i>=0;i--){
        heapify(array,size,i);
    }
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size, i++)
    {
        cout << i << " ";
    }
}

int main()
{

    return 0;
}