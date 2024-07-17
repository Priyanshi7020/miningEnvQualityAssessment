#pragma once
#include <iostream>
#include "iWaterQualityParams.h"
#include <string>
using namespace std;
class cWaterQualityParams: public iWaterQualityParams
{
	string pollutantName = "";
	double concentration;
public:
	void setPollutantName(const char* name);
	void setConcentration(double conC);
};

