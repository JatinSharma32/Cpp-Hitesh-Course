#include <iostream>
/*
#include <cstdio>
using namespace std{
    #include <stdio.h>
};
*/
using namespace std;

int main(int argc, char *argv[])
{
    // puts("Hello World!")
    cout << "Argc: " << argc << "\n";
    cout << "Argv[0]: " << argv[0] << "\n";           // Command of execution like `./output.exe`
    cout << "Argv[last]: " << argv[argc - 1] << "\n"; // argv[argc] is always NULL
    return 0;
}