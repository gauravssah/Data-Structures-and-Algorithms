#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    } // 1 2 3 4

    cout << endl;
    // --------------------

    vector<int>::iterator it;

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    } // 1 2 3 4

    cout << endl;
    // --------------------

    for (auto element : v)
    {
        cout << element << " ";
    } // 1 2 3 4

    cout << endl;
    // --------------------

    v.pop_back();
    for (auto element : v)
    {
        cout << element << " ";
    } // 1 2 3

    // ##################################
    cout << endl;
    vector<int> v2(3, 50);

    for (auto element : v2)
    {
        cout << element << " ";
    } // 50 50 50

    cout << endl;

    swap(v, v2);
    cout << "After Swap int V : ";
    for (auto element : v)
    {
        cout << element << " ";
    } // After Swap int V : 50 50 50

    cout << endl;

    cout << "After Swap int V2 : ";
    for (auto element : v2)
    {
        cout << element << " ";
    } // After Swap int V2 : 1 2 3

    return 0;
}