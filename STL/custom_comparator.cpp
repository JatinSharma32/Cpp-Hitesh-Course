#include <bits/stdc++.h>
using namespace std;

struct comp
{
    bool operator()(const pair<string, int> &p1, const pair<string, int> &p2)
    {
        // false means no change
        // true means change
        if (p1.second == p2.second)
        {
            return p1.first < p2.first;
        }
        return p1.second > p2.second;
    }
};

int main()
{
    // Using multisets Instead of sets because 2 or more students can have same name and marks
    multiset<pair<string, int>, comp> hello;
    hello.insert({"jatin", 90});
    hello.insert({"hg", 40});
    hello.insert({"jghkytUI", 90});
    hello.insert({"FCDF", 28});
    hello.insert({"KJKLY", 67});
    for (auto i : hello)
    {
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
}