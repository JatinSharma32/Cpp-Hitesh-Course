#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::string hello = "hkhdkj";
    int n = 9, r;
    int &nRef = n;
    std::cout << nRef << "\t" << &n << "\n";
    puts("Enter 2 numbers: ");
    std::cin >> n >> r;
    std::cout << "\nn:" << n << "\nr:" << r << "\n";

    // string input
    std::string firstname, lastname;

    // std::cin >> firstname;
    std::getline(std::cin, firstname);
    std::getline(std::cin, lastname);
    // first name will show empty as you press enter and close the input stram after putting the value of 'r'
    /*
    so this line stops taking input after getting enter/newline
            std::getline(std::cin, firstname);
    OUTPUT:
        5

        n:4
        r:5
        jatin sharma
        Firstname:
        Lastname: jatin sharma
    to avoid this we will write the name right after value of 'r' variable
    */
    std::cout << "Firstname: " << firstname << "\nLastname: " << lastname << "\n";
    return 0;
}