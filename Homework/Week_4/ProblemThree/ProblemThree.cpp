//Written by:           Jesse Gallegos
//Assignment:           Homework Project Problem Page 138 #3 
//Date:                 18 September 2018
//Description:          The program computes the price in doallers of carpet 
//                      given its cost per meter, percent of discount, minimum
//                      length required for discount, and length.
#include <iostream>
using namespace std;

int main(){
	double min_length, discount_percent, cost_per_length, carpet_length;

	cout << "Hi, this program computes the price of a carpet.\n"
		 <<"If the length of the carpet passes a threshold\n"
		 <<"you get a discount off the additional length in\n"
		 <<"meters as a percentage.\n\n";
	cout << "Please enter the minimum length in meters needed for a discount: ";
	cin >> min_length;

	cout << "Please enter the percentage of the discount: ";
	cin >> discount_percent;

	cout << "Please enter carpet length in meters: ";
	cin >> carpet_length;

	cout << "Please enter cost in dollars per meter: ";
	cin >> cost_per_length;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	if(carpet_length > min_length){
		cout << "\nThe cost of your carpet is $";
		cout << min_length * cost_per_length + (carpet_length - min_length) * (1 - discount_percent / 100) * cost_per_length << endl;
		cout << "END OF PROGRAM.\n";
	}
	else{
		cout << "\nThe cost of the carpet is $"
		     <<carpet_length * cost_per_length << endl;
		cout << "END OF PROGRAM." << endl;
	}
	return 0;
}