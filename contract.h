#pragma once
#include "length.h"
class Contract : public Length
{
public:
	Contract() {};
	void agreement()
	{
		Length length;
		length.time();
		bool treaty = rand();
		if (treaty == 1)
		{
			int dep_date;
			SetColor(7, 0);
			cout << "дата отправления" << endl;
			cin >> dep_date;
		}
		else
		{
			SetColor(8, 0);
			cout << "предложения отклонены";
		}
	}
};