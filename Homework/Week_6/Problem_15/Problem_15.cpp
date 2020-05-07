//Written by:           Jesse Gallegos
//Assignment:           Homework Project Problem Page 102 #15 (8th Edition Savitch)
//Date:                 29 September 2018
/*Description:          This program asks the user to 
	                    input a range of temperatures.
	                    Specifically, the user is asked
	                    to input a lower limit for the
	                    temperature and upper limit for
	                    the temperature. The speed of sound
	                    is computed for each temperature
	                    inclusively (starting temperature
	                    and ending temperature included).
	                    Finally, the temperature is reported
	                    to the user.*/
#include <iostream>
using namespace std;

int main(){
	/*variables explained
	  low_value is the lower range
	    for the temperature
	  high_value is the upper range
	    for the temperature
	  velocity is what will be output
	    to the user*/
	int low_value, high_value, current;
    double velocity; //range values are in double to give user flexibility on input

	cout << "This program computes the\n"
         << "the speed of sound for a\n"
         << "range specified by you.\n"

    cout << "Please type in lower limit: "; //lower limit of temperature range of interest
    cin >> low_value;

    current = low_value;

    cout << "Please type in upper limit: "; //upper limit of temperature range of interest
    cin >> high_value;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1); //by textbook specification and example, one decimal precision

    while(current <= high_value){
    	velocity = 331.3 + 0.61 * current; //formula given by textbook

    	cout << "At " << current
    	     << " degrees Celsius the "
    	     << "velocity of sound is "
    	     << velocity << " m/s\n";

    	current += 1; //update counter at the end
    }

	return 0;
}