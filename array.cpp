#include <iostream>

int main()
{
    int array[4] = {1, 2, 3, 4};

    // the both give same output as Array is just the memmory point of first element
    std::cout << &array[0] << " " << &array[2] << "\n";
    std::cout << array << " " << array + 2;
    // this is dereferencing
    std::cout << *array << " " << *(array + 2);
}