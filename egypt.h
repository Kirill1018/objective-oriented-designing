#pragma once
#include "direction.h"
class Egypt : public Direction, public Client
{
public:
	Egypt() {};
	void trend()
	{
		Egypt egyptian;
		SetColor(11, 0);
		cout << "������ (������: �����������; ����� �����: ������������). ����=" << egyptian.egypt_cost << endl;
	}
};