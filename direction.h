#pragma once
#include "client.h"
class Direction
{
public:
	double austr_cost = 25000.00, bangl_cost = 25000.00, bulg_cost = 25000.00, denm_cost = 48000.00, cost_of_dom_rep = 400000.00, egypt_cost = 25000.00, germ_cost = 3000.00, italy_cost = 25000.00, luxembourg_cost = 84000.00, usa_cost = 190000.00;
	Direction() {};
	virtual void trend() = 0;//информация о выбранном направлении
};