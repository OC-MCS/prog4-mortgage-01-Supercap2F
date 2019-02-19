#include <iostream>
#include "Mortgage.h"
using namespace std;

// main goes here. Code that *uses* the Mortgage class
// goes in this file
int main() {
	Mortgage a;
	double userInput;

	cout << "Please enter loan amount: ";
	cin >> userInput;
	a.setLoan(userInput);

	cout << "Please enter interest rate: ";
	cin >> userInput;
	a.setInterestRate(userInput);

	cout << "Please enter number of years: ";
	cin >> userInput;
	a.setYears(static_cast<int>(userInput));

	cout << "===========================================" << endl;
	cout << "Monthly payment   = " << a.getPayment() << endl;
	cout << "Total amount paid = " << a.getTotalPaid() << endl;
	cout << "===========================================" << endl;

	char end;
	cout << "enter any char to exit";
	cin >> end;


	return 0;

}
