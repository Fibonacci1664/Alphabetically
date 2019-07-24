/*
A simple program that sorts words in to alphabetical order.

© D. Green 2019
*/

#include "D:\Visual_Studio_Projects_Cpp_book\std_lib_facilities.h"

int main()
{
	cout << "Please enter three names to be sorted alphabetically:> \n";

	string name_1;
	string name_2;
	string name_3;

	cin >> name_1 >> name_2 >> name_3;

	cout << "You entered the names: " << name_1 << ", " << name_2 << ", " << name_3 << ".\n";

	string first;
	string middle;
	string last;

	if (name_1 < name_2 && name_1 < name_3)
	{
		first = name_1;

		if (name_2 < name_3)
		{
			middle = name_2;
			last = name_3;
		}
		else
		{
			middle = name_3;
			last = name_2;
		}
	}
	else if (name_2 < name_1 && name_2 < name_3)
	{
		first = name_2;

		if (name_1 < name_3)
		{
			middle = name_1;
			last = name_3;
		}
		else
		{
			middle = name_3;
			last = name_1;
		}
	}
	else
	{
		first = name_3;

		if (name_1 < name_2)
		{
			middle = name_1;
			last = name_2;
		}
		else
		{
			middle = name_2;
			last = name_1;
		}
	}

	cout << "The names in alphabetical order are: " << first << ", " << middle << ", " << last << ".\n";

	return 0;
}