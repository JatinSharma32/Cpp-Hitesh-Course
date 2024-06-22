#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = move(a);
    a = move(b);
    b = move(temp);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << "\n";
    swap(a, b);
    cout << a << " " << b << "\n";
}