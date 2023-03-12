#pragma once
#include "direction.h"
class Australia : public Direction, public Client
{
public:
	Australia() {};
	void trend()
	{
		Australia australia;
		SetColor(1, 0);
		cout << "австралия (климат: тропический; класс отеля: трёхзвёздочный). цена=" << australia.austr_cost << endl;
	}
};