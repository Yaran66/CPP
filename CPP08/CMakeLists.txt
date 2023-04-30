cmake_minimum_required(VERSION 3.20)
project(CPP08)

set(CMAKE_CXX_STANDARD 98)

add_executable(CPP08 main.cpp ex00/main.cpp ex00/easyfind.h ex01/Span.cpp ex01/Span.h ex01/main.cpp ex02/main.cpp ex02/MutantStack.h)
