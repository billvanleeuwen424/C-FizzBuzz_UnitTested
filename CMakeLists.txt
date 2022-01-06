#fizzbuzz, project name, minimum version
cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 17)
project(fizzbuzz)



#get googletest library
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
FetchContent_MakeAvailable(googletest)



#set source files keyword
file (GLOB src_files "${PROJECT_SOURCE_DIR}/src/*.cpp")
#set test files keyword
file (GLOB test_files "${PROJECT_SOURCE_DIR}/tests/*.cpp")
#include anything in the source directory (for easy includes)
include_directories(src)



add_library(fizzbuzzFunction src/fizzbuzz.h src/fizzbuzz.cpp)



#create the code executable with the source files
add_executable(fizzbuzz ${src_files})

#create the test executable with the test files
add_executable(tests ${test_files})

#link the libraries to the file
target_link_libraries(
  tests
  gtest_main
  fizzbuzzFunction
)




#discover test file, enable testing
include(GoogleTest)
gtest_discover_tests(tests)
enable_testing()