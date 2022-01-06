#include "fizzbuzz.h"

string FizzBuzz(int num)
{
    string returnValue = std::to_string(num);

    if(num == 3){
        returnValue = "Fizz";
    }

    return returnValue;
}
