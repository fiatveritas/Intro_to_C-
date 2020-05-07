//Written by:           Jesse Gallegos
//Assignment:           LAB Practice Problem Page 296 #1 Savitch 10th Ed.
//Date:                 31 October 2018
/*Description:          This program computes the 
                        average of four number and
                        the standard deviation of
                        these four numbers.*/

#include <iostream>
#include <cmath>
using namespace std;

void greetings();//says hello world to user
void get_input(double& score_1, double& score_2, double& score_3, double& score_4);//this function asks user for four exam scores
void do_calculation(double score_1, double score_2, double score_3, double score_4, double& average, double& standard_deviation);//this function computes the average of the four number and standard deviation
double get_average(double score_1, double score_2, double score_3, double score_4);//this function computes the average of four numbers
double get_standard_deviation(double score_1, double score_2, double score_3, double score_4, double average); // this program computes the standard deviation
void display_output(double average, double standard_deviation);//this outputs the average and standard deviation to user

int main(){
	char choice;
	double score_1, score_2, score_3, score_4,
	       average, standard_deviation;

	greetings();//introduce user to program

    do{
    	get_input(score_1, score_2, score_3, score_4);//get user input
    	do_calculation(score_1, score_2, score_3, score_4, average, standard_deviation);//delegate computations
    	display_output(average, standard_deviation);//show user output

    	cout << "Would you like to input again?\nPress \'Y\' or \'y\' to continue.\n"
    	     << "Any other key to end program. ";
    	cin >> choice;
    }while(choice == 'Y' || choice == 'y');

	return 0;
}

void greetings(){
	cout << "This program computes the average\n"
	     << "and the standard deviation of four\n"
	     << "numbers.\n";
}

void get_input(double& score_1, double& score_2, double& score_3, double& score_4){
	cout << "Please enter four scores: ";
	cin >> score_1 >> score_2 >> score_3 >> score_4;
}

void do_calculation(double score_1, double score_2, double score_3, double score_4, double& average, double& standard_deviation){
	average = get_average(score_1, score_2, score_3, score_4);
	standard_deviation = get_standard_deviation(score_1, score_2, score_3, score_4, average);
}

double get_average(double score_1, double score_2, double score_3, double score_4){
	return (score_1 + score_2 + score_3 + score_4) / 4; // scores are of type double, not a problem dividing by int
}

double get_standard_deviation(double score_1, double score_2, double score_3, double score_4, double average){
	return sqrt( (pow(score_1 - average, 2) + pow(score_2 - average, 2) + pow(score_3 - average, 2) + pow(score_4 - average, 2)) / 4 ); // again, we have division of double by int. Not an issue
}

void display_output(double average, double standard_deviation){
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Average: " << average << endl;
	cout << "Standard Deviation: " << standard_deviation << endl;
}