
//Prevent C++ header files from being included multiple times.
#ifndef __FinancialSamples__IntRateCalculator__ 
#define __FinancialSamples__IntRateCalculator__

#include <iostream>

class IntRateCalculator
{
public:
	/* Gppd practice to specify the four basic member functions
           automatically defined by the C++ compiler. This way, costly
            mistakes can be avoidded by having the created objects use a well-defined life cycle.*/
	IntRateCalculator(double rate); //Constructor
	IntRateCalculator(const IntRateCalculator& v); //Copy Constructor
	IntRateCalculator &operator = (const IntRateCalculator& v); //Move constructor, allows resources owned by Xvalue to be moved to Yvalue without creating a copy
	~IntRateCalculator(); //Destructor, Frees resources when constructor is destroyed
	double singlePeriod(double value); //Holds the function that returns future value of a deposit over a period (month/year)

private:
	double m_rate; //Stores current interest rate
		

};

//Inline reduces function call overhead, coomon in high performance C++ code,in execution. function call removed when executed & content of function is substituted
//Function is embedded in code that calls it
inline double IntRateCalculator::singlePeriod(double value) 
{
	double f = value * (1 + this->m_rate);
	return f;
}
#endif /* defined(__FinancialSamples__IntRateCalculator__) */
