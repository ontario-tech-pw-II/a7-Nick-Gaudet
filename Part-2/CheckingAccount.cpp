#include "CheckingAccount.h"
#include <iomanip>

using namespace std;

	
// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount( double initialBalance, double fee ) : Account( initialBalance ) 
{
	// your code
	transactionFee = fee;

	if(transactionFee <= 0){
		transactionFee = 0;
	}
} 

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount )
{
	// your code
	setBalance(getBalance() + amount);
} 

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount )
{
	// your code
	if (amount > getBalance()){
		return false;
	}else{
		setBalance(getBalance() - amount);
		return true;
	}

	
}

// subtract transaction fee
void CheckingAccount::chargeFee()
{
	// your code
	setBalance(getBalance() - transactionFee);
}

void CheckingAccount::display(ostream & os) const
{
	// your code
	cout << "Account Type: Checking" << endl;
	cout << "Balance: $" << fixed << setprecision(2) <<getBalance() << endl;
	cout << "Transaction Fee: " <<"$"<<fixed << setprecision(2)<< transactionFee << endl;
}
