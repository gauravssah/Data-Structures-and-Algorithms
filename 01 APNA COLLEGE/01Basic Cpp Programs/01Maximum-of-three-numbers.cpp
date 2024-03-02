#include <iostream>
using namespace std;

class CheckGreatestNumber
{
    int num1, num2, num3;

public:
    void getNumbers()
    {
        cout << "Enter your First Numbers." << endl;
        cin >> num1;
        cout << "Enter your Second Numbers." << endl;
        cin >> num2;
        cout << "Enter your Third Numbers." << endl;
        cin >> num3;
    }

    int getResult()
    {
        int result = (num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3));
        return result;
    }
};

int main()
{

    // ----------------- Using Classes and Objects ------------------------------>
    cout << "Now This Is Called Using Class." << endl;
    CheckGreatestNumber myNumbers;
    myNumbers.getNumbers();
    int res = myNumbers.getResult();
    cout << res << " Is Greater Number." << endl;

    // ----------------- Without Using Classes and Objects ------------------------------>
    cout << endl;
    cout << "Now This Is Called Without Using Classes and Objects." << endl;
    int a, b, c;
    cout << "Enter your Three Numbers." << endl;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is Grater Than " << b << " and " << c << endl;
        }
        else
        {

            cout << c << " is Grater Than " << a << " and " << b << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << " is Grater Than " << a << " and " << c << endl;
        }
        else
        {
            cout << c << " is Grater Than " << a << " and " << b << endl;
        }
    }
}