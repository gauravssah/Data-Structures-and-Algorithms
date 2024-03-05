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

    int iteration = 1;

    while (iteration < n)
    {
        for (int i = 0; i < n - iteration; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }

        iteration++;
    }

    cout << "Array after BubbleSorting." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}