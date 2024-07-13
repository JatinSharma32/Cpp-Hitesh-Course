#include <bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> ls = {1, 4, 2, 3};
    forward_list<int>::iterator i = ls.begin();
    cout << *i << "\n";
    cout << *(++i) << "\n";
    return 0;
}