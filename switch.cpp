#include <iostream>

int main()
{
    int month = 1; // Assuming JAN is represented by 1
    std::cin >> month;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        std::cout << "31 days in this month."
                  << "\n";
        break;

    case 2:
        std::cout << "29 or 28 or days in this month."
                  << "\n";
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        std::cout << "30 or days in this month."
                  << "\n";
        break;

    default:
        std::cout << "Error"
                  << "\n";
        break;
    }
}