
//Prevent C++ header files from being included multiple times.
#ifndef __FinancialSamples__CashFlowCalculator__ 
#define __FinancialSamples__CashFlowCalculator__

#include <vector>

using namespace std;

class CashFlowCalculator
{
public:
	CashFlowCalculator(double rate);
	CashFlowCalculator(const CashFlowCalculator& v);
	CashFlowCalculator &operator = (const CashFlowCalculator& v);
	~CashFlowCalculator();

	void addCashPayment(double value, int timePeriod);
	double presentValue();


private:

//Vector is a container in STL, a dynamic array that can be expanded
// anytime and can be accessed through pointers
	vector <double>m_cashPayments;
	vector<int>m_timePeriods;
	double m_rate;
	double presentValue(double futureValue, int timePeriod);
		

};


#endif /* defined(__FinancialSamples__CashFlowCalculator__) */
