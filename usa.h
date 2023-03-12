#pragma once
#include "direction.h"
class Usa : public Direction, public Client
{
public:
	Usa() {};
	void trend()
	{
		Usa us;
		cout << "сша (климат: умеренный; класс отеля: трёхзвёздочный). цена=" << us.usa_cost << endl;
	}
};