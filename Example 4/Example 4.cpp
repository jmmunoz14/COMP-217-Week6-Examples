// Example 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    const int SIZE{ 10 };
    array <int, SIZE> a1{ 1,3,5,7,9,1,3,5,7,9 };

    ostream_iterator<int> output(cout, " ");

    cout << "array a1 contains: ";
    copy(a1.cbegin(), a1.cend(), output);

    inplace_merge(a1.begin(), a1.begin() + 5, a1.end());

    cout << "\nAfter inplace_merge, a1 contains: ";
    copy(a1.cbegin(), a1.cend(), output);

    vector<int> results2;

    reverse_copy(a1.cbegin(), a1.cend(), back_inserter(results2));
    cout << "\nAfter reverse_copy, results2 contains: ";
    copy(results2.cbegin(), results2.cend(), output);
    cout << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
