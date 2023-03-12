#pragma once
#include "africa.h"
#include "america.h"
#include "asia.h"
#include "austr and ocean.h"
#include "car sea.h"
#include "europe.h"
class Choice : public Africa, public America, public Asia, public Austr_and_ocean, public Car_sea, public Europe
{
public:
	Choice() {};
	void exclusion() { throw exception(); }
	void alternative()
	{
		try
		{
			Client customer;
			customer.data();
			int opt;
			SetColor(4, 0);
			cout << "����� ����� �����" << endl;
			cout << "1. ������" << endl;
			cout << "2. �������" << endl;
			cout << "3. ����" << endl;
			cout << "4. ��������� � �������" << endl;
			cout << "5. ��������� ����" << endl;
			cout << "6. ������" << endl;
			cin >> opt;
			if (opt == 1)
			{
				Africa _africa;
				_africa.africa();
			}
			else if (opt == 2)
			{
				America america;
				america.american();
			}
			else if (opt == 3)
			{
				Asia _asia;
				_asia.asia();
			}
			else if (opt == 4)
			{
				Austr_and_ocean _ocean;
				_ocean.austr();
			}
			else if (opt == 5)
			{
				Car_sea ocean;
				ocean.sea();
			}
			else if (opt == 6)
			{
				Europe _europe;
				_europe.europe();
			}
			else
			{
				Choice select;
				select.exclusion();
			}
		}
		catch (const exception&)
		{
			SetColor(5, 0);
			cout << "������" << endl;
		}
	}
};