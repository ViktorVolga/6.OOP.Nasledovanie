#pragma once
#include "Device.h"
#include "Appliances.h"

class Laptop final : public Applienc, Device
{
public:
	Laptop(std::string* name, float price, int _batterylife, int _powerusage)
	void Showinfo();
};

