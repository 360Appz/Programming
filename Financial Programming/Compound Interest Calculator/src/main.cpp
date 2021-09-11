

#include "CompoundIntRateCalculator.h"
#include "CompoundIntRateCalculator.cpp"
#include <iostream>

using namespace std;

int main(int argc, const char* argv[])
{
	if (argc != 4)
	{
		cout << "usage: progName <interest rate> <present value> <numPeriods>" << endl;
		return 1;
	}
	double rate = atof(argv[1]); //Interprets string as float data type, return type is double
	double value = atof(argv[2]);
	int num_periods = atoi(argv[3]);

	CompoundIntRateCalculator cIRCalc(rate);
	double res = cIRCalc.multiplePeriod(value , num_periods);

	double contRes = cIRCalc.continuousCompounding(value, num_periods);
	
	cout << " future value for multiple period compounding is " << res
<< endl;

cout << " future value for continuous compounding is " << contRes
<< endl;
	return 0;
}

