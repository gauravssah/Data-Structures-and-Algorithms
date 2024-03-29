#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num)
{

    for (int i = 2; i <= sqrt(num); i++)
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
    int a, b;
    cout << "Enter The Starting Number " << endl;
    cin >> a;
    cout << "Enter The Ending Number " << endl;
    cin >> b;
    cout << "Prime Numbers are Between " << a << " and " << b << " : ";
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}