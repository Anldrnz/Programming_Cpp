/*
Go through this drill step by step. Do not try to speed up by skipping steps. Test
each step by entering at least three pairs of values — more values would be better.
1. Write a program that consists of a while-loop that (each time around the
loop) reads in two ints and then prints them. Exit the program when a
terminating '|' is entered.
2. Change the program to write out the smaller value is: followed by the
smaller of the numbers and the larger value is: followed by the larger
value.
3. Augment the program so that it writes the line the numbers are equal
(only) if they are equal.
4. Change the program so that it uses doubles instead of ints.
5. Change the program so that it writes out the numbers are almost equal
after writing out which is the larger and the smaller if the two numbers
differ by less than 1.0/100.
6. Now change the body of the loop so that it reads just one double each
time around. Define two variables to keep track of which is the smallest
and which is the largest value you have seen so far. Each time through
the loop write out the value entered. If it’s the smallest so far, write the
smallest so far after the number. If it is the largest so far, write the largest
so far after the number.
7. Add a unit to each double entered; that is, enter values such as 10cm,
2.5in, 5ft, or 3.33m. Accept the four units: cm, m, in, ft. Assume conversion
factors 1m == 100cm, 1in == 2.54cm, 1ft == 12in. Read the unit
indicator into a string. You may consider 12 m (with a space between the
number and the unit) equivalent to 12m (without a space).
8. Reject values without units or with “illegal” representations of units, such
as y, yard, meter, km, and gallons.
9. Keep track of the sum of values entered (as well as the smallest and the
largest) and the number of values entered. When the loop ends, print the
smallest, the largest, the number of values, and the sum of values. Note
that to keep the sum, you have to decide on a unit to use for that sum; use
meters.
10. Keep all the values entered (converted into meters) in a vector. At the
end, write out those values.
11. Before writing out the values from the vector, sort them (that’ll make
them come out in increasing order).
*/

#include "std_lib_facilities.h"

constexpr double m_to_cm{ 100 };
constexpr double in_to_cm{ 2.54 };
constexpr double ft_to_cm{ 12.0 * in_to_cm };

double convert2cm(double val, char unit)
{
	switch (unit) 
	{
	case 'm':
		return val * m_to_cm;
		break;
	case 'c':
		return val;
		break;
	case 'i':
		return val * in_to_cm;
		break;
	case 'f':
		return val * ft_to_cm;
		break;
	default:
		cout << "Invalid unit input. Please use m, cm, in or ft...\n";
		return -1;
		break;
	}
}

void drill_ch4() 
{
	double num1 = 0.0;
	double num2 = 0.0;
	//double num1, num2;
	string temp;

	// Questions 1-5
	cout << "\nPlease enter two numbers and hit enter (Input of (0,0) exits the program)...\n";
	while (cin >> num1 >> num2) 
	{
		if (num1 == 0 && num2 == 0)
		{
			break;
		}
		cout << "number 1: " << num1 << " number 2: " << num2 << "\n";
		
		if (num1 < num2) 
		{
			cout << "The smaller value is: " << num1 << "\nThe larger value is: " << num2 << "\n";
		}
		else if (num2 < num1) 
		{
			cout << "The smaller value is: " << num2 << "\nThe larger value is: " << num1 << "\n";
		}
		else
		{
			cout << "The numbers are equal.\n";
		}
		if (abs(num1 - num2) < 0.01)
		{
			cout << "The numbers are almost equal.\n";
		}
		cout << "\nPlease enter two numbers and hit enter...\n";
	}
	
	// Questions 6-11
	double num3 = 0.0;
	double max_val = 0.0, min_val = 0.0;
	char unit;
	double sum_val = 0.0;
	int val_count = 0;
	vector <double> values;
	cout << "\nPlease enter two numbers and hit enter (Input of 0e exits the program)...\n";
	while (cin >> num3 >> unit)
	{
		if (num3 == 0 && unit == 'e')
		{
			break;
		}
		num3 = convert2cm(num3, unit);
		if (num3 != -1)
		{
			if (max_val == 0 && min_val == 0)
			{
				cout << "First value entered. " << num3 << " is the smallest and largest so far.\n";
				max_val = num3;
				min_val = num3;
			}
			else if (num3 > max_val)
			{
				cout << num3 << " the largest so far.\n";
				max_val = num3;
			}
			else if (num3 < min_val)
			{
				cout << num3 << " the smallest so far.\n";
				min_val = num3;
			}
			sum_val += num3;
			++val_count;
			values.push_back(num3);
		}
		cout << "\nPlease enter two numbers and hit enter...\n";

	}
	cout << "The number of values entered: " << val_count << "\n"
		<< "The sum of all values: " << sum_val << "\n"
		<< "The smallest value: " << min_val << "\n"
		<< "The largest value: " << max_val << "\n";
	sort(values);
	for (double elem : values)
	{
		cout << elem << '\n';
	}
		
}