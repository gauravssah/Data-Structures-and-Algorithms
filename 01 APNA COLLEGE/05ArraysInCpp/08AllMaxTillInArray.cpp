#include <iostream>
using namespace std;

int main()
{
    int mx = 0;
    int n;
    cout << "Enter the size of an array." << endl;
    cin >> n;
    int arr[n];

    cout << "Enter the elements in the array." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Printing the all time max in array." << endl;

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << " ";
    }

    return 0;
}