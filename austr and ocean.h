#pragma once
#include "australia.h"
class Austr_and_ocean : public Australia
{
public:
	Austr_and_ocean() {};
	void austr()
	{
		Austr_and_ocean ocean;
		ocean.trend();
	}
};