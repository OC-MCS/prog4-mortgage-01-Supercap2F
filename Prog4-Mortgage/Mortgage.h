#pragma once
// header file for Mortgage class
class Mortgage {
private:
	double payment;
	double loan;
	double rate;
	double term;
	int years;

public:
	Mortgage();
	void setLoan(double);
	void setInterestRate(double);
	void setYears(int);

	double getPayment();
	double getTotalPaid();

};
