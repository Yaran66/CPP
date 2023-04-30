//
// Created by Aleksey Tvorogov on 14/11/2022.
//

#include "Array.h"

int	main(void)
{

	 int *a = new int();
	 std::cout << *a << std::endl << std::endl;

	std::cout << "Test1: empty int array" << std::endl;
	Array<int> arr;
	std::cout << arr << std::endl;
	try {
		arr[8] = 8;
	} catch (Array<int>::InvalidIndexException &e) {
		std::cout << e.what() << std::endl << std::endl;
	}

	std::cout << "Test2: int array of a specific size" << std::endl;
	Array<int> arr2(3);
	arr2[0] = 4;
	arr2[1] = 5;
	arr2[2] = 6;
	std::cout << arr2 << std::endl;
	std::cout << arr2[1] << std::endl;
	try {
		arr2[2] = 7;
	} catch (Array<int>::InvalidIndexException &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	std::cout << arr2 << std::endl;
	try {
		arr2[8] = 8;
	} catch (Array<int>::InvalidIndexException &e) {
		std::cout << e.what() << std::endl << std::endl;
	}

	std::cout << "Test3: Modifying either the original array or its copy "
				 "should not affect the other array" << std::endl;
	Array<int> arr3;
	arr3 = arr2;
	std::cout << arr3 << std::endl;
	arr3[2] = 8;
	std::cout << arr3 << std::endl;
	std::cout << arr2 << std::endl;

	Array<int> arr4(arr2);
	std::cout << arr4 << std::endl;
	arr4[2] = 14;
	std::cout << arr4 << std::endl;
	std::cout << arr2 << std::endl;

	return (0);
}
