#include <iostream>
using namespace std;

int fact(int n)
{
    // int factorial = 1;
    // for (int i = 2; i <= n; i++)
    // {
    //     factorial = factorial * i;
    // }
    // return factorial;

    if (n == 0)
    {
        return 1;
    }

    return n * fact(n - 1);
}

int main()
{
    int n;
    int r;
    cout << "Enter the value of N." << endl;
    cin >> n;
    cout << "Enter the value of R." << endl;
    cin >> r;

    int nCr = fact(n) / (fact(r) * fact(n - r));
    cout << n << "C" << r << " = " << nCr << endl;

    return 0;
}