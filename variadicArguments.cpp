#include <iostream>

int hello() {};

template <typename T, typename... Args>
int hello(T m, Args... h)
{
    std::cout << m << "\n";
    hello(h...);
}

int main()
{
    hello(4, true, 6, 67, "vdshk", 7, 7, 7, 3);
    return 0;
}