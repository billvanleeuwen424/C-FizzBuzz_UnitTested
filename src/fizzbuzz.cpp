#include "fizzbuzz.h"

string FizzBuzz(int num)
{
    string returnValue = std::to_string(num);

    if(num % 3 == 0){
        returnValue = "Fizz";
    }

    if(num % 5 == 0){
        returnValue = "Buzz";
    }

    if(num % 5 == 0 && num % 3 == 0){
        returnValue = "FizzBuzz";
    }

    return returnValue;
}
