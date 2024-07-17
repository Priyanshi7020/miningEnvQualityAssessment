#pragma once
#include "iAirQualityParams.h"
#include <iostream>
#include <vector>
using namespace std;
class airQualityMonitor
{
	vector<iAirQualityParams> storedData;
	vector <iAirQualityParams> limits;

public:
	void setStoredData(vector<iAirQualityParams> storedData);
	void setLimits(vector <iAirQualityParams> limits);

};

