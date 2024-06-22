#include <iostream>

class Phone
{
    std::string _name = "";
    std::string _os = "";
    int _price = 0;

public:
    // CONSTRUCTOR in CPP
    Phone()
    {
        std::cout << "Default constructor" << "\n";
    };

    // PARAMETER CONSTRUCTOR in CPP
    Phone(const std::string &name, const std::string &os, const int &price)
    {
        _name = name;
        _os = os;
        _price = price;
    }

    // COPY CONSTRUCTOR in CPP
    Phone(const Phone &phone){};

    std::string getName() const { return _name; }
    std::string getOs() const { return _os; }
    int getPrice() const { return _price; }
};

int main()
{
    // Default Constructor
    Phone Xaomi;
    std::cout << Xaomi.getName() << "\n";

    // Parameter Constructor
    Phone Samsung("Samsung", "android", 20000);
    std::cout << Samsung.getName() << " " << Samsung.getOs() << " " << Samsung.getPrice() << "\n";

    // Copy Constructor
    Phone Nokia(Samsung);
    std::cout << Xaomi.getName() << "\n";

    return 0;
}