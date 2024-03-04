#include <iostream>
using namespace std;

void fib(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextTerm = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main()
{
    int num;
    cout << "Enter The Value of Num." << endl;
    cin >> num;
    fib(num);

    return 0;
}