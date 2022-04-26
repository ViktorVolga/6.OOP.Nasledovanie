#pragma once
#include "iElectronics.h"
using namespace std;

class Device : public iElectronics
{
	int _baterylife;

public:
	Device(string& name, float price, int _baterylife);
	void Showinfo();


};
