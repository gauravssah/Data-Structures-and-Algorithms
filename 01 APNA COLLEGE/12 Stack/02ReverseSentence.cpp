#include <iostream>
using namespace std;
#include <stack>

void reverseSentence(string s)
{
    stack<string> st;

    for (int i = 0; i < s.length(); i++)
    {

        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }

        st.push(word);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{

    // string s = "Hey, how Are Doing?";
    cout << "Enter Your Sentence" << endl;
    string s;
    getline(cin, s);

    reverseSentence(s);

    return 0;
}