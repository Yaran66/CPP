//
// Created by Aleksey Tvorogov on 13/11/2022.
//

#ifndef ITER_H
#define ITER_H

# include <iostream>

template <typename T>
void iter(T *array, int array_len, void f(T const &)) {
	if (array == NULL || f == NULL)
		return ;
	for (int i = 0; i < array_len; i++) {
		f(array[i]);
	}
}

template <typename T>
void printArr(T const &x) {
	std::cout << x << std::endl;
	return ;
}

#endif //ITER_H
