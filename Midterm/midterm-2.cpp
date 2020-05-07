//Jesse Gallegos
//in class

#include <iostream>
using namespace std;

const double HAT_PRICE(19.99), SUN_GLASSES_PRICE(28.89),
	             BIKINIS_PRICE(45.79), LOTIONS_PRICE(25.29);

void greetings();
//hello world user
void user_input();
/*asks user to input the integer numbers
corresponding to sales in a specific
order*/

void run(); //runs the program

int check_sign(int number);
/*this funciton checks if a number is positive
otherwise sets the number to zero.*/

void total_items(int hats, int sun_glasses, int bikinis, int lotions);
/*this functions the total number of items
  sold during four weeks*/
double four_weeks_earnings(int hats, int sun_glasses, int bikinis, int lotions);
//earnings in four weeks

int main(){

	run();

	return 0;
}

void greetings(){
	cout << "This program computes the total number of items sold\n"
	     << "by a company for the past four weeks, the weekly average,\n"
	     << "and the estimated yearly average.\n\n";
}

void user_input(){
	cout << "Please enter the number of \n"
	     << "hats, sun glasses, bikinis, and lotions:\n";
}

void run(){//this runs the program
	const double HAT_PRICE(19.99), SUN_GLASSES_PRICE(28.89),
	             BIKINIS_PRICE(45.79), LOTIONS_PRICE(25.29);
	int num_hats, num_sun_glasses, num_bikinis, num_lotions,
	    total_hats(0), total_sun_glasses(0), total_bikinis(0), total_lotions(0);
    double four_weeks_earnings_money;
	char choice;
	bool repeat;

	greetings();
	do{
		int i = 1;
		total_hats = 0; total_sun_glasses = 0;
		total_bikinis = 0; total_lotions = 0;
		for(i = 1; i <= 4; i++){

			user_input();
			cout << "week " << i << endl;
			cin >> num_hats >> num_sun_glasses >> num_bikinis >> num_lotions;

		    num_hats = check_sign(num_hats);
		    num_sun_glasses = check_sign(num_sun_glasses);
		    num_bikinis = check_sign(num_bikinis);
		    num_lotions = check_sign(num_lotions);

		    total_hats += num_hats;
		    total_sun_glasses += num_sun_glasses;
		    total_bikinis += num_bikinis;
		    total_lotions += num_lotions;

		}
		cout << total_hats << total_sun_glasses << total_bikinis << total_lotions << endl;
		total_items(total_hats, total_sun_glasses, total_bikinis, total_lotions);
		four_weeks_earnings_money = four_weeks_earnings(total_hats, total_sun_glasses, total_bikinis, total_lotions);
		cout.setf(ios::showpoint);
		cout.setf(ios::fixed);
		cout.precision(2);

		cout << "Total Amount after 4 weeks: $" << four_weeks_earnings_money << endl;

    	cout << "Enter \'Q\' or \'q\' to quit. Any other key to continue.";
    	cin >> choice; cout << "\n";
    	if (choice == 'Q' || choice == 'q')
    		repeat = true;
    	else
    		repeat = false;
    }while(!repeat);
}

void total_items(int hats, int sun_glasses, int bikinis, int lotion){ //prints out the order
    cout << "After 4 weeks, you sold " << hats << " hat(s), "
         << sun_glasses << " sunglasses, "
         << bikinis << " bikinis, "
         << lotion << " lotions.\n";
}

double four_weeks_earnings(int hats, int sun_glasses, int bikinis, int lotions){ //computes the total amount for order
    return hats * HAT_PRICE + sun_glasses * SUN_GLASSES_PRICE + bikinis * BIKINIS_PRICE + lotions * LOTIONS_PRICE;
}

int check_sign(int num){ //this checks user input, must be positive number
	if(num < 0)
		return 0;
	else
		return num;
}
