#pragma once
#include "choice.h"
class Length : public Choice
{
public:
	Length() {};
	void time()
	{
		Choice variety;
		variety.alternative();
		cout << "������������ ������=";
		double _length;
		cin >> _length;
		cout << "���������" << endl;
		Australia australia;
		Bangladesh bangladesh;
		Bulgaria bulgaria;
		Denmark denmark;
		Dom_rep rep;
		Egypt egypt;
		Germany germany;
		Italy italy;
		Luxembourg luxembourg;
		Usa us;
		bool birthdate = rand();
		if (birthdate == 1)
		{
			cout << "��� ��������, � ������� ������� ���� ��������, ��������� ������ 50%" << endl;
			cout << 0.5 * _length * australia.austr_cost << "=���������" << endl;
			cout << 0.5 * _length * bangladesh.bangl_cost << "=���������" << endl;
			cout << 0.5 * _length * bulgaria.bulg_cost << "=��������" << endl;
			cout << 0.5 * _length * denmark.denm_cost << "=�����" << endl;
			cout << 0.5 * _length * rep.cost_of_dom_rep << "=������������� ����������" << endl;
			cout << 0.5 * _length * egypt.egypt_cost << "=������" << endl;
			cout << 0.5 * _length * germany.germ_cost << "=��������" << endl;
			cout << 0.5 * _length * italy.italy_cost << "=������" << endl;
			cout << 0.5 * _length * luxembourg.luxembourg_cost << "=����������" << endl;
			cout << 0.5 * _length * us.usa_cost << "=���" << endl;
		}
		else
		{
			cout << "������ ���������" << endl;
			cout << _length * australia.austr_cost << "=���������" << endl;
			cout << _length * bangladesh.bangl_cost << "=���������" << endl;
			cout << _length * bulgaria.bulg_cost << "=��������" << endl;
			cout << _length * denmark.denm_cost << "=�����" << endl;
			cout << _length * rep.cost_of_dom_rep << "=������������� ����������" << endl;
			cout << _length * egypt.egypt_cost << "=������" << endl;
			cout << _length * germany.germ_cost << "=��������" << endl;
			cout << _length * italy.italy_cost << "=������" << endl;
			cout << _length * luxembourg.luxembourg_cost << "=����������" << endl;
			cout << _length * us.usa_cost << "=���" << endl;
		}
	}
};