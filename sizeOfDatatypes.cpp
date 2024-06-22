#include <iostream>

int main()
{
    int a = 0;
    short b = 2;
    long int c = 999807893;
    long long int d = 298067;

    std::cout << "Size of int: " << sizeof(a) << "\n";
    std::cout << "Size of short int: " << sizeof(b) << "\n";
    std::cout << "Size of long int: " << sizeof(c) << "\n";
    std::cout << "Size of long long int: " << sizeof(d) << "\n";

    char e = 'g';
    // wchar_t f = '😁';

    std::cout << "Size of char: " << sizeof(e) << "\n";
    std::cout << "Size of wide char: " << sizeof(wchar_t) << "\n"; // Output: 2
}