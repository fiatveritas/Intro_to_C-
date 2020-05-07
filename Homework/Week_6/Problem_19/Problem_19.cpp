//Written by:           Jesse Gallegos
//Assignment:           Homework Project Problem Page 102 #15 (8th Edition Savitch)
//Date:                 29 September 2018
/*Description:          This program computes the earned grade
                        on N number of assignments. The earned
                        grade and total possible score is
                        asked from the user from each 
                        assignment. The percentage is reported
                        at the end of the program.*/
#include <iostream>
using namespace std;

int main(){
    /*Variables Explained:
      number_of_assignments is the number of assignments that the user will input
      counter keeps track of what assignment has been inputed
      holder is a dummy variable
      earned is what the user earned on an assignment
      possible is the total possible points on an assignment*/
	int number_of_assignments, counter(0), holder;
	double earned, possible;

	cout << "How many exercises to input: ";
    cin >> number_of_assignments;

    while(counter < number_of_assignments){
    	counter += 1;

    	cout << "Score received for excercise " 
    	     << counter << ": ";
    	cin >> holder; //holder is used to store value inputted by user

    	earned += holder; //holder gets added to earned is initialized at zero

    	cout << "Total points possible for excercise "
    	     << counter << ": ";
    	cin >> holder; //holder get reassigned to a value inputted by user

    	possible += holder; //holder is added to total possible points
    }
   
    cout << "Your total is " << earned
         << " out of " << possible;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2); //by specification the book asked for two decimal values

    cout << ", or " << earned / possible * 100 //percentage formula earned/possible * 100%
         << "%.\n";

	return 0;
}