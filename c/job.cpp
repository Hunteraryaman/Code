#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your age \n";
    int age;
    cin >> age;
    //! this was my solution not optimised
    // if (age < 18)
    // {
    //     cout << "You are a not eligible for the job";
    // }
    // else if (age > 57)
    // {

    //     cout << "time for retirement";
    // }
    // else if (age >= 55 && age <= 57)
    // {
    //     cout << "yout are eligible for job but retirement soon";
    // }
    // else if (age >= 18)
    // {
    //     cout << "You are eligible for the job";
    // }
    //! this is the second solution from striver
    // if (age < 18)
    // {
    //     cout << "You are not eligible for the job";
    // }
    // else if (age <= 54)
    // {
    //     cout << "You are eligible for the job";
    // }
    // else if (age <= 57)
    // {
    //     cout << "You are eligible for the job but retirement soon";
    // }
    // else
    // {
    //     cout << "Time for retirement";
    // }

    if (age < 18)
    {
        cout << "You are not eligible for the job";
    }
    else if (age <= 57)
    {
        cout << "You are eligible for the job";
        if (age > 55) //! this does not save time but it is more optimised
        {
            cout << ", but retirement soon";
        }
    }
    else
    {
        cout << "Time for retirement";
    }
}