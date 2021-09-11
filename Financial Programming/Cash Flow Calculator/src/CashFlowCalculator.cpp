#include "CashFlowCalculator.h"

#include <cmath>
#include <iostream>

CashFlowCalculator::CashFlowCalculator(double rate):m_rate(rate)
{

}
CashFlowCalculator::CashFlowCalculator(const CashFlowCalculator& v)
:m_rate(v.m_rate)
{

}
CashFlowCalculator::~CashFlowCalculator()
{

}

//Operator/function overloading
CashFlowCalculator &CashFlowCalculator::operator=(const CashFlowCalculator
&v)
{
    if(this != &v)
    {
        this->m_cashPayments = v.m_cashPayments;
        this->m_timePeriods = v.m_timePeriods;
        this->m_rate = v.m_rate;
    }
    return *this;
}
void CashFlowCalculator::addCashPayment(double value, int timePeriod)
{
  m_cashPayments.push_back(value); //Vector function, copies object & stores at the end of vector
  m_timePeriods.push_back(timePeriod);
}
double CashFlowCalculator::presentValue(double futureValue, int timePeriod)
{
  double pValue = futureValue / pow(1+m_rate,timePeriod);
  cout<<" value "<< pValue <<endl;
  return pValue;
}
//Compute Present Value. Determines PV for each cash exchange stored in vector and add these
// values in total variable
double CashFlowCalculator::presentValue()
{
    double total = 0;
    for (int i=0; i<m_cashPayments.size(); ++i) //Size is finds vector size
    {
        total += presentValue(m_cashPayments[i], m_timePeriods[i]);
    }
    return total;
}


