#include <bits/stdc++.h>
using namespace std;

void frequencyCount(vector<int> &arr, int N, int P)
{
    // code here
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (!isalnum(s[i]))
        {
            i++;
            continue;
        }
        if (!isalnum(s[j]))
        {
            i++;
            continue;
        }
        if (tolower(s[i]) != tolower(s[j]))
        {
            cout << "False\n";
            return 0;
        }
        i++;
        j--;
    }
    cout << "True\n";
    return 0;
}