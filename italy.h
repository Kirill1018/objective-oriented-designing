#pragma once
#include "direction.h"
class Italy : public Direction, public Client
{
public:
	Italy() {};
	void trend()
	{
		Italy italian;
		cout << "������ (������: ��������������; ����� �����: �������������). ����=" << italian.italy_cost << endl;
	}
};