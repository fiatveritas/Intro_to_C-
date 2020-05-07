//Written by:           Jesse Gallegos
//Assignment:           Homework Project Problem Page 102 #18 (8th Edition Savitch)
//Date:                 21 September 2018
/*Description:          This program computes a user's
                        BMR given their weight in pounds,
                        height in inches, age in years,
                        and their gender. The program
                        also computes how many 240
                        calorie chocolate bars a user
                        should consume to maintain 
                        equillibrium.*/

#include <iostream>
using namespace std;

int main(){
	double weight, height, age, BMR,
	       chocolate(240), number_of_bars;
	char gender;

	/*Variables Explained: 
	weight is the weignt in pounds
	height is the height in inches
	age is a person's age in years
	BMR is Basal Metabolic Rate computed below
	number_of_bars is used when dividing
	BNR by chocolate.
	gender is a person's gender*/

	cout.setf(ios::fixed);
	//cout.setf(ios::showpoint); 
	/* I commented out this line out
	I'm concerned with integer number of calories*/
	cout.precision(0); //for the same reason I want whole number answers

	cout << "This program computes your BMR\n"
	     << "and computes how many 240 calories\n"
	     << "chocolate bars you can eat and still\n"
	     << "maintain your weight.\n";

	cout << "Please enter your weight in pounds: ";
	cin >> weight;

	cout << "Please enter your height in inches: ";
	cin >> height;

	cout << "Please enter your age: ";
	cin >> age;

	cout << "Please enter your gender.\n"
	     << "\'M\' for male.\n"
	     << "\'F\' for female. ";
	cin >> gender; /*gender determines what formula is used
	                 below in the lines below.*/

	if(gender == 'M' || gender =='m')
		BMR = 66 + 6.3 * weight + 12.9 * height
		- 6.8 * age;
	if(gender == 'F' || gender == 'f')
	    BMR = 655 + 4.3 * weight + 4.7 * height
	          - 4.7 * age;

	cout << "Your BMR is: " << BMR << endl;

	number_of_bars = BMR / chocolate; /*again, BMR divided by
									    one bar of 240 calories*/

	cout << "For your characteristics,\n"
	     << "you can consume " << number_of_bars 
	     << " chocolate bars (240 \ncalories each) "
	     <<"and maintain your weight.\n";

	return 0;
}