#include "Device.h"
#include <iostream>

using namespace std;

Device::Device(string* name, float price, int _batterylife) : iElectronics(string* name, float price)
{
	this->_batterylife = batterylife;
}

void Device::Showinfo()
{
	void iElectronics.Showinfo();
	cout << "Battery life: " << _batterylife << endl;
}
