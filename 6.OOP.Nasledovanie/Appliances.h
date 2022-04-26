#pragma once
#include "iElectronics.h"
#include <string>

using namespace std;

class Applienc : public iElectronics
{
	int _powerUsage;
public:
	Applienc(string& name, float price, int _powerUsage);
	void Showinfo();
};