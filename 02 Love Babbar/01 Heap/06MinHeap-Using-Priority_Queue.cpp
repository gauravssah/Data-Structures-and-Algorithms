#include <iostream>
#include <queue>
using namespace std;

int main()
{

    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(4);
    minHeap.push(2);
    minHeap.push(5);
    minHeap.push(3);

    cout << "Element At Top : " << minHeap.top() << endl;
    minHeap.pop();
    cout << "Element At Top : " << minHeap.top() << endl;
    cout << "Size is : " << minHeap.size() << endl;

    if (minHeap.empty())
    {
        cout << "minHeap is Empty " << endl;
    }
    else
    {
        cout << "minHeap is not empty" << endl;
    }

    return 0;
}

//   OutPut:

//      Element At Top : 2
//      Element At Top : 3
//      Size is : 3
//      minHeap is not empty