// Stroustrup, Bjarne - Programming_ principles and practice using C++-Addison-Wesley (2015)
// Chapter 2, 3

//#include <iostream>
#include "std_lib_facilities.h"
#include "chapter3_drill.h"
#include "chapter4_drill.h"


int square(int x) // return the square of x
{
	return x * x;
}


int main() // C++ programs start by executing the function main
{
	// - - - - - - - - - - - - - - - - - CHAPTER 2 - - - - - - - - - - - - - - - - - - - - 
	//cout << "Hello, World!\n"; // output “Hello, World!”
	//cout << "Hello, programming!\nHere we go!\n"; // Exercise 1

	// - - - - - - - - - - - - - - - - - CHAPTER 3 - - - - - - - - - - - - - - - - - - - - 
	// 
	// - - - - - - - - read and write a first name - - - - - - - - 
	//cout << "Please enter your first name (followed by 'enter'):\n";
	//string first_name; // first_name is a variable of type string
	//double age = 0.0;
	//cin >> first_name >> age;
	//cout << "Hello, " << first_name << " (age in months " << age*12 << ")\n";

	// - - - - - - - - Variables - - - - - - - - 
	// - - - - - - - - Types - - - - - - - - 
	//int number_of_steps = 39; // int for integers
	//double flying_time = 3.5; // double for floating-point numbers
	//char decimal_point = '.'; // char for individual characters
	//string name = "Annemarie"; // string for character strings
	//bool tap_on = true; // bool for logical variables

	// - - - - - - - - Math operations - - - - - - - - 
	//cout << "Please enter a floating-point value: ";
	//int n;
	//cin >> n;
	//cout << "n == " << n
	//	<< "\nn+1 == " << n + 1
	//	<< "\nthree times n == " << 3 * n
	//	<< "\ntwice n == " << n + n
	//	<< "\nn squared == " << n * n
	//	<< "\nhalf of n == " << n / 2
	//	<< "\nsquare root of n == " << sqrt(double(n))
	//	<< '\n'; // name for newline (“end of line”) in output

	// - - - - - - - - Detect repeated words - - - - - - - - 
	//string previous = " "; // previous word; initialized to “not a word”
	//string current; // current word
	//while (cin >> current) { // read a stream of words
	//	if (previous == current) // check if the word is the same as last
	//		cout << "repeated word: " << current << '\n';
	//	previous = current;
	//	cout << previous << "\n";
	//}

	// - - - - - - - - Unsafe conversion - - - - - - - -
	//double d = 0;
	//while (cin >> d) { // repeat the statements below
	//// as long as we type in numbers
	//	int i = d; // try to squeeze a double into an int
	//	char c = i; // try to squeeze an int into a char
	//	int i2 = c; // get the integer value of the character
	//	cout << "d==" << d // the original double
	//		<< " i==" << i // converted to int
	//		<< " i2==" << i2 // int value of char
	//		<< " char(" << c << ")\n"; // the char
	//}
	//double x{ 2.7 }; // OK
	//int y = x; // error: double -> int might narrow

	// - - - - - - - - Chapter 3 drill call - - - - - - - -
	//drill_ch3();


	// - - - - - - - - - - - - - - - - - CHAPTER 3 - - - - - - - - - - - - - - - - - - - - 
	// 
	// - - - - - - - - Loops - - - - - - - - 
	//int i = 0; // the for-statement initializer
	//while (i < 100) { // the for-statement condition
	//	cout << i << '\t' << square(i) << '\n'; // the for-statement body
	//	++i; // the for-statement increment
	//}
	//for (int i = 0; i < 100; ++i) { // for i in the [0:100) range
	//	cout << i << '\t' << square(i) << '\n';
	//}

	// - - - - - - - - Vectors - - - - - - - -
	//vector<int> v = { 5, 7, 9, 4, 6, 8 }; // vector of 6 ints
	//for (int i = 0; i < v.size(); ++i)
	//	cout << v[i] << '\n';
	//for (int x : v) // for each x in v
	//	cout << x << '\n';
	//v.push_back(2.7); // add an element with the value 2.7 at end (“the back”) of v

	// simple dictionary: list of sorted words, cin loop can be terminated by CTRL + Z
	//vector<string> words;
	//int iter = 0;
	//for (string temp; cin >> temp; )
	//{
	//	words.push_back(temp); // put into vector
	//	++iter;
	//	if (iter == 5) {
	//		for (string elem : words) // for each x in v
	//			cout << elem << '\n';
	//		break;
	//	}
	//}
	//cout << "Number of words: " << words.size() << '\n';
	//sort(words); // sort the words
	//for (int i = 0; i < words.size(); ++i)
	//	if (i == 0 || words[i-1] != words[i]) // is this a new word?
	//		cout << words[i] << "\n";

	// - - - - - - - - Chapter 4 drill call - - - - - - - -
	//drill_ch4();


	return 0;
}