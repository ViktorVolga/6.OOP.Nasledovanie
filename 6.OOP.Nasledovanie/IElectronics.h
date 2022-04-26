#pragma once

#include <iostream>
#include<string>

using namespace std;

class iElectronics 
{
	float price;
	string name;

public:
	iElectronics(string& name, float price); //конструктор с параметрами 
	virtual ~iElectronics() = default; //деструктор по умолчанию - для наследников
	virtual void Showinfo(); // функция вывода информации об устройстве.
};
