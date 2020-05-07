//Written by:           Jesse Gallegos
//Assignment:           Homework Project Problem Page 170 #16 (8th Edition Savitch)
//Date:                 9 October 2018
/*Description:          This program computes the
                        temperature where Celsius
                        meets fahrenheit starting
                        from 100C. */
#include <iostream>
using namespace std;

int main(){
	int celsius(100), fahrenheit;

	cout << "This program computes the\n"
         << "temperature where Celsius\n"
         << "meets fahrenheit starting\n"
         << "from 100C.\n";

	fahrenheit = (9 * celsius) / 5 + 32; //quick conversion before continuing

	if(celsius == fahrenheit){//check if finished from the beginning
		cout << "Done from the start.\n";
		return 0;//get out of program if finished from the start. Long shot!
	}

	while(celsius != fahrenheit){//will update until equillibrium is established
		celsius -= 1;
		fahrenheit = (9 * celsius) / 5 + 32;
	}

	cout << "Final Temps\n"
	     << "celsius: " << celsius << endl
	     << "fahrenheit:" << fahrenheit << endl;

	return 0;
}