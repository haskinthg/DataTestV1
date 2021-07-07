#include "Geographic.h"

Geographic::Geographic(std::string county, std::string city, std::string street, std::string home)
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
