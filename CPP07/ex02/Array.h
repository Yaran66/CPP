//
// Created by Aleksey Tvorogov on 13/11/2022.
//

#ifndef ARRAY_H
#define ARRAY_H

# include <iostream>

template <typename T>
class Array {
public:
	Array() {
		std::cout << "Default Array constructor called" << std::endl;
		_n = 1;
		_array = new T[_n];
		_array[0] = 0;

	}
	Array(unsigned int n) {
		std::cout << "Array constructor called" << std::endl;
		this->_n = n;
		this->_array = new T[this->_n];
	}
	Array(const Array &obj) {
		std::cout << "Array Copy constructor called" << std::endl;
		this->_array = NULL;
		*this = obj;
	}
	Array &operator=(Array const &obj) {
		std::cout << "Array operator= called" << std::endl;
		if (this == &obj)
			return *this;
		if (this->_array != NULL)
			delete [] this->_array;
		if (obj.getSize() != 0) {
			this->_n = obj.getSize();
			this->_array = new T[this->_n];
			for (unsigned int i = 0; i < this->_n; i++) {
				this->_array[i] = obj._array[i];
			}
		}
		return(*this);
	}
	~Array() {
		if (this->_array != NULL)
			delete [] this->_array;
	}
	T	&operator[](unsigned int i) {
		std::cout << "Array operator[] called" << std::endl;
		if (i < 0 || i > this->_n)
			throw Array<T>::InvalidIndexException();
		return this->_array[i];
	}
	T	*getArray() const {
		return _array;
	}
	unsigned int	getSize() const {
		return _n;
	}
	class	InvalidIndexException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};
private:
	unsigned int	_n;
	T				*_array;
};

template <typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const &ar) {
	for (unsigned int i = 0; i < ar.getSize(); i++) {
		o << "array[" << i << "] = " << (ar.getArray())[i] << std::endl;
	}
	return o;
}

template <typename T>
const char	*Array<T>::InvalidIndexException::what() const throw() {
	return "!! InvalidIndexException !!";
}

#endif //ARRAY_H
