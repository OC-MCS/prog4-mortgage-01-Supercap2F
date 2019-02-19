#include <iostream>
#include "Mortgage.h"
#include <math.h>
using namespace std;

// implementation file for Mortgage class
Mortgage::Mortgage() {
	payment = 0;
	loan =0;
	rate =0;
	years =0;
	term = 0;
}

// setters
void Mortgage::setLoan(double a) {
	loan = a;
}

void Mortgage::setInterestRate(double i) {
	rate = i;
}

void Mortgage::setYears(int y) {
	years = y;
}

// getters
double Mortgage::getPayment() {
	// calculate the term
	term = pow((1 + (rate / 12)), (12 * years));

	// calculate the payment 
	payment = loan * (rate / 12) * term;
	payment = payment / (term - 1);

	return payment;
}

double Mortgage::getTotalPaid() {
	double total;

	total = payment * 12 * years; 

	return total;
}