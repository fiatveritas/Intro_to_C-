//Written by:           Jesse Gallegos
//Assignment:           Homework Project Problem Page 102 #9 (8th Edition Savitch)
//Date:                 21 September 2018
//Description:          The program computes the amount of interest
//                      you pay on a loan of $1000.00 with $50.00
//                      monthly payments at a rate of 18.00% APR.
//						This program also computes the months to
//                      such debt.
#include <iostream>
using namespace std;

int main(){
	const double INTEREST_RATE(0.015), MONTHLY_PAYMENT(50.00);
	
	double amount_owed(1000.00), interest_paid_to_date(0.00),  
	       time_of_debt(0), interest_paid_month, payoff, temp;
	/*
      Variables Explained:
	  1) amount_owed is what the borrower owes.
	  2) INTEREST_RATE is the interest rate of the loan.
	  3) MONTHLY_PAYMENT is the payment made by the borrower
	  4) interest_paid_to_date tallies the total interest
	  	paid by the borrower.
	  5) time_of_debt tallies the number of months it takes
	  	to payoff the loan.
	  6) interest_paid_month helps to debug code. It echoes what
	  	the borrower pays per month given a balance.
	  7) pay_off is what the borrower needs to pay on the
	  	last payment to clear the balance to $0.00.
	  8) temp is a place holder variable used arbitrarily.
	  */
    cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "This program computes how\n"
	     << "many months it takes to pay\n"
	     << "a loan of $1000.00 at a rate\n"
	     << "18.00\% APR. This program also\n"
	     << "computes the total interest\n"
	     << "paid in the life of the loan.\n";
	while(amount_owed > 0){
		time_of_debt += 1;
		temp = amount_owed;

		interest_paid_month = amount_owed * INTEREST_RATE; //simple computation to get the interest paid

		interest_paid_to_date += amount_owed * INTEREST_RATE; //this tallies the total interest paid

		if(amount_owed > 50){
			amount_owed -= MONTHLY_PAYMENT - amount_owed * INTEREST_RATE; /*this checks if the amount owed is less than 50
                                                                            this block updates the amount owed by subtracting
			                                                                what's left over from monthly pay after deducting
																		    interest.*/
		}
		else{                             //if the amount owed is less than $50.00, then the pay off is computed.
			payoff = amount_owed * 1.015;
			amount_owed *= 1.015;
			amount_owed -= payoff; 
		}
	}

	cout << "Months required for repayment: " << time_of_debt << endl;
	cout << "Interest that will be paid: $" << interest_paid_to_date << endl; 
	return 0;
}