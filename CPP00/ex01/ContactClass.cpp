//
// Created by Aleksey Tvorogov on 22/10/2022.
//

#include "ContactClass.h"

Contact::Contact(void){
	this->_firstname = "";
	this->_lastname = "";
	this->_nickname = "";
	this->_phone = "";
	this->_secret = "";
}

Contact::~Contact(void){}

/* Setters */
void Contact::setFirstName(std::string str){
	this->_firstname = str;
}
void Contact::setLastName(std::string str){
	this->_lastname = str;
}
void Contact::setNickName(std::string str){
	this->_nickname = str;
}
void Contact::setPhoneNumber(std:: string str){
	this->_phone = str;
}
void Contact::setDarkestSecret(std::string str){
	this->_secret = str;}


/* Getters */
std::string Contact::getFirstName(void) const{
	return (this->_firstname);
}
std::string Contact::getLastName(void) const{
	return (this->_lastname);
}
std::string Contact::getNickName(void) const{
	return (this->_nickname);
}
std:: string Contact::getPhoneNumber(void) const{
	return (this->_phone);
}
std:: string Contact::getDarkestSecret(void) const{
	return (this->_secret);
}
