#include "../../headers/std_lib_facilities.h"

int main()
{
    cout << "Please enter a integer value: ";
    int n;
    cin >> n;
    double numd;
    numd = n;
    cout << "n == " << n
        << "\nn+1 00 " << n+1
        << "\nthree times n == " << 3*n
        << "\nthwice n == " << n+n
        << "\nn squared == " << n*n
        << "\nhalf of n == " << n/2
        << "\nremainder of " << n << "/3 == " << n % 3
        << "\nsquare root of n == " << sqrt(n)
        << "\n";

        return 0;
}