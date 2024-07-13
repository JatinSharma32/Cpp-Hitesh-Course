#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {55, 64, 4, 32, 635, 5342};
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << "\n";

    sort(v.begin(), v.end(), [](int pre, int pos)
         { return pre < pos; });

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}