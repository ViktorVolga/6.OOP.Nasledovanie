#pragma once

#include <iostream>
#include<string>

using namespace std;

class iElectronics 
{
	float price;
	string name;

public:
	iElectronics(string& name, float price); //����������� � ����������� 
	virtual ~iElectronics() = default; //���������� �� ��������� - ��� �����������
	virtual void Showinfo(); // ������� ������ ���������� �� ����������.
};
