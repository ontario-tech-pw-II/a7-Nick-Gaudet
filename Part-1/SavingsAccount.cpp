#include "SavingsAccount.h"
#include <iomanip>
using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	// your code
	interestRate = rate;
	if(rate <= 0) {
		interestRate = 0;
	}
	
}

double SavingsAccount::calculateInterest() {
	// your code
	return getBalance()*interestRate;
}
void SavingsAccount::display(ostream & os) const
{
	// your code
	cout << "Account Type: Savings" << endl;
	cout << "Balance: $" << fixed << setprecision(2) << getBalance() << endl;
	cout << "Interest Rate(%): " << interestRate * 100 << endl;
}
