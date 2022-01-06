#include <gtest/gtest.h>
#include <fizzbuzz.h>

//function should return a string
TEST(FizzBuzzFunction, returnsString){
  string testString = FizzBuzz(1);
  EXPECT_EQ(testString, "1");
}

//function should return a "2" when passed 2
TEST(FizzBuzzFunction, returnsProperNumber){
  string testString = FizzBuzz(2);
  EXPECT_EQ(testString, "2");
}

//function should return a "fizz" when passed a 3
TEST(FizzBuzzFunction, returnsFizz){
  string testString = FizzBuzz(3);
  EXPECT_EQ(testString, "Fizz");
}