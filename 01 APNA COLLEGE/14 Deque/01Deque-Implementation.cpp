#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_front(4);

    cout << "Size of Deque : " << dq.size() << endl;

    for (auto item : dq)
    {
        cout << item << " ";
    }

    cout << endl;

    dq.pop_back();
    dq.pop_front();

    for (auto item : dq)
    {
        cout << item << " ";
    }
    cout << endl;
    cout << "Size of Deque : " << dq.size() << endl;
    return 0;
}