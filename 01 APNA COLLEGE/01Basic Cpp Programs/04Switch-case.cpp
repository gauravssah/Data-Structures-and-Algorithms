#include <iostream>
using namespace std;

int main()
{

    int num1;
    int num2;

    char op;

    cout << "Enter the num1" << endl;
    cin >> num1;
    cout << "Enter the num2" << endl;
    cin >> num2;
    cout << "Enter the operation, like - +,-,*,/,%" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        break;
    case '%':
        cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
        break;
    default:
        cout << "Not Valid!" << endl;
        break;
    }

    return 0;
}