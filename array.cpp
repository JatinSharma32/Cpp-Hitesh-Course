#include <iostream>

int main()
{
    char array[5] = {'s', '6', '&', 'f'};

    // the both give same output as Array is just the memmory point of first element
    std::cout << &array[0] << " " << &array[2] << "\n";
    std::cout << array << " " << array + 2 << "\n";
    // this is dereferencing
    std::cout << *array << " " << *(array + 2);
}