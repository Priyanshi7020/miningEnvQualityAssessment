#include "airQualityMonitor.h"
#include "iAirQualityParams.h"
#include <iostream>
using namespace std;

void airQualityMonitor :: setStoredData(vector<iAirQualityParams> storedData) {
	this->storedData = storedData;
}
void airQualityMonitor :: setLimits(vector <iAirQualityParams> limits) {
	this->limits = limits;
}
