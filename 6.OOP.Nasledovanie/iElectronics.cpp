#pragma once
#include "iElectronics.h"

iElectronics::iElectronics(string& name, float price)  //����������� � �����������
{
	this->name = name;
	this->price = price;
}

void iElectronics::Showinfo() // ������� ������� ���������� �� ����������
{
	std::cout << "������������: " << name << std::endl;
	std::cout << "����: " << price << std::endl << std::endl;
}