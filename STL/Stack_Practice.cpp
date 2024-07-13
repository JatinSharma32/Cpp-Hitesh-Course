#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {4, 5, 2, 25, 7, 8}; //{5, 65, 75, 5, 325, 43, 654, 634};
    vector<int> v(arr.size(), -1);
    stack<int> st;
    for (int i = 0; i < arr.size(); i++)
    {
        if (!st.empty())
        {
            while (true)
            {
                if (st.empty() || arr[st.top()] > arr[i])
                {
                    break;
                }
                v[st.top()] = arr[i];
                st.pop();
            }
        }
        st.push(i);
    }
    for (auto &i : arr)
    {
        cout << i << " ";
    }
    cout << "\n";
    for (auto &i : v)
    {
        cout << i << " ";
    }
    cout << "\n";
    cout << endl;
}