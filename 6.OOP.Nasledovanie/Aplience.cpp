#include <iostream>
#include "Appliances.h"


Applienc::Applienc(string& name, float price, int _powerUsage) : iElectronics(name, price)
{
	this->_powerUsage = _powerUsage;
}

void Applienc::Showinfo()
{
	
	std::cout << "Power usage: " << _powerUsage << std::endl;
}