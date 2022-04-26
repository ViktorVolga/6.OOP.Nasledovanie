#include <iostream>
#include "Laptop.h"

Laptop::Laptop(std::string* name, float price, int _batterylife, int _powerusage) : Applienc(std::string* name, float price, int _powerusage), Device(int _batterylife)
{

}

void Laptop::Showinfo()
{
	cout << Device.Showinfo << endl;
	cout << "Power usage: " << _powerusage << endl << endl;
}