#include "cWaterQualityParams.h"

void cWaterQualityParams::setPollutantName(const char* name) {
	//strcpy(pollutantName, name);
	// Assuming pollutantName is a member variable of cAirQualityParams
	strncpy(pollutantName, name, pollutantName.length() - 1);
}
void cWaterQualityParams::setConcentration(double conC) {
	concentration = conC;
}
