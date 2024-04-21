#include <iostream>
using namespace std;
#include <set>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>

// #define int long long
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) __builtin_popcount(x)

signed main()
{
    int n;
    cout << "Enter the size :" << endl;
    cin >> n;

    cout << "Enter the elements" << endl;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    unordered_map<int, int> freq;
    rep(i, 0, n)
    {
        freq[a[i]]++;
    }
    unordered_map<int, int>::iterator it;

    cout << "OutPut" << endl;

    for (it = freq.begin(); it != freq.end(); it++)
    {
        cout << it->ff << " " << it->ss << endl;
    }

    return 0;
}