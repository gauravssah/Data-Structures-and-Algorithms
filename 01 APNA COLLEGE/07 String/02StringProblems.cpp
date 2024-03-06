#include <iostream>
using namespace std;

int main()
{

    string str = "ajdkfjjdfsuerfdhjbxv";
    cout << str << endl;
    // COnverting TO Upper Case.

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;

    // COnverting TO lower Case.

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    cout << str << endl;

    return 0;
}