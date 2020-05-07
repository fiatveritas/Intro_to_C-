//Written by:           Jesse Gallegos
//Assignment:           Homework Project Problem Page 245 #5 (8th Edition Savitch)
//Date:                 17 October 2018
/*Description:          This program computes the 
                        rate of inflation for the
                        previous year and the current
                        year based off the previous
                        year's price and the current
                        year's price for an item. The
                        value of the same item is predicted
                        for the next year as well the
                        year following.*/


#include <iostream>
#include <cmath>
using namespace std;

double inflation_rate(double, double);
//this function computes the rate of inflation, returns double type
double next_year_price(double, double);
//this function computes the price of an item for the following year, returns type double
bool check_input(double);
//this checks for numerical input, returns bool type

int main(){

	/*Variables Explained:
	    last_year is the previous year's price for an item
	    this_year is the current year's price for an item
	    rate_of_inflation is the inflation 
	    value_in_one_year*/

	double last_year, this_year, rate_of_inflation,
	       value_in_one_year, value_in_two_years;
	char repeat;

	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);

	cout << "This program computes the inflation rate\n"
	     << "based off last year's price and\n"
	     << "this year's price on the same item.\n"
	     << "The value of the item is computed for\n"
	     << "next year as well the year following.\n"

    do{

    	do{
    		cout << "Please enter last year's price\n"
	             << "for item: ";
	        cin >> last_year;
	    }while(!check_input(last_year));

	    do{
	    	cout << "Please enter this year's price\n"
	    	     << "for item: ";

	    	cin >> this_year;
	    }while(!check_input(this_year));

	    rate_of_inflation = inflation_rate(last_year, this_year);

	    cout.precision(1);

	    cout << "Inflation rate: " 
	         << inflation_rate 
	         << "%\n";

	    cout.precision(2);

        value_in_one_year = next_year_price(this_year, rate_of_inflation);

        cout << "Price for coming year: $" << value_in_one_year << endl;
        cout << "Price for two years after current: $" << next_year_price(value_in_one_year, rate_of_inflation) << endl;



         cout << "Would you like to continue? (Y/N) ";
		cin >> repeat;
	}while(repeat == 'Y' || repeat == 'y');

	return 0;
}

double inflation_rate(double previous_price, double current_price){//computes the inflation rate given the current price and last year's price
	return fabs(previous_price - current_price) / previous_price * 100;
}

double next_year_price(double current_price, double inflation_rate){//computes the adjusted price given the inflation rate and current price
	return current_price * (1 + inflation_rate / 100 );
}

bool check_input(double input){//check if number input is greater than or equal to zero
	if(input >= 0)
		return true;
	else{
		cout << "Input error!\n";
		return false;
	}
}