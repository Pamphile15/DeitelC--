// Account.cpp
// Exercises from Chapter 3 "How to program C++ 8th edition"

// Self-review exercises from Chapter 3 "How to program C++ 8th edition"

// Create an Account class that a bank might use to represent customers’ bank accounts.
// Include a data member of type int to representthe account balance. Provide a constructor
// that receives an initial balance and uses it to initializethe data member.The constructor 
// should validate the initial balance to ensure that it’s greater than or equal to 0. If not,
// set the balance to 0 and display an error message indicating that the initial balance was invalid.
// Provide three member functions. Member function credit should add an amount to the current 
// balance. Member function debit should withdraw money from the Account and ensure that the
// debit amount does not exceed the Account’s balance. If it does,the balance should be left unchanged
// and the function should print a message indicating "Debit amount exceeded account balance."
// Member function getBalance should return the current balance. Createa program that creates
// two Account objects and tests the member functions of class Account.

#include <iostream>
#include "Account.h"

using namespace std;

// constructor
Account::Account ( int initBalance)
{
	if (initBalance >= 0) balance = initBalance;
	else
	{
		balance = 0;
		cout << "Initial balance was invalid. Set balance to 0" << endl;
	};
}


// Credit adds amount to current balance
void Account::credit ( int amount)
{
	balance = balance + amount;
}

// Debit withdraw money from the account
void Account::debit ( int amount)
{
	if (amount <= balance) balance = balance - amount;
	else
		cout << "Debit amount exceeded account balance.";
}

// getBalance
int Account::getBalance()
{
	return balance;
}