/*
1. This drill is to write a program that produces a simple form letter based on
user input. Begin by typing the code from ?3.1 prompting a user to enter
his or her first name and writing ?Hello, first_name? where first_name is
the name entered by the user. Then modify your code as follows: change
the prompt to ?Enter the name of the person you want to write to? and
change the output to ?Dear first_name,?. Don?t forget the comma.
2. Add an introductory line or two, like ?How are you? I am fine. I miss
you.? Be sure to indent the first line. Add a few more lines of your choosing
? it?s your letter.
3. Now prompt the user for the name of another friend, and store it in friend_
name. Add a line to your letter: ?Have you seen friend_name lately??
4. Declare a char variable called friend_sex and initialize its value to 0.
Prompt the user to enter an m if the friend is male and an f if the friend is
female. Assign the value entered to the variable friend_sex. Then use two
if-statements to write the following:
If the friend is male, write ?If you see friend_name please ask him to
call me.?
If the friend is female, write ?If you see friend_name please ask her to
call me.?
5. Prompt the user to enter the age of the recipient and assign it to an int
variable age. Have your program write ?I hear you just had a birthday
and you are age years old.? If age is 0 or less or 110 or more, call simple_
error("you're kidding!") using simple_error() from std_lib_facilities.h.
6. Add this to your letter:
If your friend is under 12, write ?Next year you will be age+1.?
If your friend is 17, write ?Next year you will be able to vote.?
If your friend is over 70, write ?I hope you are enjoying retirement.?
Check your program to make sure it responds appropriately to each kind
of value.
7. Add ?Yours sincerely,? followed by two blank lines for a signature, followed
by your name.
*/

#include "std_lib_facilities.h"


void drill_ch3() 
{
	cout << "Please Enter the name of the person you want to write to:\n";
	string first_name = "";
	cin >> first_name;
	cout << "Dear " << first_name << ",\n"
		<< "How are you ?\n"
		<< "I am fine.I miss you.\n";
	cout << "What was the name of out friend:\n";
	string friend_name = "";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";
	char friend_sex = 0;
	cout << "Please Enter gender of our friend, (m)ale of (f)emale?\n";
	cin >> friend_sex;
	string gend_text;
	if (friend_sex == 'm') {
		gend_text = "him";
	}
	else if (friend_sex == 'f') {
		gend_text = "her";
	}
	cout << "If you see " << friend_name << " please ask " << gend_text << " to call me.\n";
	cout << "Please enter the age of our friend:\n";
	int age;
	cin >> age;
	if (age <= 0 || age >= 110) {
		simple_error("you're kidding!");
	}
	if (age < 12) {
		cout << "Next year you will be " << age+1 << ".\n";
	}
	if (age == 17) {
		cout << "Next year you will be able to vote.\n";
	}
	cout << "Yours sincerely.\n\nAnil";
}