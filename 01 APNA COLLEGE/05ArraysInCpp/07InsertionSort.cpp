// Insertion sort is a simple sorting algorithm that works by building the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, insertion sort is often used as a component of more complex algorithms, such as quicksort.

// The worst-case (and average-case) complexity of the insertion sort algorithm is O(n²).

// The best-case time complexity of insertion sort algorithm is O(n) time complexity.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array." << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the element of an array." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // --------------
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;

        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = current;
    }

    cout << "Printing The Sorted Array Using Selection Sort." << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}