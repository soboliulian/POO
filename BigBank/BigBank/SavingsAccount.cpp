//#include "stdafx.h"
#include "SavingsAccount.h"
SavingsAccount::SavingsAccount(String ^holder):BankAccount(holder){ }
void SavingsAccount::SetIterestRate(double rate)
{
	interestRate - rate;

}
double SavingsAccount::GetInterestRate()
{
	return interestRate;
}