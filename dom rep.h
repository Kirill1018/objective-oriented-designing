#pragma once
#include "direction.h"
class Dom_rep : public Direction, public Client
{
public:
	Dom_rep() {};
	void trend()
	{
		Dom_rep rep;
		SetColor(10, 0);
		cout << "������������� ���������� (������: ��������������; ����� �����: �������������). ����=" << rep.cost_of_dom_rep << endl;
	}
};