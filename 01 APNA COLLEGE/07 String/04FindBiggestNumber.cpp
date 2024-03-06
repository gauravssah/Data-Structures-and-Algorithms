#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{

    string num = "842967254";
    sort(num.begin(), num.end(), greater<int>());
    cout << num << endl;
    return 0;
}