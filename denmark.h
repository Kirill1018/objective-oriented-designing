#pragma once
#include "direction.h"
class Denmark : public Direction, public Client
{
public:
	Denmark() {};
	void trend()
	{
		Denmark dania;
		SetColor(9, 0);
		cout << "����� (������: ���������; ����� �����: ���������������). ����=" << dania.denm_cost << endl;
	}
};