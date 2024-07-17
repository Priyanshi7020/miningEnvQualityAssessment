#pragma once
#include <string>
#include <iostream>
class iAirQualityParams
{
	virtual void setPollutantName(char* name[])=0;
	virtual void setConcentration(double conC)=0;


};

