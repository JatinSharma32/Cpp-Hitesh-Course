#include <bits/stdc++.h>

using namespace std;

void VectorPrint(vector<string> &v)
{
    for (auto j : v)
    {
        cout << '"' << j << '"' << ",";
    }
}

int main()
{

    vector<string> s = {"eat", "tea", "tan", "ate", "nat", "bat"};
    // Output: [["ate","eat","tea"], ["nat","tan"], ["bat"]]

    unordered_map<string, vector<string>> um;
    for (auto i : s)
    {
        string id = i;
        sort(id.begin(), id.end());
        um[id].push_back(i);
        // or
        //(*um.find(id)).second.push_back(i);
    }
    cout << "[";
    for (auto i : um)
    {

        cout << "[";
        VectorPrint(i.second);
        cout << "], ";
    }
    cout << "]\n";

    return 0;
}