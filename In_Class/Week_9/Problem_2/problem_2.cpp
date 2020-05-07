//Written by:           Jesse Gallegos
//Assignment:           LAB Practice Problem Page 241 #2
//Date:                 10 Oct 2018
/*Description:          This program computes the mpg
                        of two vehicles and reports 
                        which one is more fuel efficient.*/

#include <iostream>
using namespace std;

const double liter_to_gallon(0.264179);

double mpg_calculator(double, double);
/*this function computes the miles per gallon
  of a vehicle given its gas consumption in 
  liters and the miles travelled.*/

int main(){
	double gas_consumed_1, miles_travelled_1,
	       gas_consumed_2, miles_travelled_2,
	       mpg_1, mpg_2;
	char choice;
	bool repeat, input_correct; //input_correct place holder to check if input is correct

	cout << "This program computes the\n"
	     << "for two vehicles.\n";

	do{
		do{//loop over to check input
			cout << "Please enter the liters\n"
	             << "of gas consumed by car 1: ";
	            cin >> gas_consumed_1;
	            if(gas_consumed_1 > 0)
	            	input_correct = true;
	            else if(gas_consumed_1 == 0) {
	            	input_correct = false;
	            	cout << "Zero gas consumed causes division by zero.\n";
	            }
	            else
	            	input_correct = false;
	        }while(!input_correct);
	    
	    do{//loop over to check input
	    	cout << "Please enter the miles\n"
	             << "travelled by vehicle by car 1: ";
	        cin >> miles_travelled_1;
	        if(miles_travelled_1 >= 0)
	        	input_correct = true;
	        else
	        	input_correct = false;
	    }while(!input_correct);

	    do{//loop over to check input
	    	cout << "Please enter the liters\n"
	             << "of gas consumed by car 2: ";
	        cin >> gas_consumed_2;
	        if(gas_consumed_2 > 0)
	        	input_correct = true;
	        else if(gas_consumed_2 == 0){
	        	input_correct = false;
	        	cout << "Zero gas consumption causes division by zero.\n";
	        }
	        else
	        	input_correct = false;
	    }while(!input_correct);

	    do{//loop over to check input
	    	cout<< "Please enter the miles\n"
	            << "travelled by vehicle by car 2: ";
	        cin >> miles_travelled_2;
	        if(miles_travelled_2 >= 0)
	        	input_correct = true;
	        else
	        	input_correct = false;
	    }while(!input_correct);

	    mpg_1 = mpg_calculator(gas_consumed_1, miles_travelled_1);
	    mpg_2 = mpg_calculator(gas_consumed_2, miles_travelled_2);

	    cout.setf(ios::fixed);
	    cout.setf(ios::showpoint);
	    cout.precision(1);

	    cout << "Car 1 MPG: " << mpg_1 << endl
	         << "Car 2 MPG: " << mpg_2 << endl;

	    if(mpg_1 > mpg_2)
	    	cout << "Car 1 has better efficiency!\n";
	    else if(mpg_1 < mpg_2)
	    	cout << "Car 2 has better efficiency!\n";
	    else if(mpg_1 == mpg_2)
	    	cout << "Car 1 and Car 2 have the same efficiency.\n";
	    else
	    	cout << "Error\n";


	    cout << "Go again? (Y/N) ";
		cin >> choice;

		if(choice == 'y' || choice == 'Y')
			repeat = true;
		else if(choice == 'n' || choice == 'N')
			repeat = false;
		else
			repeat = false;
	}while(repeat);

	return 0;
}

double mpg_calculator(double gas_consumed, double miles_travelled){
	return  miles_travelled / (gas_consumed / (1 / liter_to_gallon)); //conversion computation
}