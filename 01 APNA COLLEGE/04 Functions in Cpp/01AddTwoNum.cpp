#include <iostream>
using namespace std;

int addTwoNum(int n1, int n2)
{
    int sum = n1 + n2;
    return sum;
}

int main()
{

    int a, b;
    cout << "Enter The Two Numbers" << endl;
    cin >> a >> b;
    int res = addTwoNum(a, b);
    cout << "The sum Of " << a << ", " << b << " is : " << res << endl;
    return 0;
}