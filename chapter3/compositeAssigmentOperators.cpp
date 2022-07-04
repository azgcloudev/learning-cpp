/*
* ++variable --> equals to: variable = variable + 1
* += --> variable = variable + <any number>
* -= --> variable = variable - <any number>
* *= --> variable = variable * <any number>
* /= --> variable = variable / <any number>
* %= --> variable = variable % <any number>
*/

#include "../headers/std_lib_facilities.h"

int main()
{
    int number_of_words = 0;
    string previus = " ";   
    string current;         
    while (cin >> current) {    
        ++number_of_words;
        if (previus == current) cout << "repeated word: " << current << '\n';
        previus = current;  
    }
}