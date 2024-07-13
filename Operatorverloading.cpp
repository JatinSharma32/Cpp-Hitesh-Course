#include <iostream>
using namespace std;

class Add
{
private:
    string name;

public:
    Add(string name = "sharma")
    {
        this->name = name;
    }
    void operator+(string name)
    {
        this->name = name + this->name;
    };
    void printname()
    {
        puts((this->name).c_str());
    }
};

int main()
{
    Add a("Sharma");
    a.printname();
    a + "Jatin ";
    a.printname();
    a + "Prg ";
    a.printname();
    a + "Jatin ";
    a.printname();
    a + "Jain ";
    a.printname();
    return 0;
}