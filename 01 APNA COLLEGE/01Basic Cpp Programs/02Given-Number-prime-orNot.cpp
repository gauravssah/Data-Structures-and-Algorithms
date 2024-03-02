#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    int flag = 0;
    cout << "Enter Your Number." << endl;
    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << num << " is Not a Prime Number" << endl;
    }
    else
    {
        cout << num << " is a Prime Number" << endl;
    }
    return 0;
}
