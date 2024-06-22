#include <iostream>
using namespace std;

int hello()
{
    extern int a;
    cout << "File 2: " << a << "\n";
    return 0;
}