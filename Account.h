#pragma once
#include <vector>
#include <string>
#include "Transaction.h"
//don't use using statements like, using std::Transaction, in header files bc it may have unintended consequnces
//depending on where that header file is being used
class Account
{
private:
	int balance;
	//call by its full name
	std::vector<Transaction> log;
public:
	Account();
	std::vector<std::string> Report();
	bool Deposit(int amount);
	bool Withdraw(int amount);
	int GetBalance() { return balance; }
};