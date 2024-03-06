// calcaluate n raised to power of p
// n^p = n*n*n*n ....... p times

#include <iostream>
using namespace std;

int nRaisedToPowerofP(int n, int p)
{

    if (p == 0)
    {
        return 1;
    }

    return n * nRaisedToPowerofP(n, p - 1);
}

int main()
{

    int n, p;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "Enter the value of p" << endl;
    cin >> p;

    int ans = nRaisedToPowerofP(n, p);
    cout << "The ans : " << ans;

    return 0;
}