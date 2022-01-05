#boilerplate, project name, minimum version
cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 17)
project(boilerplate)

#set source files keyword
file (GLOB src_files "${PROJECT_SOURCE_DIR}/src/*.cpp")
#set test files keyword
file (GLOB test_files "${PROJECT_SOURCE_DIR}/tests/*.cpp")

#get googletest library
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
FetchContent_MakeAvailable(googletest)


#create the code executable with the source files
add_executable(boilerplate ${src_files})

#create the test executable with the test files
add_executable(tests ${test_files})
#link the test library to the file
target_link_libraries(
  tests
  gtest_main
)

#discover test file, enable testing
include(GoogleTest)
gtest_discover_tests(tests)
enable_testing()