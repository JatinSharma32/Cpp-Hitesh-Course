#include <iostream>
using namespace std;

int main()
{
    const char *a = "jatin.txt";
    FILE *fp = fopen(a, "r");

    char buffer[5];

    // This fgets functions returns a single line from file, and NULL if file ends
    // fgets(buffer, 255, fp);

    while (fgets(buffer, 5, fp) != NULL)
    {
        cout << ": " << buffer << "\n";
    }
    fclose(fp);

    fp = fopen(a, "w");
    int n = 4;
    puts("You can enter 10 lines");

    while (n--)
    {
        string hello;
        cout << ": ";
        getline(cin, hello);
        fprintf(fp, "%s\n", hello.c_str());
    }

    return 0;
}