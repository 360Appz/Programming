
#include "BondCalculator.cpp"


#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char* argv[])
{
	if (argc != 5)
	{
		cout << " usage: progName <institution> <principal> <coupon> <num periods> " << endl;
		return 1;
	}
	string issuer = argv[1];
    double principal = atof(argv[2]);
    double coupon = atof(argv[3]);
    int num_periods = atoi(argv[4]);

    BondCalculator bc(issuer, num_periods, principal,coupon);
    cout<<"Reading information for bond issues by "<<issuer<<endl;
    cout<<"The internal rate of return is "<<bc.interestRate()<<endl;

	return 0;
}