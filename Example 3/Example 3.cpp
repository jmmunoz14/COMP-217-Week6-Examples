// Example 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>
using namespace std;

//generator function defined as an example
char nextLetter() {
	static char letter{ 'A' };
	return letter++;
}

int main() {
	array<char, 10> chars;

	cout << "chars after fillinng with 5s:\n";
	fill(chars.begin(), chars.end(), '5');
	
	ostream_iterator<char> output{ cout, " " };
	copy(chars.begin(), chars.end(), output);

	cout << "\nFilling 5 elements of chars array with A: \n";
	//fill first five elements of char array with the letter A
	fill_n(chars.begin(), 5, 'A');

	copy(chars.begin(), chars.end(), output);


	cout << "\n\nchars after generating letters A-J:\n";
	//generate values for all elements of char with nextLetter
	generate(chars.begin(), chars.end(), nextLetter);
	copy(chars.begin(), chars.end(), output);


	cout << "\n\nchars after generating letters K-O for the first 5 elements:\n";
	//generate next 5 values for char array
	generate_n(chars.begin(),5, nextLetter);
	copy(chars.begin(), chars.end(), output);
	cout << endl;

	//generate with lambda instead
	generate_n(chars.begin(), 3, []() { static char letter{ 'A' }; return letter++; });

	cout << "\nchars after using a lambda to generate A-C for the first 3 elements: \n";
	copy(chars.begin(), chars.end(), output);
	cout << endl;
}

//generator function defined as an example
char nextLetter() {
	static char letter{ 'A' };
	return letter++;
}

int main() {
	array<char, 10> chars;

	cout << "chars after fillinng with 5s:\n";
	fill(chars.begin(), chars.end(), '5');

	ostream_iterator<char> output{ cout, " " };
	copy(chars.begin(), chars.end(), output);

	cout << "\nFilling 5 elements of chars array with A: \n";
	//fill first five elements of char array with the letter A
	fill_n(chars.begin(), 5, 'A');

	copy(chars.begin(), chars.end(), output);


	cout << "\n\nchars after generating letters A-J:\n";
	//generate values for all elements of char with nextLetter
	generate(chars.begin(), chars.end(), nextLetter);
	copy(chars.begin(), chars.end(), output);


	cout << "\n\nchars after generating letters K-O for the first 5 elements:\n";
	//generate next 5 values for char array
	generate_n(chars.begin(), 5, nextLetter);
	copy(chars.begin(), chars.end(), output);
	cout << endl;

	//generate with lambda instead
	generate_n(chars.begin(), 3, []() { static char letter{ 'A' }; return letter++; });

	cout << "\nchars after using a lambda to generate A-C for the first 3 elements: \n";
	copy(chars.begin(), chars.end(), output);
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
