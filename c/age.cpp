#include <iostream>
// #include <bits/stdc++.h>
// this includes all the libraries
using namespace std; // this makes it so that we don't have to write std::cout every time
int main()
{
    cout << "Enter your age \n";
    int x;
    cin >> x; // cin is the input stream object

    if (x >= 18)
    {
        cout << "You are an adult";
    }
    else if (x < 18)
    {
        cout << "You are a child";
    }
    return 0;
}