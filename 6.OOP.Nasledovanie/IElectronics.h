#pragma once

#include <iostream>

class iElectronics 
{
	float price;
	std::string* name;

public:
	iElectronics(std::string* name, float price) //����������� � ����������� 
	virtual ~iElectronics() = default; //���������� �� ��������� - ��� �����������
	virtual void Showinfo(); // ������� ������ ���������� �� ����������.
};
