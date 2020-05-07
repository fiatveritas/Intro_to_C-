//Written by:           Jesse Gallegos
//Assignment:           Homework Project Problem Page 245 #15 (8th Edition Savitch)
//Date:                 17 October 2018
/*Description:          This program accepts 
                        change from a user in
                        the form of quarters,
                        dimes, and nickels.
                        The program determines
                        if the user inputs the
                        correct change and 
                        gives back any leftover.*/

#include <iostream>
using namespace std;

const double TWINKIE_PRICE(3.50), QUARTER(0.25),
             DIME(0.10), NICKEL(0.05);

double quarters(double, double);
//function for when user inputs quarters. adds quarter to total.
double dimes(double, double);
//function for when user inputs dimes. adds dime to total.
double nickels(double, double);
//function for when user inputs nickels. adds nickel to total
double passing_value(char, double);
//passes choice of QUARTER, DIME, OR NICKEL by user
bool check_input(char);
//checks whether inputs is valid
bool is_done(double);
//checks if user reached price

int main(){

	char choice, again;

	cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

	cout << "This program computes\n"
	     << "whether a user has\n"
	     << "enough change to pay\n"
	     << "for a fried twinke.\n";

	do{
		double total(0);//declaration needs to be here to reset total to zero after each trial

		do{

			do{

				cout << "Please enter change:\n"
    		         << "Quarters (Q or q)\n"
    		         << "Dimes (D or d)\n"
    		         << "Nickels (N or n) ";

    		    cin >> choice;
    	    }while(!check_input(choice));

    	    total = passing_value(choice, total);
        }while(!is_done(total));

        if(total >= TWINKIE_PRICE)
        	cout << "Enjoy your deep fried Twinkie.\n"
                 << "Your change is: " << total - TWINKIE_PRICE << endl;
        else
        	cout << "Enjoy your deep fried Twinkie.\n"
                 << "Your change is: " << TWINKIE_PRICE - total << endl;

             << "Would you like to continue? (Y/N) ";
        cin >> again;
    }while(again == 'y' || again == 'Y');

	return 0;
}

double quarters(double total){//adds quarter to total
	total += QUARTER;
	cout << "Total inserted: "<< total << endl;
	return total;
}

double dimes(double total){//adds dime to total
	total += DIME;
	cout << "Total inserted: "<< total << endl;
	return total;
}

double nickels(double total){//adds nickel to total
	total += NICKEL;
	cout << "Total inserted: "<< total << endl;
	return total;
}

double passing_value(char choice, double total){
	if(choice == 'Q' || choice == 'q')
		total = quarters(total);
	else if(choice == 'D' || choice == 'd')
		total = dimes(total);
	else if(choice == 'N' || choice == 'n')
		total = nickels(total);
	return total;
}

bool check_input(char dummy){//checks whether user input is correct
	if(dummy == 'Q' || dummy == 'q')
		return true;
	else if(dummy == 'D' || dummy == 'd')
		return true;
	else if(dummy == 'N' || dummy == 'n')
		return true;
	else
		return false;
}
bool is_done(double total){//checks if user input more than or equal to twinkie price
	if(total >= TWINKIE_PRICE)
		return true;
	else
		return false;
}