#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int index, int key)
{
    if (index == size)
    {
        return -1;
    }

    if (arr[index] == key)
    {
        return index;
    }

    return firstOccurence(arr, size, index + 1, key);
}

int lastOccurence(int arr[], int size, int index, int key)
{

    if (index == size)
    {
        return -1;
    }

    int restArray = lastOccurence(arr, size, index + 1, key);

    if (restArray != -1)
    {
        return restArray;
    }

    if (arr[index] == key)
    {
        return index;
    }

    return -1;
}

int main()
{
    int arr[] = {4, 0, 22, 5, 8, 9, 22, 3};
    int s = sizeof(arr) / sizeof(int);

    cout << "The key at index : " << firstOccurence(arr, s, 0, 22) << endl; // The key at index : 2
    cout << "The key at index : " << lastOccurence(arr, s, 0, 22) << endl;  // The key at index : 6

    return 0;
}