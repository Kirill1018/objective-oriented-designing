#pragma once
#include "direction.h"
class Italy : public Direction, public Client
{
public:
	Italy() {};
	void trend()
	{
		Italy italian;
		cout << "италия (климат: субтропический; класс отеля: двухзвёздочный). цена=" << italian.italy_cost << endl;
	}
};