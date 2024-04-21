#include <iostream>
#include <queue>
using namespace std;

int main()
{

    priority_queue<int> pq;

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout << "Element At Top : " << pq.top() << endl;
    pq.pop();
    cout << "Element At Top : " << pq.top() << endl;
    cout << "Size is : " << pq.size() << endl;

    if (pq.empty())
    {
        cout << "Pq is Empty " << endl;
    }
    else
    {
        cout << "Pq is not empty" << endl;
    }

    return 0;
}

//   OutPut:

//      Element At Top : 5
//      Element At Top : 4
//      Size is : 3
//      Pq is not empty