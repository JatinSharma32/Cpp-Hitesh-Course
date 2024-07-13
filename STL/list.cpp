#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls = {1, 4, 2, 3};
    ls.insert(++(++ls.begin()), 5);
    for (auto i : ls)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}