#include <iostream>
#include <string>
using std::string;

#include "fizzbuzz.h"

int main()
{
    string beep;
    for(int i = 0; i < 100; i++){
        beep = FizzBuzz(i);
        std::cout << beep << '\n';
    }
}