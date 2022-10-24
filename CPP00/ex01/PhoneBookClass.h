//
// Created by Aleksey Tvorogov on 22/10/2022.
//

#ifndef PHONEBOOKCLASS_H
#define PHONEBOOKCLASS_H

#include "ContactClass.h"

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();
	int Add();
	void Search() const;

private:
	Contact _contacts[8];
};


#endif //PHONEBOOKCLASS_H
