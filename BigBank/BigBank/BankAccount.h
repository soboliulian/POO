#pragma once
using namespace System;

ref class BankAccaunt
{
public:
	BankAccaunt(String^ holder);
	void Credit(double amouhnt);
	void Debit(double amount);
	double GetBalance();
private:
	String^ accountHolder;
	double balance;

};
