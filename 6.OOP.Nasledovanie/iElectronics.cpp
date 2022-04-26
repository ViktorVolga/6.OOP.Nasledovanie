#pragma once
#include "iElectronics.h"

iElectronics::iElectronics(string& name, float price)  //конструктор с параметрами
{
	this->name = name;
	this->price = price;
}

void iElectronics::Showinfo() // Функция выводит информацию об устройстве
{
	std::cout << "Наименование: " << name << std::endl;
	std::cout << "Цена: " << price << std::endl << std::endl;
}