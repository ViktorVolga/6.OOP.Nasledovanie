#pragma once
#include "iElectronics.h"

class Applienc : public iElectronics
{
	int _powerUsage;
public:
	Applienc(std::string* name, float price, int _powerusage);
	void Showinfo();
};