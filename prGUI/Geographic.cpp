#include "Geographic.h"

Geographic::Geographic(std::string country, std::string city, std::string street, std::string home)
{
	this->country = country;
	this->city = city;
	this->street = street;
	this->home = home;
}
std::string Geographic::getInfo()
{
	return this->country + " " + this->city + " " + this->street + " " + this->home;
}
