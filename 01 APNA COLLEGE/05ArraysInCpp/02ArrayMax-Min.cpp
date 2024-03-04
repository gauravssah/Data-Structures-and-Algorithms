#include <iostream>
using namespace std;

int main()
{
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    cout << "Enter the Size of Array" << endl;
    int n;
    cin >> n;
    int myArray[n];

    cout << "Enter the Elements in Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> myArray[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (myArray[i] > maxNo)
        {
            maxNo = myArray[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (myArray[i] < minNo)
        {
            minNo = myArray[i];
        }
    }

    cout << "The Max No in Given Array is : " << maxNo << endl;
    cout << "The Min No in Given Array is : " << minNo << endl;

    return 0;
}