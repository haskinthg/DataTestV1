#include "Financial.h"


Financial::Financial()
{

}

Financial::Financial(double profit,int rentability,double gain)
{
	this->profit = profit;
	this->rentability = rentability;
	this->gain = gain;
}

std::string Financial::getInfo()
{
	return std::to_string(this->profit) + " " + std::to_string(this->rentability) + " " + std::to_string(this->gain);
}