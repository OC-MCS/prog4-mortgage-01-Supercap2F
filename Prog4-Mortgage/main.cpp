#include <iostream>
#include <string>
#include <iomanip>
#include "Mortgage.h"
using namespace std;

// function prototypes
bool parseInt(string str, int &val);
bool parseDouble(string str, double & val);

// main goes here. Code that *uses* the Mortgage class
// goes in this file
int main() {
	Mortgage a;
	double userInput;
	int userInputInt;
	string stringInput;

	// get loan and check the input
	cout << "Please enter loan amount ($): ";
	getline(cin, stringInput);
	while(!parseDouble(stringInput, userInput)) { // make sure the data doesn't contain characters
		cout << "Input can't be a character!" << endl;
		cout << "Please enter loan amount ($): ";
		cin.clear();
		getline(cin, stringInput);
	}
	a.setLoan(userInput);

	// get the interest rate and check the input 
	cout << "Please enter interest rate (%): ";
	getline(cin, stringInput);
	while (!parseDouble(stringInput, userInput)) { // make sure the data doesn't contain characters
		cout << "Input can't be a character!" << endl;
		cout << "Please enter interest rate (%): ";
		cin.clear();
		getline(cin, stringInput);
	}
	a.setInterestRate(userInput);

	// get number of years from the user
	cout << "Please enter number of years: ";
	getline(cin, stringInput);
	while (!parseInt(stringInput, userInputInt)) { // make sure the data doesn't contain characters
		cout << "Input can't be a character!" << endl;
		cout << "Please enter number of years: ";
		cin.clear();
		getline(cin, stringInput);
	}
	a.setYears(userInputInt);

	cout << setprecision(2) << showpoint << fixed;
	cout << "===========================================" << endl;
	cout << "Monthly payment   = $" << a.getPayment() << endl;
	cout << "Total amount paid = $" << a.getTotalPaid() << endl;
	cout << "===========================================" << endl;

	return 0;
}


//=================================================
// Purpose: check if string contains an integer value
// Parameters:
//			str - string that might contain integer data
//			val - the integer that the string contains 
// Returned Value: 
//			bool - returns false if the string is just a string
bool parseInt(string str, int &val) {
	int num;
	bool success = true;
	try {
		num = stoi(str);
		val = num;
	}
	catch (std::exception &) {
		success = false;
	}
	return success;
}

//=================================================
// Purpose: check if string contains a double value
// Parameters:
//			str - string that might contain floating point data
//			val - the float that the string contains 
// Returned Value: 
//			bool - returns false if the string is just a string
bool parseDouble(string str, double & val) {
	double num;
	bool success = true;
	try {
		num = stod(str);
		val = num;
	}
	catch (std::exception &) {
		success = false;
	}
	return success;
}