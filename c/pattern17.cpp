#include <iostream>
using namespace std;
int main()
{
    int a = 0, n = 4;
    for (int i = 0; i < n; i++)
    {
        // loop for stars
        for (int j = n; j > i; j--)
        {
            cout << "* ";
        }
        // loop for spaces
        for (int j = 0; j < a; j++)
        { // 4 8 12 16
            if (i == 0)
                break;
            cout << "  ";
        }
        // loop for stars
        a += 2;
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    a = n * 2 - 2;
    //
    for (int i = 0; i < n; i++)
    {
        // loop for stars
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        // loop for spaces
        for (int j = a; j > 0; j--)
        { // 4 8 12 16

            cout << "  ";
        }
        // loop for stars
        a -= 2;
        for (int j = i; j >= 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
