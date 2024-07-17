#pragma once
#include <iostream>
#include <vector>
#include "iWaterQualityParams.h"
using namespace std;
class waterQualityMonitor
{
	vector<iWaterQualityParams> storedData;
	vector <iWaterQualityParams> limits;

public:
	void setStoredData(vector<iWaterQualityParams> storedData);
	void setLimits(vector <iWaterQualityParams> limits);

};

