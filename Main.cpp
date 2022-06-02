#include <iostream>
using std::cout;
using std::cin;
#include <string>
using std::string;
#include "Account.h"
//Doesn't #include Transaction.h because main does not need to work with Transaction class

int main()
{
	Account a1;
	int userInput;
	bool action = true;
	int userContinue;

	while (action == true)
	{
		cout << "Press 0 for account balance, 1 to make a deposit, 2 to make a withdraw. ";
		cin >> userInput;
		
		switch(userInput) 
		{
		  case 0:
			//Account a1;
			for (auto s : a1.Report())
			{
				cout << s << '\n';
			}
		  	break;
		  case 1:
		   	int amount = 0;
			cout << "How much would you like to deposit? ";
			cin >> amount;

			//Account a1;
			a1.Deposit(amount);
			cout << "After depositing " << amount <<
				" balance is " << a1.GetBalance();
			
			if (amount < 0)
			{
				cout << " because the transaction failed. Cannot deposit a negative value";
			}

			cout << '\n';

			for (auto s : a1.Report())
			{
				cout << s << '\n';
			}
		    	break;
		  case 2:
			int amount = 0;
			int balance = a1.GetBalance();
			cout << "How much would you like to withdraw? ";
			cin >> amount;

			//Account a1;
			a1.Withdraw(amount);
			cout << "After withdrawing " << amount <<
				" balance is " << a1.GetBalance();

			if (amount > balance)
			{
				cout << " because the transaction failed. Insufficent funds ";
			}

			if (amount < 0)
			{
				cout << " because the transaction failed. Cannot withdraw a negative value ";
			}

			cout << '\n';

			for (auto s : a1.Report())
			{
				cout << s << '\n';
			}
		  	break;
		  default:
		    // default block
		    break;
		}

		cout << '\n' << "Would you like to complete another transaction? 1 for Yes, any other number to exit ";
		cin >> userContinue;

		if (userContinue != 1)
		{
			action = false;
		}
	}
}
