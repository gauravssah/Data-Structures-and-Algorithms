#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    int lastdigit;
    int ArmstrongNum = 0;
    cout << "Enter The number." << endl;
    cin >> num;
    int originalNum = num;

    while (num > 0)
    {
        lastdigit = num % 10;
        ArmstrongNum = ArmstrongNum + pow(lastdigit, 3);
        num = num / 10;
    }

    if (ArmstrongNum == originalNum)
    {
        cout << "Given Number is An Armstrong Number." << endl;
        cout << originalNum << " = " << ArmstrongNum << endl;
    }
    else
    {
        cout << "Given Number is Not An Armstrong Number." << endl;
        cout << originalNum << " != " << ArmstrongNum << endl;
    }

    return 0;
}