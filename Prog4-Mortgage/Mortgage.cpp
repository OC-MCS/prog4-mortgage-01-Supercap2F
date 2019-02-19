#include <iostream>
#include "Mortgage.h"
#include <math.h>
using namespace std;

//=================================================
// Purpose: Constructor function clears variables
// Parameters:
//			none
// Returned Value: 
//			none
Mortgage::Mortgage() {
	payment = 0;
	loan =0;
	rate =0;
	years =0;
	term = 0;
}

// ========================================== setters ============
//=================================================
// Purpose: sets the loan amount
// Parameters:
//			a - total loan amount in dollars
// Returned Value: 
//			none
void Mortgage::setLoan(double a) {
	loan = a;
}


//=================================================
// Purpose: sets the interest rate 
// Parameters:
//			i - interest rate in percent 
// Returned Value: 
//			none
void Mortgage::setInterestRate(double i) {
	rate = i / 100; // convert rate to a decimal 
}


//=================================================
// Purpose: sets the number of years the loan is active
// Parameters:
//			y - number of years of the loan
// Returned Value: 
//			none
void Mortgage::setYears(int y) {
	years = y;
}

// ========================================== getters ============
//=================================================
// Purpose: Calculates the monthly payment on the loan
// Parameters:
//			none
// Returned Value: 
//			double - monthly payment in dollars
double Mortgage::getPayment() {
	// calculate the term
	term = pow((1 + (rate / 12)), (12 * years));

	// calculate the payment 
	payment = loan * (rate / 12) * term;
	payment = payment / (term - 1);

	return payment;
}

//=================================================
// Purpose: Calculates the total amount the bank gets over the period
// Parameters:
//			none
// Returned Value: 
//			double - total amount paid to the bank over the period
double Mortgage::getTotalPaid() {
	double total; // holds the total amount due

	total = payment * 12 * years; 

	return total;
}