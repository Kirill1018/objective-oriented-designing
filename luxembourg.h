#pragma once
#include "direction.h"
class Luxembourg : public Direction, public Client
{
public:
	Luxembourg() {};
	void trend()
	{
		Luxembourg luxemburg;
		cout << "���������� (������: ���������; ����� �����: �������������). ����=" << luxemburg.luxembourg_cost << endl;
	}
};