#pragma once
#include "BankAccount.h"
ref class CurrentAccount :BankAccount
{
public:
	CurrentAccount(String^ holder, double limit);
	void Change OverdraftLimit(double newLimit);
	double GetOverdraftLimit();
private:
	double overdraftLimit;

};

