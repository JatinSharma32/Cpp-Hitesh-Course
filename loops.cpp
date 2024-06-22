#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 6, 7, 8, 9, 32, 3, 4, 34, 2};
    for (int i = 2; i < 6; i++)
    {
        cout << i << "\n";
    }

    cout << "divider " << "\n";
    for (int i : arr)
    {
        cout << i << "\n";
    }

    // String with loops
    // multiple ways to define strings
    char hello[] = "jatin";
    char my_name[] = {'j', 'a', 't', 'i', 'n', 0};
    string jatin = "jatin";
    cout << "hello: " << hello << "\n";
    cout << "my_name: " << my_name << "\n";
    cout << "jatin: " << jatin << "\nLooped String: ";

    // termination condition
    // i < sizeof(hello) - 1
    // i < hello.length
    // hello[i] != 0         NULL TERMINATED STRING
    for (int i = 0; hello[i] != 0; i++)
    {
        cout << *(hello + i);
    }
    // Itteration through pointers
    cout << "divider " << "\n";
    for (char *ch = hello; *ch != 0; ch++)
    {
        cout << *ch;
    }
    return 0;
}