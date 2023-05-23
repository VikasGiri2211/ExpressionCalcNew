cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(ExpressionCalcNew)   # this is the improved and updated previous ExpressionCalc which uses classes and object mainly to perform all tasks.

add_subdirectory(lib)         # lib is the folder containing all header files inside an include subfolder.

#NOTE: add_subdirectory includes the subdirectory specified and executes the CMakeLists.txt in it. This is the standard professional practice that we use in this project.

add_subdirectory(samples)     # samples folder is made to do my sample tests.

#add_subdirectory(googletest)  # googletest folder is cloned using command -> git clone https://github.com/google/googletest.git -b v1.13.0

#add_subdirectory(tests)     # this is the folder to perform google test.