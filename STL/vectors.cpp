#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // How to initilize vectors
    vector<int> vectorArray;

    // How to push item in array
    vectorArray.push_back(10);
    vectorArray.push_back(11);
    vectorArray.push_back(12);

    // how to Itterate over vectors using pointer
    for (auto i = vectorArray.begin(); i != vectorArray.end(); i++)
    {
        cout << "Itterator: " << *i << "\n";
    }

    // How to remove element from vector
    vectorArray.pop_back();

    // how to Itterate over vectors using int itterator
    for (int i = 0; i < vectorArray.size(); i++)
    {
        cout << vectorArray[i] << '\n';
    }
    return 0;
}