#include <iostream>
#include <set>
using namespace std;

int32_t main()
{
    multiset<int> s;
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

//      1 2 2 2 2 2 3 3 4 4 4 5 5 5
//      14
//      1 3 3 4 4 4 5 5 5