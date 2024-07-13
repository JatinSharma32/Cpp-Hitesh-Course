#include <iostream>
#include <vector>
using namespace std;

template <typename t>
void IterateThrough(t object)
{
    cout << ": ";
    for (auto i : object)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    string name = "Jatin";
    vector<int> vec;
    vec.push_back(967);
    vec.push_back(42);
    vec.push_back(07);
    vec.push_back(23);

    IterateThrough(name);
    IterateThrough(vec);

    return 0;
}