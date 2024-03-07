// The average-case time complexity of Quicksort is O(n*log(n)), which is quicker than Merge Sort, Bubble Sort, and other sorting algorithms. However, the worst-case time complexity is O(n^2) when the pivot choice consistently results in unbalanced partitions.

/*
Here is a breakdown of the time complexity of quicksort:
        Best case: O(n log n)
        Average case: O(n log n)
        Worst case: O(n^2)
*/

#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r)
{

    int pivot = arr[r];
    int i = l - 1;

    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }

    swap(arr, i + 1, r);
    return i + 1;
}

void quickSort(int arr[], int l, int r)
{

    if (l < r)
    {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1, 23, 22, 54, 65, 89, 80, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}