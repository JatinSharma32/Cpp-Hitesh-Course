#include <iostream>
using namespace std;

int main()
{
    try
    {
        int x = 9;
        if (x > 0)
        {
            cout << "Wrong throw error\n";
            throw "!!! ERROR !!!";
        }
    }
    catch (runtime_error e)
    {
        cout << "Caught runtime error\n";
    }
    catch (exception e)
    {
        cout << "Caught a exception\n";
    }
    catch (const char *e)
    {
        cout << "Caught a String exception\n"
             << e;
    }
    catch (...)
    {
        cout << "Uncaught exception\n";
    }
    return 0;
}
