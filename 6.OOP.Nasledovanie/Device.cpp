#include "Device.h"
#include <iostream>

using namespace std;

Device::Device(string& name, float price, int _baterylife) : iElectronics(name, price)
{
	this->_baterylife = _baterylife;
}

void Device::Showinfo()
{
	
	cout << "Battery life: " << _baterylife << endl;
}
