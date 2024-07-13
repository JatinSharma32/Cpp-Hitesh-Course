#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<string, string>, int> mp;
    mp.insert({{"Prg", "Sharma"}, 4});
    mp.insert({{"Jatin", "Sharma"}, 4});
    mp.insert({{"Abcd", "Sharma"}, 4});
    mp.insert({{"Peekaboo", "Sharma"}, 4});
    for (auto i : mp)
    {
        cout << i.first.first << " " << i.first.second << "\n";
    }
    cout << "---------" << "\n";
    map<set<string>, int> ms;
    ms.insert({{"Jatin"}, 4});
    ms.insert({{"Abcd"}, 4});
    ms.insert({{"Prg"}, 4});
    ms.insert({{"Peekaboo"}, 4});
    for (auto i : ms)
    {
        for (auto j : i.first)
        {
            cout << j << " ";
        }
        cout << i.second << "\n";
    }
    cout << "---------" << "\n";
    map<vector<string>, int> mv;
    mv.insert({{"Jatin", "cjdshck"}, 4});
    mv.insert({{"Abcd"}, 4});
    mv.insert({{"Jatin", "aaa"}, 4});
    mv.insert({{"Peekaboo"}, 4});
    for (auto i : mv)
    {
        for (auto j : i.first)
        {
            cout << j << " ";
        }
        cout << i.second << "\n";
    }

    return 0;
}