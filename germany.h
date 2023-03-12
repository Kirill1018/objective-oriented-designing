#pragma once
#include "direction.h"
class Germany : public Direction, public Client
{
public:
	Germany() {};
	void trend()
	{
		Germany german;
		SetColor(15, 0);
		cout << "германия (климат: умеренный; класс отеля: четырёхзвёздочный). цена=" << german.germ_cost << endl;
	}
};