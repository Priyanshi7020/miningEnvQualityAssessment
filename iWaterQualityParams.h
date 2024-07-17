#pragma once
class iWaterQualityParams {
	virtual void setPollutantName(char* name[]) = 0;
	virtual void setConcentration(double conC) = 0;
};
