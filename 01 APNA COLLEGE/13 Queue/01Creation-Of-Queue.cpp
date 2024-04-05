#include <iostream>
using namespace std;
#define n 5

class Queue
{
    int *arr;
    int front;
    int back;

public:
    Queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;

        for (int i = 0; i < n; i++)
        {
            arr[i] = 0;
        }
    }

    void push(int x)
    {
        if (front == -1)
        {
            front++;
        }

        if (back == n - 1)
        {
            cout << "Queue overflow" << endl;
            return;
        }

        back++;
        arr[back] = x;
    }

    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue Undeflow!" << endl;
            return;
        }

        arr[front] = 0;
        front++;
    }

    void peek()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue Undeflow!" << endl;
            return;
        }

        cout << "Peek Element -> " << arr[front] << endl;
    }

    bool empty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }

        return false;
    }

    void displayTheQueue()
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << "|";
        }
        cout << endl;
    }
};

int main()
{

    Queue qu;

    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);

    qu.pop();
    qu.pop();
    // qu.pop();
    // qu.pop();
    // qu.pop();

    qu.peek();

    qu.displayTheQueue();

    cout << "isEmpty -> " << qu.empty() << endl;

    return 0;
}