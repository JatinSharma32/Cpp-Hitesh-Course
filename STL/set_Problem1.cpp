#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        multiset<int> bags;
        int n, k, sum = 0;
        cin >> n >> k;
        while (n--)
        {
            int inp;
            cin >> inp;
            bags.insert(inp);
        }
        while (k--)
        {
            int max_elem = *bags.rbegin();
            cout << max_elem << "\n";
            sum += max_elem;
            max_elem /= 2;
            bags.erase(prev(bags.end()));
            bags.insert(max_elem);
        }
        cout << "Sum: " << sum << "\n";
    }
    return 0;
}