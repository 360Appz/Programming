
#include "CashFlowCalculator.cpp"

#include <iostream>

using namespace std;

int main(int argc, const char* argv[])
{
	if (argc != 2)
	{
		cout << " usage: progName <interest rate> " << endl;
		return 1;
	}
	double rate = atof(argv[1]);
	CashFlowCalculator cfc(rate);
    do
    {
        int period;
        cin >> period;
        if(period== -1) //Breaks the loop
        {
            break;
        }
        double value;
        cin >> value;
        cfc.addCashPayment(value,period);
    } while (1);

    double result = cfc.presentValue();

    cout<<"The present value is "<<result<<endl;

	return 0;
}
