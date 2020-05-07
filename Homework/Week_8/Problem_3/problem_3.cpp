//Written by:           Jesse Gallegos
//Assignment:           Homework Project Problem Page 170 #3 (8th Edition Savitch)
//Date:                 9 October 2018
/*Description:          This program gives the user
                        their horoscope and the 
                        dates for which the sign
                        falls under.*/

#include <iostream>
using namespace std;

int main(){
	/*Variables Explained:
	    month is the month of bday
	    day is the day of bday
	    month_correct is true if correct input
	    day_correct is true if correct input
	    dob_correct is true if both month_correct and day_correct are true
	    repeat is the choice to run the program again*/

	char repeat, slash;
	int month, day;
	bool month_correct, day_correct, dob_correct;

	cout << "This program gives you\n"
	     << "your horoscope sign. \n";

	do{




	    do{
	    	cout << "Please enter your date\n"
		         << "of birth (MM/DD): ";
		    cin >> month >> slash >> day;

	    	if(month >= 1 && month <= 12) //check if month is within Jan - Dec
	    		month_correct = true;
	    	else
	    		month_correct = false;

			switch(month){ //check if days falls within range of days in month
				case 1: //January 31 days
				            if(day >= 1 && day <= 31){
					            day_correct = true;
					        }
					        else{
					        	day_correct = false;
					        }
					        break;
				case 2: //February 28 or 29 days
				           if(day >= 1 && day <= 29){ //I choose leap year as worst case scneario
					            day_correct = true;
					        }
					        else{
					        	day_correct = false;
					        }
					        break;
				case 3: //March 31 days
				            if(day >= 1 && day <= 31){
					            day_correct = true;
					        }
					        else{
					        	day_correct = false;
					        }
					        break;
				case 4: //April 30 days
				            if(day >= 1 && day <= 30){
					            day_correct = true;
					        }
					        else{
					        	day_correct = false;
					        }
					        break;
				case 5: //May 31 days
				            if(day >= 1 && day <= 31){
					            day_correct = true;
					        }
					        else{
					        	day_correct = false;
					        }
					        break;
				case 6: //June 30 days
				            if(day >= 1 && day <= 30){
					            day_correct = true;
					        }
					        else{
					        	day_correct = false;
					        }
					        break;
				case 7: //July 31 days
				            if(day >= 1 && day <= 31){
					            day_correct = true;
					        }
					        else{
					        	day_correct = false;
					        }
					        break;
				case 8: //August 31 days
				            if(day >= 1 && day <= 31){
					            day_correct = true;
					        }
					        else{
					        	day_correct = false;
					        }
					        break;
				case 9: //September 30 days
				            if(day >= 1 && day <= 30){
					            day_correct = true;
					        }
					        else{
					        	day_correct = false;
					        }
					        break;
				case 10: //October 31 days
				            if(day >= 1 && day <= 31){
					            day_correct = true;
					        }
					        else{
					        	day_correct = false;
					        }
					        break;
				case 11: //November 30 days
				            if(day >= 1 && day <= 30){
					            day_correct = true;
					        }
					        else{
					        	day_correct = false;
					        }
					        break;
				case 12: //December 31 days
				            if(day >= 1 && day <= 31){
					            day_correct = true;
					        }
					        else{
					        	day_correct = false;
					        }
					        break;
				default: //weird stuff was passed
					        break;
			}
			if(month_correct && day_correct)
				dob_correct = true;
			else{
				dob_correct = false;
				cout << "Incorrect input.\n";
			}
		}while(!dob_correct);




		switch(month){ //check if days falls within range of days in month
			case 1: //January 31 days
			            if(day >= 1 && day < 17){ //Capricorn
				            cout << "Capricorn\n";
				        }
				        else if(day >= 17 && day <= 22){
				        	cout << "Cusp: Capricorn / Aquarius\n";
				        }
				        else if(day > 22 && day <= 31){ //Aquarius
				        	cout << "Aquarius\n";
				        }
				        break;
			case 2: //February 28 or 29 days
			            if(day >= 1 && day < 16){ //I choose leap year as worst case scneario
				            cout << "Aquarius\n";
				        }
				        else if(day >= 16 && day <= 21){
				        	cout << "Cusp: Aquarius / Pisces\n";
				        }
				        else if(day > 21 && day <= 29){
				        	cout << "Pisces\n";
				        }
				        break;
			case 3: //March 31 days
			            if(day >= 1 && day < 18){
				            cout << "Pisces\n";
				        }
				        else if(day >= 18 && day <= 23){
				        	cout << "Cusp: Pisces / Aries\n";
				        }
				        else if(day > 23 && day <= 31){
				        	cout << "Aries\n";
				        }
				        break;
			case 4: //April 30 days
			            if(day >= 1 && day < 17){
				            cout << "Aries\n";
				        }
				        else if(day >= 17 && day <= 22){
				        	cout << "Cusp: Aries / Taurus\n";
				        }
				        else if(day > 22 && day <= 30){
				        	cout << "Taurus\n";
				        }
				        break;
			case 5: //May 31 days
			            if(day >= 1 && day < 18){
				            cout << "Taurus\n";
				        }
				        else if(day >= 18 && day <= 23){
				        	cout << "Cusp: Taurus / Gemini\n";
				        }
				        else if (day > 23 && day <= 31){
				        	cout << "Gemini\n";
				        }
				        break;
			case 6: //June 30 days
			            if(day >= 1 && day < 19){
				            cout << "Gemini\n";
				        }
				        else if(day >= 19 && day <= 24){
				        	cout << "Cusp: Gemini / Cancer\n";
				        }
				        else if(day > 24 && day <= 30){
				        	cout << "Cancer\n";
				        }
				        break;
			case 7: //July 31 days
			            if(day >= 1 && day < 20){
				            cout << "Cancer\n";
				        }
				        else if(day >= 20 && day <= 25){
				        	cout << "Cusp: Cancer / Leo\n";
				        }
				        else if(day > 25 && day <= 31){
				        	cout << "Leo\n";
				        }
				        break;
			case 8: //August 31 days
			            if(day >= 1 && day < 20){
				            cout << "Leo\n";
				        }
				        else if(day >= 20 && day <= 25){
				        	cout << "Cusp: Leo / Virgo\n";
				        }
				        else if(day > 25 && day <= 31){
				        	cout << "Virgo\n";
				        }
				        break;
			case 9: //September 30 days
			            if(day >= 1 && day < 20){
				            cout << "Virgo\n";
				        }
				        else if(day >= 20 && day <= 25){
				        	cout << "Cusp: Virgo / Libra\n";
				        }
				        else if(day > 25 && day <= 30){
				        	cout << "Libra\n";
				        }
				        break;
			case 10: //October 31 days
			            if(day >= 1 && day < 20){
				            cout << "Libra\n";
				        }
				        else if(day >= 20 && day <= 25){
				        	cout << "Cusp: Libra / Scorpio\n";
				        }
				        else if(day > 25 && day <= 31){
				        	cout << "Scorpio\n";
				        }
				        break;
			case 11: //November 30 days
			            if(day >= 1 && day < 19){
				            cout << "Scorpio\n";
				        }
				        else if(day >= 19 && day <= 24){
				        	cout << "Cusp: Scorpio / Sagitarius\n";
				        }
				        else if(day > 24 && day <= 30){
				        	cout << "Sagitarius\n";
				        }
				        break;
			case 12: //December 31 days
			            if(day >= 1 && day < 19){
				            cout << "Sagitarius\n";
				        }
				        else if(day >= 19 && day <= 24){
				        	cout << "Cusp: Sagitarius / Capricorn\n";
				        }
				        else if(day > 24 && day <= 31){
				        	cout << "Capricorn\n";
				        }
				        break;
			default: //weird stuff was passed
				        break;
		}





	cout << "Would you like to continue? (Y/N) ";
	cin >> repeat;
	}while(repeat == 'Y' || repeat =='y');

	return 0;
}