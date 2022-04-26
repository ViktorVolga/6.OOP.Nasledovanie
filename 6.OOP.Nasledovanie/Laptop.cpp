#include <iostream>
#include "Laptop.h"


Laptop::Laptop(string& name, float price, int _baterylife, int _powerUsage) : Applienc(name, price, _powerUsage), Device(_baterylife)
{

}

void Laptop::Showinfo()
{
	cout << "Power usage: " << _powerUsage << endl << endl;
}