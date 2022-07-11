// program that converts miles into kilometers

#include "../../headers/std_lib_facilities.h"

int main()
{
	//variables
	double miles;
	double kilometers;
	double km_per_ml = 1.609;

	//input miles from the user
	cout << "Enter the miles that you want to convert to kilometers: ";
	cin >> miles;

	//math operation
	kilometers = miles * km_per_ml;


	//output result
	cout << miles << " miles in are " << kilometers << " kilometers!\n";

	return 0;
}