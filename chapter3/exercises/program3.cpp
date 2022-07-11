#include "../../headers/std_lib_facilities.h"

// ask user for 2 int and determine the smaller, larger, sum, difference, product and ratio of the values

int main()
{
	int val1;
	int val2;
	int sum;
	int difference;
	int product;
	int ratio;

	cout << "Enter two integer's:\n";
	cin >> val1 >> val2;

	// Determine the smaller and larger
	if (val1 > val2)
	{
		cout << val2 << " is the smaller number, and the larger is " << val1 << "\n";
	}
	else if (val1 < val2)
	{
		cout << val1 << " is the smaller number, and the larger is " << val2 << "\n";
	}
	else
	{
		cout << "Both numbers are equal\n";
	}

	// SUM of both numbers
	sum = val1 + val2;
	cout << "The sum of "
		 << val1 << " and "
		 << val2 << " is "
		 << sum << "\n";

	// difference
	if (val1 > val2)
	{
		difference = val1 - val2;
		cout << "The difference between the numbers is " << difference << "\n";
	}
	else if (val1 < val2)
	{
		difference = val2 - val1;
		cout << "The difference between the numbers is " << difference << "\n";
	}
	else
	{
		cout << "Both numbers are equal\n";
	}


	// PRODUCT of both numbers
	product = val1 * val2;
	cout << "The product of "
		 << val1 << " multiply by "
		 << val2 << " is "
		 << product << "\n";

	return 0;
}