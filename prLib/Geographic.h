#pragma once
#include<string>
class Geographic
{
public:
	std::string country;
	std::string city;
	std::string street;
	std::string home;
	Geographic();
	Geographic(std::string, std::string, std::string, std::string);

	std::string getInfo();
};

