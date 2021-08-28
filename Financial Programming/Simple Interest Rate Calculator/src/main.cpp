

#include "IntRateCalculator.h"
#include "IntRateCalculator.cpp"
#include <iostream>

using namespace std;

int main(int argc, const char* argv[])
{
	if (argc != 3)
	{
		cout << "usage: progName <interest rate> <value>" << endl;
		return 1;
	}
	double rate = atof(argv[1]);
	double value = atof(argv[2]);

	IntRateCalculator irCalculator(rate);
	double res = irCalculator.singlePeriod(value);
	cout << "result is " << res << endl;
	return 0;
}

