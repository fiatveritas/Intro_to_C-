//Written by:           Jesse Gallegos
//Assignment:           LAB Practice Problem Page 171 #5
//Date:                 4 Oct 2018
/*Description:          This program computes
                        the cost of a call.*/


#include <iostream>
using namespace std;

int main(){
	/*Variables Exlained:
	    letter_1 & letter_2 are char type indicating the day of the week
	    choice indicates whether the user want to rerun the program
	    length_of_call is the duration of the phone call
	    repeat is true when user indicates 'y' or 'Y'. false otherwise*/
	char letter_1, letter_2, colon, choice;
	int hour, minute, length_of_call;
	bool weekend, biz_hours, day_flag, 
	     time_flag, hour_flag, 
	     minute_flag, call_time, repeat;

	     cout << "This program computes\nthe cost of a call.";
	do{
		do{
		    cout << "Please the enter the day of the week:\n"
		         << "Mo, Tu, We, Th, Fr, Sa, Su: ";
		    cin >> letter_1 >> letter_2;

		    if((letter_1 == 'm' || letter_1 == 'M') 
						&& (letter_2 == 'o' || letter_2 == 'O')){
		    	weekend = false;
		        day_flag = true;
		    }
		    else if ((letter_1 == 't' || letter_1 == 'T') 
						&& (letter_2 == 'u' || letter_2 == 'U')){
		    	weekend = false;
		        day_flag = true;
		    }
		    else if ((letter_1 == 'w' || letter_1 == 'W') 
						&& (letter_2 == 'e' || letter_2 == 'E')){
		    	weekend = false;
		        day_flag = true;
		    }
		    else if ((letter_1 == 't' || letter_1 == 'T') 
						&& (letter_2 == 'h' || letter_2 == 'H')){
		    	weekend = false;
		        day_flag = true;
		    }
		    else if ((letter_1 == 'f' || letter_1 == 'F') 
						&& (letter_2 == 'r' || letter_2 == 'R')){
		    	weekend = false;
		        day_flag = true;
		    }
		    else if ((letter_1 == 's' || letter_1 == 'S') 
						&& (letter_2 == 'a' || letter_2 == 'A')){
		    	weekend = true;
		        day_flag = true;
		    }
		    else if ((letter_1 == 's' || letter_1 == 'S') 
						&& (letter_2 == 'u' || letter_2 == 'U')){
		    	weekend = true;
		        day_flag = true;
		    }
		    else{
		    	cout << "Invalid Input.\n";
		    	day_flag = false;
		    }
	}while(!day_flag);

    do{
    	cout << "Please enter the time in 24hr format (HR:MIN): ";
    	cin >> hour >> colon >> minute;
    	//cout << hour << colon << minute << endl;

    	if(hour >= 0 && hour < 24)
    		hour_flag = true;
    	else
    		hour_flag = false;

    	if(minute >= 0 && minute < 60)
    		minute_flag = true;
    	else
    		minute_flag = false;

    	if(hour_flag && minute_flag){
    		time_flag = true;
    	}
    	else{
    		time_flag = false;
    	}
    }while(!time_flag);

    if(hour >= 8 && hour <= 18)
    	biz_hours = true;
    else
    	biz_hours = false;

    do{
    	cout << "Please input length of call (minutes): ";
    	cin >> length_of_call;

    	if(length_of_call >= 0)
    		call_time = true;
    	else
    		call_time = false;
    }while(!call_time);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    if(weekend == false && biz_hours == true){
    	cout << "Cost of call: $"
    	     << length_of_call * .40 
    	     <<endl;
    }
    else if(weekend == false && biz_hours == false){
    	cout << "Cost of call: $"
    	     << length_of_call * .25
    	     <<endl;
    }
    else{
    	cout << "Cost of call: $"
    	     << length_of_call * .15
    	     <<endl;
    }
	cout << "Do you want to continue? (Y/N)\n";
	cin >> choice;

	if(choice == 'y' || choice == 'Y')
		repeat = false;
	else{
		cout << "END.\n";
		repeat = true;
		}
	} while(!repeat);

	return 0;
}