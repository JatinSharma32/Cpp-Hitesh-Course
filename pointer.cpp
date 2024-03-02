#include <iostream>

int main(int argc, char *argv[])
{
    int a = 10, b;
    int *pointA = &a;
    std::cout << "Pointer A: " << pointA << "\n";
    std::cout << "Value: " << *pointA << "\n\n";

    // we can directly update the dereferenced pointer or point to a new memory location
    *pointA = 19;
    std::cout << "Pointer A: " << pointA << "\n";
    std::cout << "Value: " << *pointA << "\n\n";

    // references
    int &ref = a;
    // std::cout << "Reference of b: " << &ref << "\n\n";
    // above line will just print the memory address

    std::cout << "Reference of a: " << ref << "\n\n";
    std::cout << "a: " << a << "\n\n";
    std::cout << "Pointer a: " << *pointA << "\n\n";

    return 0;
}