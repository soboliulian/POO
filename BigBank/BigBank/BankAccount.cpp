//#include "stdafx.h"
#include "BankAccount.h"
BankAccount::BankAccount (String ^holder)
::accountHolder(holder), balance(0.0)
{

}
void BackAccount ::Credit(double amount)
{
	balance += amount;
}
void BackAccount::Debit(double amount)
{
	balance -= amount;
}
double BankAccount::GetBalance()
{
	return balance;
} 