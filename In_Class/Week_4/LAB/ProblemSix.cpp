//Written by:           Jesse Gallegos
//Assignment:           LAB WORK page 105 #6
//Date:                 19 September 2018
/*Description:          This program computes your gross income,
                        social security tax, federal tax, state tax,
                        union dues, healthcare tax, and net income
                        given the number of hours worked and number
                        of dependents.*/
#include <iostream>
using namespace std;

int main(){
	double hours_worked, gross_wages, social_tax,
	       federal_tax, state_tax, health_fee, net_income;
	const double UNION_DUES = 10;
	int num_dependents;
	char choice;

	cout << "This program computes your weekly Gross\n"
	     <<"Income, weekly Deductions, and weekly Net\n" 
	     <<"Income.\n";

	do{
		cout << "\nPlease type in the number of hours worked: ";
		cin >> hours_worked;

		cout << "Please enter number of dependents: ";
		cin >> num_dependents;

		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2); //precision set to 2 because monetary values

		if(hours_worked > 40){
			gross_wages = 40 * 16.78 + (hours_worked - 40) * 16.78 * 1.5; // formula for overtime pay
			cout << "\nGross Wages: $" << gross_wages << endl;

		}
		else{
			gross_wages = hours_worked * 16.78; //basepay formula
			cout << "\nGross Wages: $" << gross_wages << endl;
		}

		social_tax = gross_wages * .06; //simple calculation of taxes
		federal_tax = gross_wages * .14;
		state_tax = gross_wages * .05;

		cout << "Social Security Tax: $" << social_tax << endl;
		cout << "Federal Income Tax: $" << federal_tax << endl;
		cout << "State Income Tax: $" << state_tax<< endl;
		cout << "Union dues: $" << UNION_DUES << endl;

		if(num_dependents >= 3) //check if healthcare tax is applicable.
			health_fee = 35;
		else
			health_fee = 0;

		cout << "Healthcare tax: $" << health_fee << endl;

		net_income = gross_wages - social_tax - federal_tax //subtract deductions from gross earnings.
		            - state_tax - health_fee - UNION_DUES;

		cout << "Net Income: $" << net_income << endl << endl;

		cout << "Do you want to recalculate?\n"
		     << "Enter \'y\' or \'Y\' to continue.\n"
		     << "Enter any other key to end ";
		cin >> choice;
	} while(choice == 'Y' || choice == 'y');

	return 0;
}