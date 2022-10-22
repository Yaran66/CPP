cmake_minimum_required(VERSION 3.20)
project(CPP00)

set(CMAKE_CXX_STANDARD 98)

add_executable(CPP00 main.cpp ex00/megaphone.cpp ex01/PhoneBookClass.cpp ex01/PhoneBookClass.h ex01/ContactClass.cpp ex01/ContactClass.h ex01/phonebook.cpp)
