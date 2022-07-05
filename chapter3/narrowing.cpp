#include "../headers/std_lib_facilities.h"

int main()
{
    double x {1000};
    char a {x};
    //cout << a << '\n';
    /*
    * compilation error:
    * warning: narrowing conversion of ‘x’ from ‘double’ to ‘char’ [-Wnarrowing]
    * 6 |     char a {x};
    *  |
    */
    
    char c1 {'x'};
    double d1 {c1};
    char c2 {d1};
    cout << c1 << "==" << d1 << "==" << c2 << "\n";   

    return 0;
}