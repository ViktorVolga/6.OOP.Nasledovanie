#include <iostream>
#include "Appliances.h"

Applienc::Applienc(std::string* name, float price, int _powerusage) : iElectronics(std::string* name, float price)
{
	this->_powerusage = _powerusage;
}

void Applienc::Showinfo()
{
	void iElectronics.Showinfo();
	cout << "Power usage: " << _powerusage << endl;
}