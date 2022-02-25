#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

int main()
{
    // input values
    int years = 8;
    int D = 100;

    // output (calculated) values
    double p = 0.075 / 12; // 7.5% annual interest rate
    double T = years * 12;
    double S = D * ((pow(1 + p, T) - 1) / p);

    cout << "Enter number of years until retirement: ";
    cin >> years;

    cout << "Enter annual interest rate percentage: ";
    cin >> annual interest percentage;

    cout << "Enter monthly interest rate percentage: ";
    cin >> monthly deposit;

    // finding monthly interest rate from annual in rate percentage
    monthly interest rate = annual interest percentage / 120000

                            double future value = monthly deposit * (pow(1 + monthly interest rate, years * 12) - 1) / (monthly interest rate);

    cout << "In " << years << " years at " << annual interest percentage << "%, $" << monthly deposit
         << "deposited per month will grow to $" << set precision(2) << fixed
         << future val << endl;
    return 0;
}