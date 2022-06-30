/*
* Get name and age
* display the age in months
*/
#include "../../headers/std_lib_facilities.h"

int main()
{
    string name = "default";
    double age = 0;

    cout << "Enter your first name: \n";
    cin >> name;
    cout << "Enter your age: \n";
    cin >> age;

    cout << "Your age is " << age << " years, and in months is " << age * 12 << " months!\n";

    return 0;
}
