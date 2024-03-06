#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter The string With Spaces Lines" << endl;
    // getline(cin, str);
    // cout << str << endl;

    string str1(5, 'P');
    cout << str1 << endl;

    // --------------------------

    string s1 = "Fam";
    string s2 = "ily";

    // cout << s1 + s2 << endl;
    s1.append(s2);
    cout << s1 << endl;

    // ---------------------
    cout << s1[1] << endl;

    // --------------------
    string abc = "hdfsjhkjdhfhdsjkfhjksdhfdjsfh hdsfjkhdjkshfdjsfh hdfskjhsdjkfh ";
    cout << abc << endl;
    abc.clear();
    cout << abc << endl;

    // -------------------

    string a1 = "abc";
    string a2 = "abc";

    if (!a1.compare(a2)) // a1.compare(a2) == 0
    {
        cout << "String are equal" << endl;
    }
    else
    {
        cout << "String are Not equal" << endl;
    }

    // ---------------------------

    a1.clear();

    if (!a1.empty()) // a1.empty()
    {
        cout << "Not Empty!" << endl;
    }
    else
    {
        cout << "Empty!" << endl;
    }

    // -------------------------------

    string ss = "KpMpmylion";
    ss.erase(3, 2);
    cout << ss << endl;

    // -------------------------

    string fin = "Hello Gaurav";
    cout << fin.find("Gaura") << endl;

    fin.insert(5, " Sah");
    cout << fin << endl;

    // -------------------------

    cout << fin.size() << endl;
    cout << fin.length() << endl;

    // --------------------
    for (int i = 0; i < fin.length(); i++)
    {
        cout << fin[i] << " ";
    }
    cout << endl;
    // -----------------------
    string yourname = "Gkjahd Gaurav";
    string myName = yourname.substr(7, 13);
    cout << myName << endl;

    // -----------------

    string num = "574";
    int x = stoi(num);
    cout << x << endl;     // 574
    cout << x + 2 << endl; // 576

    // -----------------------------

    int lol = 512;
    cout << to_string(lol) + "5" << endl; // 5125

    // ----------------------------

    string cha = "bvjjxmziebcxz";
    sort(cha.begin(), cha.end());
    cout << cha << endl;

    return 0;
}