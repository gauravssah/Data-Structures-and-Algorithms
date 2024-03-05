// The Selection sort algorithm has a time complexity of O(n^2) and a space complexity of O(1) since it does not require any additional memory space apart from a temporary variable used for swapping.

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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout << "Array After Selection Sort" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}