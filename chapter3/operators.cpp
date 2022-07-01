// simple program to exercise operators
#include "../headers/std_lib_facilities.h"

int main()
{
    cout << "Please enter a floating-point value: ";
    double n;
    cin >> n;
    cout << "n == " << n
        << "\nn+1 00 " << n+1
        << "\nthree times n == " << 3*n
        << "\nthwice n == " << n+n
        << "\nn squared == " << n*n
        << "\nhalf of n == " << n/2
        << "\nsquare root of n == " << sqrt(n)
        << "\n"; //new line (end of line) in output

        /*
        * result is:
        *
        * Please enter a floating-point value: 3.4
        * n == 3.4
        * n+1 00 4.4
        * three times n == 10.2
        * thwice n == 6.8
        * n squared == 11.56
        * half of n == 1.7
        * square root of n == 1.84391
        *   
        */



    // STRING OPERATORS
    cout << "Please enter your first and second name\n";
    string first;
    string second;
    cin >> first >> second;
    string name = first + " " + second;
    cout << "Hello, " << name << "\n";


    // READ AND COMPARE NAMES (STRINGS)
    cout << "Please enter two names\n";
    string firstName;
    string secondName;
    cin >> firstName >> secondName;
    if (firstName == secondName) cout << "that's the same name twice\n";
    if (firstName < secondName) cout << firstName << " is alphabetically before " << secondName << '\n';
    if (firstName > secondName) cout << firstName << " is alphabetically after " << secondName << '\n';

    return 0;
}