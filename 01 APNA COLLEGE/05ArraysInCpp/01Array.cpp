#include <iostream>
using namespace std;

int main()
{
    char arry[6] = {'G', 'A', 'U', 'R', 'A', 'V'};

    for (int i = 0; i < 6; i++)
    {
        cout << arry[i];
    }
    cout << endl;
    int n;
    cout << "Enter The Value of N." << endl;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Printing the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
    cout << "End" << endl;

    return 0;
}