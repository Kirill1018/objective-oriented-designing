#pragma once
#include "bulgaria.h"
#include "denmark.h"
#include "germany.h"
#include "italy.h"
#include "luxembourg.h"
class Europe : public Bulgaria, public Denmark, public Germany, public Italy, public Luxembourg
{
public:
	Europe() {};
	void exclusion() { throw exception(); }
	void europe()
	{
		Bulgaria bulgaria;
		Denmark denmark;
		Germany germany;
		Italy italy;
		Luxembourg luxembourg;
		SetColor(12, 0);
		cout << "1. ";
		bulgaria.trend();
		cout << "2. ";
		denmark.trend();
		cout << "3. ";
		germany.trend();
		cout << "4. ";
		italy.trend();
		cout << "5. ";
		luxembourg.trend();
		Europe _europe;
		_europe.selection();
	}
	void selection()
	{
		try
		{
			SetColor(13, 0);
			cout << "выбор страны" << endl;
			int option;
			cin >> option;
			if (option == 1)
			{
				Bulgaria bulgaria;
				bulgaria.trend();
			}
			else if (option == 2)
			{
				Denmark denmark;
				denmark.trend();
			}
			else if (option == 3)
			{
				Germany germany;
				germany.trend();
			}
			else if (option == 4)
			{
				Italy italy;
				italy.trend();
			}
			else if (option == 5)
			{
				Luxembourg luxembourg;
				luxembourg.trend();
			}
			else
			{
				Europe _europe;
				_europe.exclusion();
			}
		}
		catch (const exception&)
		{
			SetColor(14, 0);
			cout << "ошибка" << endl;
		}
	}
};