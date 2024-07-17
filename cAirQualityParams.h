#pragma once
#include "iAirQualityParams.h"
#include <iostream>
using namespace std;
#include <string>
class cAirQualityParams: public iAirQualityParams
{
	string pollutantName = "";
	double concentration;

public:
	void setPollutantName(const char* name);
	void setConcentration(double conC);
};

