#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> char_stack;
    unordered_map<char, char> brackets;
    brackets['}'] = '{';
    brackets[']'] = '[';
    brackets[')'] = '(';
    for (char i : s)
    {
        if (i == '(' || i == '[' || i == '{')
        {
            char_stack.push(i);
        }
        // assuming all chareacters are onle {, [, (
        else
        {
            // check if i matches
            if (char_stack.empty() || brackets[i] != char_stack.top())
            {
                cout << "1NO" << "\n";
                return 0;
            }
            char_stack.pop();
        }
    }
    if (char_stack.empty())
    {
        cout << "YES" << "\n";
        return 0;
    }
    cout << "2NO" << "\n";
    return 0;
}