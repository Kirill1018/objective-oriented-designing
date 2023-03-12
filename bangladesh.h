#pragma once
#include "direction.h"
class Bangladesh : public Direction, public Client
{
public:
	Bangladesh() {};
	void trend()
	{
		Bangladesh bangladesh;
		SetColor(2, 0);
		cout << "бангладеш (климат: тропический; класс отеля: пятизвёздочный). цена=" << bangladesh.bangl_cost << endl;
	}
};