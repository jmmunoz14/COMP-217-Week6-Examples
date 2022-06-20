// Example 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>
using namespace std;


int main() {

	const size_t SIZE{ 4 }; //size of array
	array<int, SIZE> values{ 1, 2, 3, 4 };
	ostream_iterator<int> output{ cout, " " };

	cout << "values contains: ";
	copy(values.cbegin(), values.cend(), output);
	cout << "\nDisplay each element multiplied by 2: ";

	//output each element multiplied by two
	for_each(values.cbegin(), values.cend(), [](auto i) {cout << i * 2 << " "; });

	//add all elements of array
	int sum = 0;
	for_each(values.cbegin(), values.cend(), [&sum](auto i) {sum += i; });

	cout << "\nSum of value's elements is " << sum << endl; //output sum

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
