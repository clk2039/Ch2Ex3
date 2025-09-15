/*
File Name: Ch2Ex3.cpp 
Github URL:
Programmer : Kit Miller
Date : September 2025
Requirements: Create a program that will compute the total sales tax
on a $95 purchase. Assuming the state tax is 4% and the county tax is 2%
*/


#include <iostream>
using namespace std;

int main() 
{
	double purchase = 95.00;
	double stateTax = 0.04;
	double countyTax = 0.02;
    
	double stateTaxAmount = purchase * stateTax;
	double countyTaxAmount = purchase * countyTax;
	double totalTax = stateTaxAmount + countyTaxAmount;
	double fullPurchase = purchase + totalTax;

	cout << "I went to the store and saw a shirt that cost $" << purchase << endl;
	cout << "The state tax on the shirt is $" << stateTaxAmount << endl;
	cout << "The county tax on the shirt is $" << countyTaxAmount << endl;
	cout << "The total tax on the shirt is $" << totalTax << endl;
	cout << "The full price of the shirt is $" << fullPurchase << endl;

	return 0;
}
