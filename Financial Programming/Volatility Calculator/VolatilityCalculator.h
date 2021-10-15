
//Prevent C++ header files from being included multiple times.
#ifndef __FinancialSamples__VolatilityCalculator__ 
#define __FinancialSamples__VOlatilityCalculator__


#include <vector>

using namespace std;

class VolatilityCalculator
{
public:
    VolatilityCalculator();
    ~VolatilityCalculator();
	VolatilityCalculator(const VolatilityCalculator &);
	VolatilityCalculator &operator=(const VolatilityCalculator &);
	

	double RangeVolatility();
    void addPrice(double price);
    double stdDev();
    double mean();
    double avgDailyRange();


private:
	vector<double>m_prices;
		

};


#endif /* defined(__FinancialSamples__VolatilityCalculator__) */
