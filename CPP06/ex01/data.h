//
// Created by Aleksey Tvorogov on 12/11/2022.
//

# include <iostream>

#ifndef DATA_H
#define DATA_H

struct Data
{
	Data(int i, char c, float f, double d) : _i(i), _c(c), _f(f), _d(d) {}
	int _i;
	char _c;
	float _f;
	double _d;
};

#endif //DATA_H
