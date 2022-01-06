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

//function should return a "buzz" when passed a 5
TEST(FizzBuzzFunction, returnsBuzz){
  string testString = FizzBuzz(5);
  EXPECT_EQ(testString, "Buzz");
}

//function should return a "fizzbuzz" when passed a 5
TEST(FizzBuzzFunction, returnsFizzBuzz){
  string testString = FizzBuzz(15);
  EXPECT_EQ(testString, "FizzBuzz");
}

//function should return a "fizz" when passed many multiples of 3
TEST(FizzBuzzFunction, returnsFizzMultiples){
  string testString = FizzBuzz(6);
  EXPECT_EQ(testString, "Fizz");

  testString = FizzBuzz(9);
  EXPECT_EQ(testString, "Fizz");

  testString = FizzBuzz(12);
  EXPECT_EQ(testString, "Fizz");
}

//function should return a "buzz" when passed many multiples of 5
TEST(FizzBuzzFunction, returnsBuzzMultiples){
  string testString = FizzBuzz(5);
  EXPECT_EQ(testString, "Buzz");

  testString = FizzBuzz(10);
  EXPECT_EQ(testString, "Buzz");

  testString = FizzBuzz(20);
  EXPECT_EQ(testString, "Buzz");
}

//function should return a "fizzbuzz" when passed many multiples of 3&5
TEST(FizzBuzzFunction, returnsFizzBuzzMultiples){
  string testString = FizzBuzz(30);
  EXPECT_EQ(testString, "FizzBuzz");

  testString = FizzBuzz(45);
  EXPECT_EQ(testString, "FizzBuzz");

  testString = FizzBuzz(60);
  EXPECT_EQ(testString, "FizzBuzz");
}