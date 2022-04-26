#pragma once
#include "Device.h"
#include "Appliances.h"
#include "IElectronics.h"

class Laptop final : public Applienc, Device
{
public:
	Laptop(string& name, float price, int _baterylife, int _powerUsage);
	void Showinfo();
};

