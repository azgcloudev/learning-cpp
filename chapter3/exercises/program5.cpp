#include "../../headers/std_lib_facilities.h"

// input 3 integers and ordered in sequence numbers example input [2 7 3] --> 2, 3, 7;
// if duplicate numbers output all example 2, 2, 6

int main()
{
	int n1;
	int n2;
	int n3;
	int smaller = 0;

	cout << "Enter three integers values\n";
	cin >> n1 >> n2 >> n3;
	/*
`	n1 n2 n3
	n1 n3 n2
	n2 n1 n3
	n2 n3 n1
	n3 n1 n2
	n3 n2 n1
	*/

	if (n1 > n2 && n2 > n3)
	{
		cout << n1 << n2 << n3;
	}
	else if (n1 > n3 && n3 > n2)
	{
		cout << n1 << "," << n3 << "," << n2 << "\n";
	}
	{
		cout << "Still under construction";
	}

	return 0;
}