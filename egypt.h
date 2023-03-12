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
		cout << "египет (климат: тропический; класс отеля: трёхзвёздочный). цена=" << egyptian.egypt_cost << endl;
	}
};