// GIven  N stings, print unique Strings in lexiographical order

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    multiset<string> str;
    while (t--)
    {
        string inp;
        cin >> inp;
        str.insert(inp);
    }
    for (auto i : str)
    {
        cout << i << "\n";
    }
    cout << str.count("Jatin") << "\n";
}