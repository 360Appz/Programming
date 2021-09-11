
//Prevent C++ header files from being included multiple times.
#ifndef __FinancialSamples__CompoundIntRateCalculator__ 
#define __FinancialSamples__CompoundIntRateCalculator__


class CompoundIntRateCalculator
{
public:
	CompoundIntRateCalculator(double rate);
	CompoundIntRateCalculator(const CompoundIntRateCalculator& v);
	CompoundIntRateCalculator &operator = (const CompoundIntRateCalculator& v);
	~CompoundIntRateCalculator();

	double multiplePeriod(double value, int numPeriods);
	double continuousCompounding(double value, int numPeriods);


private:
	double m_rate;
		

};


#endif /* defined(__FinancialSamples__IntRateCalculator__) */
