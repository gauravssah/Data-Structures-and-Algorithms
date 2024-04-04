#include <iostream>
using namespace std;

#define n 100

class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack is Overflow" << endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack UnderFlow" << endl;
            return;
        }

        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "Stack UnderFlow" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top == -1;
    }
};

int main()
{
    Stack st;
    st.push(5);
    st.push(8);
    st.push(6);

    cout << st.Top() << endl;
    cout << st.empty() << endl;
    st.pop();
    cout << st.Top() << endl;

    st.pop();
    st.pop();
    st.pop();

    cout << st.empty() << endl;

    return 0;
}