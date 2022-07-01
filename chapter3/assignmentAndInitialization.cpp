#include "../headers/std_lib_facilities.h"

// example  to detect repeated words
int main()
{
    string previus = " ";   // previous word, initilized as "not a word"
    string current;         // current word (not initilized)
    while (cin >> current) {    //read a stream of words
        if (previus == current) cout << "repeated word: " << current << '\n';   // check if a word is the same as last
        previus = current;  
    }
}