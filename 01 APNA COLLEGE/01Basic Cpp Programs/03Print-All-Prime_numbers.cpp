#include <iostream>

using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i > 2)
        {

            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    cout << i << " Not Prime!" << endl;
                    break;
                }
                else
                {
                    cout << i << " Prime!" << endl;
                    break;
                }
            }
        }
        else
        {
            cout << i << "  Prime!" << endl;
        }
    }

    // cout << "Prime numbers between 1 and " << n << " are: ";
    // for (int i = 2; i <= n; i++)
    // {
    //     if (isPrime(i))
    //     {
    //         cout << i << " ";
    //     }
    // }
    // cout << endl;

    return 0;
}
