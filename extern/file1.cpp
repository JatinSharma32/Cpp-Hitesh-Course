#include <iostream>
using namespace std;

extern int hello();
int a = 89;
int main()
{
    cout << "File 1: " << a << "\n";
    hello();
    return 0;
}