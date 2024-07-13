#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, float> student[3];
    student[0] = {1, 8.6};
    student[1] = {2, 8};
    student[2] = {3, 10.0};

    for (auto i : student)
    {

        cout << i.first << " get grade " << i.second << "\n";
    }

    // To unpair the both values of pair
    int a;
    float b;
    tie(a, b) = student[0];
    cout << a << " get grade " << b << "\n";

    return 0;
}