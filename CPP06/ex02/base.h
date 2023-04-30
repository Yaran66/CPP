//
// Created by Aleksey Tvorogov on 12/11/2022.
//

#ifndef BASE_H
#define BASE_H

# include <iostream>

class Base
{
public:
	virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

#endif //BASE_H
