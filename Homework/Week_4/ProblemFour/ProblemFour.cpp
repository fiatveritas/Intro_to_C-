//Written by:           Jesse Gallegos
//Assignment:           Homework Project Problem Page 138 #4
//Date:                 18 September 2018
//Description:          The program computes the amount you need to borrow
//                      given the amount needed. The program asks for amount
//                      amount needed (dollars), interest rate (percentage),
//						and  
#include <iostream>
using namespace std;

int main(){
	double amount_needed, interest_rate, loan_duration;
	double APR, duration_years, face_value; // these are calculated in the do-while loop
	char repeat;

	cout << "Hi, this program computes what amount you\n"
		 <<"need to request for a loan based off the\n"
		 <<"needed amount.\n";

	do{
	cout << "\nPlease enter amount needed in dollars: ";
	cin >> amount_needed;

	cout << "Please enter interest rate of loan: ";
	cin >> interest_rate;

	cout << "Please enter duration of loan in months: "; //echo to see if input was correct
	cin >> loan_duration;

	APR = amount_needed * interest_rate / 100;         //this is the interest rate paid per year
	duration_years = loan_duration / 12;               // this line converts months to years
	face_value = amount_needed + APR * duration_years; //this line computes the interest paid
													   //over the life of the loan

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);

	cout.precision(2);

    cout << "\nAmount you need to request is: $"
    	 << face_value << endl;
    cout << "You will pay: $" << face_value / loan_duration
    	 << " per month.\n\n";

	cout << "Do over? Enter \'Y\' or \'y\' for yes.\n"
	     <<"Press any other key to terminate. \n";
	cin >> repeat;
	}
	while(repeat == 'Y' or repeat == 'y');
	cout << "END OF PROGRAM." << endl;
	return 0;
}