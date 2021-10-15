
#include "VolatilityCalculator.h"


#include <iostream>


using namespace std;

int main(int argc, const char* argv[])
{
	double price;

	VolatilityCalculator vc;
	for(;;)
	{
		cin>>price;
		if(price == -1)
		{
			break;
		}
		vc.addPrice(price);
	}

	
	cout << "Range volatility is " << vc.RangeVolatility() << endl;
    cout << "Average daily range is " << vc.avgDailyRange() << endl;
    cout << "Standard deviation is " << vc.stdDev() << endl;

    return 0;

}