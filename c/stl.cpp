#include <iostream>
#include <utility> // This is the library for pair

using namespace std;

void understanding_pairs()
{
    // Define the first pair
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl; // Output the first pair

    // Define the second pair (with a nested pair)
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl; // Output the second pair

    // Define an array of pairs
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};
    cout << arr[0].first << " " << arr[0].second << endl; // Output the first element of the array
}

void understading_vectors()
{
    vector<int> v;   // creates an empty vector container
    v.push_back(10); // inserts 1 to the end of the vector
    // similar to push_back, we have emplace_back
    // it is faster
    v.emplace_back(20); // inserts 2 to the end of the vector
    v.emplace_back(30);

    vector<pair<int, int>> v_p;
    v_p.push_back({1, 2});  // we have to use {} to insert pair
    v_p.emplace_back(2, 3); // we dont hace to use {} to insert pair
    // it automactically it to be a pair and takes it and inserts it to the end of the vector

    vector<int> v2(3, 50); // creates a vector of size 3 with all elements as 50
    vector<int> v3(4);     // creates a vector of size 4 with all elements as 0 or garbage value
    // size can be increased
    vector<int> v4(v2); // creates a vector v4 with all elements of v2);

    cout << v[0] << " " << v.at(0); // first is generally used and second one is not used
    cout << v.back() << " ";

    // Iterating over a vector
    vector<int>::iterator it = v.begin(); // v.begin is giving the memory address of the first element of the vector
    // itereator stores the address value
    //  it is a pointer to the memory address first element of the vector
    it++;
    cout << *it << endl; // *it is used to get the value at the memory address stored in it

    cout << *it << endl;

    // vector is {10, 20, 30}
    vector<int>::iterator it1 = v.end(); // this is the memory address of the next element of the last element of the vector
    // to point it to the last element of the vector we need to do //!it--
    vector<int>::reverse_iterator it2 = v.rbegin(); // reverse begin it is a reverse iterator
    // it is a pointer to the memory address of the last element of the vector
    // goes from 30 to 10
    vector<int>::reverse_iterator it3 = v.rend(); // reverse end it is a reverse iterator
    // it is a pointer to the memory address of the next element of the first element of the vector
    // it goes form 10to 30

    cout << v.back() << endl;  // gives the last element of the vector ??? 30
    cout << v.front() << endl; // gives the first element of the vector ??? 10

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;

    for (vector<int>::iterator itt = v.begin(); itt < v.end(); itt++)
    {
        cout << *itt << " ";
    }

    cout << endl;
    //auto is a keyword in c++ which is used to automatically deduce the type of the variable
    // it is used to make the code more readable and less verbose

    for (auto itt = v.begin(); itt != v.end(); itt++)
    {
        cout << *itt << " ";
    }
    cout << endl;
//for each loop
    // this is used to iterate over the vector
    for (auto itt : v)
    {
        cout << itt << " ";
    }
    cout << endl;

//10 20 30
    v.erase(v.begin() + 1); // this is used to erase the element at index 1
    // this is used to erase the element at index 1 which is 20
    v.erase(v.begin() + 1, v.end()); // this is used to erase the elements from index 1 to the end of the vector
    // this is used to erase the elements from index 1 to the end of the vector
    //the end is the adress of the next element of the last element of the vector
    //! [start, end)

2025-04-17-13-56-31.png

}
int main()
{
    // understanding_pairs();
    understading_vectors();
    return 0;
}


