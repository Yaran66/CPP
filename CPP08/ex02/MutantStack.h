//
// Created by Aleksey Tvorogov on 15/11/2022.
//

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

public:

	MutantStack() : std::stack<T>() {};
	MutantStack(MutantStack const & copy) : std::stack<T>(copy) {}
	MutantStack& operator=(MutantStack const & copy) { std::stack<T>::operator=(copy); }
	~MutantStack() {};

	typedef typename std::stack<T>::container_type::iterator iterator; // we
	// are taking iterator from deque, which is in Class template std::stack
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	iterator begin() { return std::stack<T>::c.begin(); } // protected:
	// Container c from Class template std::stack
	iterator end() { return std::stack<T>::c.end(); }
	reverse_iterator rbegin() { return std::stack<T>::c.rbegin(); }
	reverse_iterator rend() { return std::stack<T>::c.rend(); }
};

#endif //MUTANTSTACK_H
