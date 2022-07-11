#include "../../headers/std_lib_facilities.h"

int main()
{
	// input variables
	string first_name;
	string friend_name;
	char friend_sex = '0';
	int age;

	// variable messages
	string gender_message;
	string age_message;

	// get inputs values
	cout << "Enter the name of the person you want to write to: ";
	cin >> first_name;
	cout << "Enter a friend name: ";
	cin >> friend_name;
	cout << "If your friend is male type 'm', or type 'f' if is female: ";
	cin >> friend_sex;
	cout << "Enter the recipient age: ";
	cin >> age;

	// **** CONDITIONS SECTION ****
	// custom message based on sex
	if (friend_sex == 'm')
	{
		gender_message = "If you see " + friend_name + " please ask him to call me";
	}
	else
	{
		gender_message = "If you see " + friend_name + " please ask her to call me";
	}

	// age calculations
	if (age < 0 || age > 110)
	{
		simple_error("You are kidding!");
	}
	else if (age < 12)
	{
		int age_plus1 = age + 1;
		age_message = "Next year you will be " + to_string(age_plus1 + 1);
	}
	else if (age == 17)
	{
		age_message = "Next year you will be able to vote";
	}
	else if (age > 70)
	{
		age_message = "I hope you are enjoying retirement";
	}
	else
	{
		age_message = "Cheers!";
	}

	// display letter
	cout << "Dear " << first_name << ",\n"
		<< "\tHow are you? I am fine. I miss you!\n"
		<< "\tHave you seen " << friend_name << " lately?\n"
		<< "\t" << gender_message << '\n'
		<< "\tI hear you just had a birthday and you are " << age << " years old. " << age_message << ".\n"
		<< "\tYours sincerely\n\n\nAldair\n";

	return 0;
}
