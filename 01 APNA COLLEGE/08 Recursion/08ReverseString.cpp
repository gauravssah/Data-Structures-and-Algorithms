#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void reverseString(string name, int index)
{
    if (index == 0)
    {
        cout << name[0];
        return;
    }
    cout << name[index];
    reverseString(name, index - 1);
}

void reverseStringAnotheMethod(string name)
{
    if (name.length() == 0)
    {
        return;
    }

    string ros = name.substr(1);
    reverseStringAnotheMethod(ros);
    cout << name[0];
}

int main()
{
    string name = "Gaurav";
    int index = name.length() - 1;
    reverseString(name, index);
    cout << endl;
    reverseStringAnotheMethod(name);
    return 0;
}