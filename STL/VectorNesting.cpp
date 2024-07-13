#include <bits/stdc++.h>
using namespace std;

void VectorOfVectorPrint(vector<vector<int>> &v)
{
    puts("Nested Vector:\n");
    for (auto i : v)
    {
        cout << ": ";
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> NestedVector;
    puts("Enter the size of Vector of vectors");
    int NestedVectorSize;
    cin >> NestedVectorSize;
    for (int i = 0; i < NestedVectorSize; i++)
    {
        puts("Enter the size of Vector: ");
        int VectorSize;
        cin >> VectorSize;
        NestedVector.push_back({}); // this is NestedVector[i]
        for (int j = 0; j < VectorSize; j++)
        {
            int elem;
            cin >> elem;
            NestedVector[i].push_back(elem);
        }
    }
    VectorOfVectorPrint(NestedVector);

    cout << "\t\tThree ways to print vector\n----------------" << "\n";
    vector<pair<int, string>> hell = {
        make_pair(1, "jatin"),
        make_pair(2, "kumar"),
        make_pair(3, "sharma"),
    };

    for (int i = 0; i < hell.size(); i++)
    {
        cout << hell[i].first << " " << hell[i].second << "\n";
    }
    cout << "----------------" << "\n";
    for (auto i : hell)
    {
        cout << i.first << " " << i.second << "\n";
    }
    cout << "----------------" << "\n";
    for (auto i = hell.begin(); i != hell.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << "\n";
    }

    return 0;
}