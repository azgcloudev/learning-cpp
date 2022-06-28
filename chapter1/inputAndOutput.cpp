/* input and output is part of the standard library iostromg */

// input = istream
    // use tthe 'cin'
// output = ostream
    // use the cout, cerr and clog


// program to prompt user to give 2 numbers and print their sum
#include <iostream>

int main()
{
    std::cout << "Enter two number:" << std::endl;          // endl is a manipulator; << is a operator
    //endl ends the current line and flush the buffer (ensure the output is written in the output stream and not sit in the memory)
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;                                   // :: is the scope operator
    std:: cout << "The sum of " << v1 << " and " << v2  << " is " << v1 + v2 << std::endl;

    return 0;
}
