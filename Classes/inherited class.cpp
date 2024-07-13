#include <iostream>
using namespace std;

class Base
{
private:
    int _hello = 0;
    string name;
    void _printhello()
    {
        cout << "Base class private function" << "\n";
    }

protected:
    int GF = 0;
    void printGF()
    {
        cout << "Base class protected function" << "\n";
    }

public:
    Base(string name)
    {
        this->name = name;
    }
    int family = 0;
    void printfamily()
    {
        cout << this->name << " : Base class public function" << "\n";
    }

    Base() {}
};

class DerivedClass : Base
{
public:
    DerivedClass(string n) : Base(n)
    {
        cout << "Name is " << n << "\n";
    }
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

    DerivedClass d("jatin");
    d.fun();
    return 0;
}
