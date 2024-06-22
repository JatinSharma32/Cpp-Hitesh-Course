#include <iostream>
using namespace std;

class Base
{
private:
    int _hello = 0;
    void _printhello()
    {
        cout << "Base class private function";
    }

protected:
    int GF = 0;
    void printGF()
    {
        cout << "Base class protected function";
    }

public:
    int family = 0;
    void printfamily()
    {
        cout << "Base class public function";
    }

    Base() {}
};

class DerivedClass : Base
{
public:
    void fun()
    {
        printGF();
        printfamily();
        // This will give error
        // _printhello();
        cout << "Derived class public function";
    }
};

int main()
{

    DerivedClass d;
    d.fun();
    return 0;
}
