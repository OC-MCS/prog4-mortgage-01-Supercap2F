#pragma once
// header file for Mortgage class
class Mortgage {
private:
	double payment; // holds the monthly payment
	double loan;    // holds the total loan amount
	double rate;    // holds the monthly rate of the loan 
	double term;    // contains the term 
	int years;		// holds the total period of the loan

public:
	// constructors 
	Mortgage();

	// setters
	void setLoan(double);
	void setInterestRate(double);
	void setYears(int);

	// getters
	double getPayment();
	double getTotalPaid();

};
