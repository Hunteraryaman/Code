#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++) // first half
    {
        for (int j = 0; j <= i; j++)
        { // first
            cout << "* ";
        }
        // for(int j=0;j<=(2*n-4);j++){//space
        //     cout<<"  ";//4 6 8  10
        //                  3 5 6  7
        // }
        for (int j = i; j < n - 1; j++)
        {
            cout << "  ";
        }
        for (int j = i; j < n - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        { // second
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) // second half
    {
        for (int j = i; j < n; j++)
        { // first
            cout << "* ";
        }
        // for(int j=0;j<=(2*n-4);j++){//space
        //     cout<<"  ";//4 6 8  10
        //                  3 5 6  7
        // }
        for (int j = 0; j <= i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = i; j < n; j++)

        { // second
            cout << "* ";
        }
        cout << endl;
    }

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i; j < n - 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     for (int j = i; j < n - 2; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = i; j < n - 2; j++)
    //     {
    //         cout << "  ";
    //     }
    //     // for (int j = 0; j <= (2 * n - 4); j++)
    //     // { // 2 4 6
    //     //     cout << "  ";
    //     // }
    //     for (int j = i; j < n - 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     // cout<<" ";
    //     cout << endl;
    // }
} // 4 6 8 10 12
// 3 4 5  6  7
// 2n-2
