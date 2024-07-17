#include "cAirQualityParams.h"

void cAirQualityParams::setPollutantName(const char* name) {
	//strcpy(pollutantName, name);
	// Assuming pollutantName is a member variable of cAirQualityParams
	strncpy(pollutantName, name, pollutantName.length() - 1);
}
void cAirQualityParams::setConcentration(double conC) {
	concentration = conC;
}
