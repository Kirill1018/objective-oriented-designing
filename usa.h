#pragma once
#include "direction.h"
class Usa : public Direction, public Client
{
public:
	Usa() {};
	void trend()
	{
		Usa us;
		cout << "��� (������: ���������; ����� �����: ������������). ����=" << us.usa_cost << endl;
	}
};