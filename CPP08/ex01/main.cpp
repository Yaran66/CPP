//
// Created by Aleksey Tvorogov on 15/11/2022.
//

#include "Span.h"

int main()
{
	std::cout << "-------- Test 1 --------" << std::endl;
	try
	{
		Span sp(21);
		std::cout << sp << std::endl;
		//std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "-------- Test main --------" << std::endl;
	try
	{
		Span sp(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		//std::cout << sp << std::endl;
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	std::cout << "-------- Test 2 --------" << std::endl;
	try
	{
		Span sp(5);
		sp.addNumber(99);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp << std::endl;
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "-------- Test 10000 --------" << std::endl;
	Span test(10000);
	srand(time(NULL));
	std::vector<int> arr;
	for (int i = 0; i < 10000; ++i)
		arr.push_back(rand());
	try
	{
		test.addNumber(arr.begin(), arr.end());
//		std::cout << test << std::endl;
		std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
		std::cout << "Longest span: " << test.longestSpan() << std::endl;
	}
	catch(std::exception & e) { std::cerr << e.what() << std::endl; }
}
