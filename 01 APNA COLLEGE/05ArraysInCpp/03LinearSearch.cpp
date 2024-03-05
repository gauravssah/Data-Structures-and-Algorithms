#include <iostream>
using namespace std;

// Time complexity - O(n);
int linearSearch(int arrr[], int siz, int val)
{
    for (int i = 0; i < siz; i++)
    {
        if (arrr[i] == val)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of an Array." << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the Elements for array." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Your Elements are saved." << endl;

    cout << "Enter the element to Search in array" << endl;
    int key;
    cin >> key;
    int res = linearSearch(arr, n, key);
    cout << res;

    return 0;
}