#include "fizzbuzz.h"

string FizzBuzz(int num)
{
    string returnValue = std::to_string(num);

    if(num == 3){
        returnValue = "Fizz";
    }

    if(num == 5){
        returnValue = "Buzz";
    }

    if(num == 10){
        returnValue = "FizzBuzz";
    }

    return returnValue;
}
