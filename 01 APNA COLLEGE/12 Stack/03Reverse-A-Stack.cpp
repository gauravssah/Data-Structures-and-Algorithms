#include <iostream>
using namespace std;
#include <stack>

void insertAtBottom(stack<int> &st, int n)
{
    if (st.empty())
    {
        st.push(n);
        return;
    }
    int topele = st.top();
    st.pop();
    insertAtBottom(st, n);
    st.push(topele);
}

void reverseStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int ele = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, ele);
}

int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverseStack(st);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    cout << endl;

    return 0;
}