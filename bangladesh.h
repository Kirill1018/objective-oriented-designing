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
		cout << "��������� (������: �����������; ����� �����: �������������). ����=" << bangladesh.bangl_cost << endl;
	}
};