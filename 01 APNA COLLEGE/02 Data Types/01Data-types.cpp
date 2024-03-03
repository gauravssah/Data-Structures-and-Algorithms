#include <iostream>
using namespace std;

int main()
{

    int a;
    a = 12;
    cout << "Size of int " << sizeof(a) << endl;

    float b;
    cout << "Size of float " << sizeof(b) << endl;

    char c;
    cout << "Size of char " << sizeof(c) << endl;

    bool d;
    cout << "Size of bool " << sizeof(d) << endl;

    short int si;
    cout << "size of shortint " << sizeof(si) << endl;

    long int li;
    cout << "size of longint " << sizeof(li) << endl;

    return 0;
}