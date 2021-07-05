#pragma once
#include<string>
class Financial
{
public:
	double profit; // чистая прибыль
	int rentability; // рентабельность
	double gain; // выручка

	Financial();
	Financial(double, int, double);

	std::string getInfo();
};

