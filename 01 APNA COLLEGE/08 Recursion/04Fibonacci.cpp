#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}
int main()
{

    int n;
    cout << "Enter The value of n." << endl;
    cin >> n;

    int ans = fib(n);
    cout << "The Ans = " << ans << endl;

    return 0;
}