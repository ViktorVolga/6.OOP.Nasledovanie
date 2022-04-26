#pragma once

#include <iostream>

class iElectronics 
{
	float price;
	std::string* name;

public:
	iElectronics(std::string* name, float price) //конструктор с параметрами 
	virtual ~iElectronics() = default; //деструктор по умолчанию - для наследников
	virtual void Showinfo(); // функция вывода информации об устройстве.
};
