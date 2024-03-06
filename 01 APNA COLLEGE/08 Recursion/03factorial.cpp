#include <iostream>
using namespace std;

int claculateFact(int n)
{

    if (n == 0)
    {
        return 1;
    }

    return n * claculateFact(n - 1);
}

int main()
{

    int n;
    cout << "Enter the value n." << endl;
    cin >> n;

    int ans = claculateFact(n);
    cout << "The factorial of " << n << " is :" << ans << endl;

    return 0;
}