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
		cout << "длительность отдыха=";
		double _length;
		cin >> _length;
		cout << "стоимость" << endl;
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
			cout << "дл€ клиентов, у которых сегодн€ день рождени€, действует скидка 50%" << endl;
			cout << 0.5 * _length * australia.austr_cost << "=австрали€" << endl;
			cout << 0.5 * _length * bangladesh.bangl_cost << "=бангладеш" << endl;
			cout << 0.5 * _length * bulgaria.bulg_cost << "=болгари€" << endl;
			cout << 0.5 * _length * denmark.denm_cost << "=дани€" << endl;
			cout << 0.5 * _length * rep.cost_of_dom_rep << "=доминиканска€ республика" << endl;
			cout << 0.5 * _length * egypt.egypt_cost << "=египет" << endl;
			cout << 0.5 * _length * germany.germ_cost << "=германи€" << endl;
			cout << 0.5 * _length * italy.italy_cost << "=итали€" << endl;
			cout << 0.5 * _length * luxembourg.luxembourg_cost << "=люксембург" << endl;
			cout << 0.5 * _length * us.usa_cost << "=сша" << endl;
		}
		else
		{
			cout << "полна€ стоимость" << endl;
			cout << _length * australia.austr_cost << "=австрали€" << endl;
			cout << _length * bangladesh.bangl_cost << "=бангладеш" << endl;
			cout << _length * bulgaria.bulg_cost << "=болгари€" << endl;
			cout << _length * denmark.denm_cost << "=дани€" << endl;
			cout << _length * rep.cost_of_dom_rep << "=доминиканска€ республика" << endl;
			cout << _length * egypt.egypt_cost << "=египет" << endl;
			cout << _length * germany.germ_cost << "=германи€" << endl;
			cout << _length * italy.italy_cost << "=итали€" << endl;
			cout << _length * luxembourg.luxembourg_cost << "=люксембург" << endl;
			cout << _length * us.usa_cost << "=сша" << endl;
		}
	}
};