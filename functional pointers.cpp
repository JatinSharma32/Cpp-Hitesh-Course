#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*functionPTR)(int a, int b);
    functionPTR = add;
    cout << functionPTR(4, 6) << "\n";
    return 0;
}