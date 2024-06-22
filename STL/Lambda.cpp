#include <iostream>
#include <typeinfo>
using namespace std;

template <typename T>
void printType(T t)
{
    cout << "Its type is: " << typeid(t).name() << "\n";
}

int main()
{
    // lambda function
    auto intSum = [](int a, int b)
    {
        return a + b;
    };
    cout << "Sum of a and b is: " << intSum(5, 6) << "\n";
    printType(intSum);
    return 0;
}