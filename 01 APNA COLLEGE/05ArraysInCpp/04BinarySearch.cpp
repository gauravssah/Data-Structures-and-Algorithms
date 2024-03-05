#include <iostream>
using namespace std;

// Time complexity - O(log2^n)
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size;

    while (start <= end)
    {
        int mid = start + end;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of Array." << endl;
    cin >> n;

    // Array must be in Sorted order.
    int arr[n];
    cout << "Enter the element of array." << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element that you want to search in array." << endl;
    cin >> key;

    cout << binarySearch(arr, n, key);
}