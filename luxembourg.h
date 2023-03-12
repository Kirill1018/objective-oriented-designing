#pragma once
#include "direction.h"
class Luxembourg : public Direction, public Client
{
public:
	Luxembourg() {};
	void trend()
	{
		Luxembourg luxemburg;
		cout << "люксембург (климат: умеренный; класс отеля: однозвёздочный). цена=" << luxemburg.luxembourg_cost << endl;
	}
};