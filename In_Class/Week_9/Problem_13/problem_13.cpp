//Written by:           Jesse Gallegos
//Assignment:           LAB Practice Problem Page 243 #13
//Date:                 17 October 2018
/*Description:          This program sings to the user
                        a commone drinking game. The 
                        user inputs the number of bottles
                        on the wall.*/


#include <iostream>
using namespace std;

void message_to_user();
//this function welcomes the user to the program

void run_program();
//this function runs the program, collects input and does the singing

void verse(int);
//this function outputs the most repeated part of the song.

void verse_2(int);
//this function outputs several parts of the song together.

string number_to_english(int);
/*this function takes an integer
  and returns its English representation*/

string suffix_number(int);
//this funciton returns the lower case version of numbers

int main(){
	char repeat;
	message_to_user();//tell the user what's going on

	do{
	run_program();//runs the function for song
	cout << "Drink more? (Y/N) ";
	cin >> repeat;
    }while(repeat == 'Y' || repeat == 'y');
	end_of_program();//announces end of program

	return 0;
}

void message_to_user(){//output tells the user what the program does
	cout << "This program sings\n"
	     << "a drinking song to\n"
	     << "you.\n";
}

void run_program(){//clean version for main function, calls on other functions for backend work

	int number_of_bottles; //this will initialize the iteration
	bool check_input;

	do{
		cout << "Please enter number of bottles on wall: ";
		cin >> number_of_bottles;
		if(number_of_bottles >=0 && number_of_bottles <=99)
			check_input = true;
		else{
			cout << "Bad Input.\n";
			check_input = false;
		}

    }while(!check_input);

	for(int i = number_of_bottles; i >= 0; i--)
		if(i == 0){//base case 1
			cout << number_to_english(i) 
		         << " bottles of beer on the wall, "
			     << number_to_english(i)
			     << " bottles of beer.\n";
		}
		else if(i == 1){//base case 2
			cout << number_to_english(i) 
		         << " bottle of beer on the wall, "
			     << number_to_english(i)
			     << " bottle of beer.\n"
			     << "Take one down pass it around. "
			     << "Zero bottles of beer.\n";
		}
		else if(i > 1 && i < 20){
			verse(i);
		}
		else if(i % 10 == 0){
			verse(i);
		}
		else if((i >= 20 && i <= 99) && i % 10 != 0){
			verse_2(i);
		}
		else
			break;
}

void verse(int number){//this is what repeats through out the song
	int prefix, suffix;

	cout << number_to_english(number) 
		 << " bottles of beer on the wall, "
		 << number_to_english(number)
		 << " bottles of beer.\n"
		 << "Take one down pass it around. ";
	if(number == 2){
		cout << number_to_english(number - 1) << " bottle of beer.\n" ;
	}
	else if(number > 2 && number <= 20){
		cout << number_to_english(number - 1) << " bottles of beer.\n";
	}
	else if( (number % 10 == 0) && number > 20){
			prefix = (number - 1) / 10 * 10;
			suffix = (number - 1) % 10;
			cout << number_to_english(prefix) + "-" + suffix_number(suffix)
			     << " bottles of beer.\n";
	}
	else
		cout << "Error\n";
}

void verse_2(int number){//this is for compound numbers in the song
	int prefix, suffix;

	prefix = number / 10 * 10;//this gets the prefix for the number
	suffix = number % 10;//this gets the part after the hyphen
	cout << number_to_english(prefix) + "-" + suffix_number(suffix) 
	     << " bottles of beer on the wall, "
	     << number_to_english(prefix) + "-" + suffix_number(suffix)
		 << " bottles of beer.\n"
	     << "Take one down pass it around. ";
	if(number > 20 && ((number - 1) % 10 != 0)){
		cout << number_to_english(prefix) + "-" + suffix_number(suffix - 1)
		     << " bottles of beer.\n";
	}
	else if(number > 20 && ((number - 1) % 10 == 0)){
		cout << number_to_english(number - 1)
		     << " bottles of beer.\n";
		 }
	else
		cout << "Error\n";
}

string number_to_english(int number){//consider cases up to 20, everything else prefix-suffix dealt in main function
	switch(number){
		case 0:
			return "Zero";
		case 1:
		    return "One";
		case 2:
		    return "Two";
		case 3:
		    return "Three";
		case 4:
		    return "Four";
		case 5:
		    return "Five";
		case 6:
		    return "Six";
		case 7:
		    return "Seven";
		case 8:
		    return "Eight";
		case 9:
		    return "Nine";
	    case 10:
	        return "Ten";
	    case 11:
	        return "Eleven";
	    case 12:
	        return "Twelve";
	    case 13:
	        return "Thirteen";
	    case 14:
	        return "Fourteen";
	    case 15:
	        return "Fifteen";
	    case 16:
	        return "Sixteen";
	    case 17:
	        return "Seventeen";
	    case 18:
	        return "Eighteen";
	    case 19:
	        return "Nineteen";
	    case 20:
	        return "Twenty";
	    case 30:
	        return "Thirty";
	    case 40:
	        return "Fourty";
	    case 50:
	        return "Fifty";
	    case 60:
	        return "Sixty";
	    case 70:
	        return "Seventy";
	    case 80:
	        return "Eighty";
	    case 90:
	        return "Ninety";
	    default:
	        cout << "Error\n";
	        break;


	}
}

string suffix_number(int number){//uncapitalized version of switch case for song after hyphen
	switch(number){
		case 1:
		    return "one";
		case 2:
		    return "two";
		case 3:
		    return "three";
		case 4:
		    return "four";
		case 5:
		    return "five";
		case 6:
		    return "six";
		case 7:
		    return "seven";
		case 8:
		    return "eight";
		case 9:
		    return "nine";
		default:
		    cout << "Error\n";
		    break;
		}
	}