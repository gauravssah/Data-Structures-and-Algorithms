#include <iostream>
using namespace std;

void dec(int n)
{
    if (n == 0)
    {
        // cout << 0 << " ";
        return;
    }
    cout << n << " ";
    dec(n - 1);
}

void inc(int n)
{

    if (n == 0)
    {
        return;
    }

    inc(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cout << "Enter the n" << endl;
    cin >> n;

    cout << "Printing - Decreasing Order" << endl;
    dec(n);
    cout << endl;
    cout << "Printing - Increasing Order" << endl;
    inc(n);

    return 0;
}