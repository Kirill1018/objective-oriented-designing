#pragma once
#include "direction.h"
class Bulgaria : public Direction, public Client
{
public:
	Bulgaria() {};
	void trend()
	{
		Bulgaria bulgaria;
		SetColor(3, 0);
		cout << "�������� (������: ��������������; ����� �����: �������������). ����" << bulgaria.bulg_cost << endl;
	}
};