cmake_minimum_required(VERSION 3.20)
project(CPP02)

set(CMAKE_CXX_STANDARD 98)

add_executable(CPP02 main.cpp ex00/Fixed.cpp ex00/Fixed.h ex00/main.cpp ex01/Fixed.cpp ex01/Fixed.h ex01/main.cpp ex02/main.cpp ex02/Fixed.cpp ex02/Fixed.h)
