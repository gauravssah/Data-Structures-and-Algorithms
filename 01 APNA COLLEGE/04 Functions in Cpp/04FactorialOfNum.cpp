#include <iostream>
using namespace std;

int factorialOfNumb(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorialOfNumb(n - 1);
};

int factorialUsingForLoop(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter the Number." << endl;
    cin >> n;
    // int ans = factorialOfNumb(n);
    int ans = factorialUsingForLoop(n);
    cout << "Factorial of " << n << "! : " << ans << endl;

    return 0;
}