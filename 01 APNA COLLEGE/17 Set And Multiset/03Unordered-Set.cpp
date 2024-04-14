#include <iostream>
#include <unordered_set>
using namespace std;

int32_t main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(4);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << s.size() << endl;
    s.erase(2);

    for (auto i : s)
    {
        cout << i << " ";
    }
}
// Output:

//      4 5 3 1 2
//      5
//      4 5 3 1