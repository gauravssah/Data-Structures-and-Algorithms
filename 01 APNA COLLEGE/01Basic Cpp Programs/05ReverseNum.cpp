#include <iostream>
using namespace std;

int main()
{
    int num, digit, rev = 0;
    cout << "Enter The Number to reverse." << endl;
    cin >> num;

    while (num > 0)
    {
        digit = num % 10;
        rev = 10 * rev + digit;
        num = num / 10;
    }

    cout << "The Reverse Number is : " << rev << endl;

    return 0;
}