//Written by:           Jesse Gallegos
//Assignment:           LAB Problem Three
//Date:                 5 September 2018
/*Description:          The program reports the amount
                        of change you have in quarters, dimes
                        and nickels. The user is asked to input
                        those quantities.*/

#include <iostream>
using namespace std;

int main(){
	int quarters, dimes, nickels, total;

	cout << "Please enter the number of quarters you have:\n";
	cin >> quarters;

	cout << "Please enter the number of dimes you have:\n";
	cin >> dimes;

	cout << "Please enter the number of nickels you have:\n";
	cin >> nickels;

	total = quarters * 25 + dimes * 10 + nickels * 5;
	cout << "You have " << total << " in cents.\n";

	return 0;
}