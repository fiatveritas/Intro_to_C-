//Written by:           Jesse Gallegos
//Assignment:           Homework Project Problem Page 102 #11 (8th Edition Savitch)
//Date:                 29 September 2018
/*Description:          This program asks the user to 
	                    input ten integers and outputs
	                    the sum of positive number, the
	                    sum of negative numbers, the
	                    average of positive numbers, the
	                    average of negative numbers, the
	                    sum of all numbers, and average
	                    of all numbers.*/
#include <iostream>
using namespace std;

int main(){
	/*This program asks the user to 
	input ten integers and outputs
	the sum of positive number, the
	sum of negative numbers, the
	average of positive numbers, the
	average of negative numbers, the
	sum of all numbers, and average
	of all numbers.*/

	//Variables Explained:
	/*num_1 - num_10 are the integer
	  inputs from the user.
	positive_sum is the sum of positive
	  integers.
	negative_sum is the sum of negative
	  integers.
	total_sum is the sum of all integers
	positive_mean is the average of 
	  positive integers
	negative_mean is the average of
	  negative integers.
	total_average is the average of
	  all integers
	positive_counter counts the number
	  of positive integers
	negative_counter counts the number
	  of negative integers
	zero_counter counts the number of 
	  zeroes.*/

	int num_1, num_2, num_3, num_4, num_5, 
	    num_6, num_7, num_8, num_9, num_10,
	    positive_sum(0), negative_sum(0),
	    total_sum;

	double positive_mean, negative_mean,
	       total_average, positive_counter(0),
	       negative_counter(0), zero_counter(0);

	cout << "This program reports the\n"
	     << "positive sum, the positive\n"
	     << "average, the negative sum,\n"
	     << "the negative average, the\n"
	     << "the total sum, and the total\n"
	     << "the total average of ten\n"
	     << "integers.\n";

	cout << "Please enter 10 integers:\n";

	//checking num_1
	cin >> num_1;

	if(num_1 > 0){ //quick check if number is greater than zero.
		positive_counter += 1; //update positive counter if so.
		positive_sum += num_1; //add the number to the positive sum.
	}
	if(num_1 < 0){ //likewise, check if the number is less than zero.
		negative_counter += 1; //ditto, increase negative counter
		negative_sum += num_1; //in the same spirit, increase negative sum
	}
	if (num_1 == 0) //count the number of zeroes
		zero_counter += 1;

	//checking num_2
	cin >> num_2;

	if(num_2 > 0){ //ad nauseam
		positive_counter += 1;
		positive_sum += num_2;
	}
	if(num_2 < 0){
		negative_counter += 1;
		negative_sum += num_2;
	}
	if (num_2 == 0)
		zero_counter += 1;

	//checking num_3
	cin >> num_3;

	if(num_3 > 0){
		positive_counter += 1;
		positive_sum += num_3;
	}
	if(num_3 < 0){
		negative_counter += 1;
		negative_sum += num_3;
	}
	if (num_3 == 0)
		zero_counter += 1;

	//checking num_4
	cin >> num_4;

	if(num_4 > 0){
		positive_counter += 1;
		positive_sum += num_4;
	}
	if(num_4 < 0){
		negative_counter += 1;
		negative_sum += num_4;
	}
	if (num_4 == 0)
		zero_counter += 1;

	//checking num_5
	cin >> num_5;

	if(num_5 > 0){
		positive_counter += 1;
		positive_sum += num_5;
	}
	if(num_5 < 0){
		negative_counter += 1;
		negative_sum += num_5;
	}
	if (num_5 == 0)
		zero_counter += 1;

	//checking num_6
	cin >> num_6;

	if(num_6 > 0){
		positive_counter += 1;
		positive_sum += num_6;
	}
	if(num_6 < 0){
		negative_counter += 1;
		negative_sum += num_6;
	}
	if (num_6 == 0)
		zero_counter += 1;

	//checking num_7
	cin >> num_7;

	if(num_7 > 0){
		positive_counter += 1;
		positive_sum += num_7;
	}
	if(num_7 < 0){
		negative_counter += 1;
		negative_sum += num_7;
	}
	if (num_7 == 0)
		zero_counter += 1;

	//checking num_8
	cin >> num_8;

	if(num_8 > 0){
		positive_counter += 1;
		positive_sum += num_8;
	}
	if(num_8 < 0){
		negative_counter += 1;
		negative_sum += num_8;
	}
	if (num_8 == 0)
		zero_counter += 1;

	//checking num_9
	cin >> num_9;

	if(num_9 > 0){
		positive_counter += 1;
		positive_sum += num_9;
	}
	if(num_9 < 0){
		negative_counter += 1;
		negative_sum += num_9;
	}
	if (num_9 == 0)
		zero_counter += 1;

	//checking num_10
	cin >> num_10;

	if(num_10 > 0){
		positive_counter += 1;
		positive_sum += num_10;
	}
	if(num_10 < 0){
		negative_counter += 1;
		negative_sum += num_10;
	}
	if (num_10 == 0)
		zero_counter += 1;

	cout.setf(ios::fixed);
	//cout.setf(ios::showpoint); //this line could be commented out. outputs need to be int
	cout.precision(0); //want integer whole number outputs

	cout << "Positive sum: "
	     << positive_sum
	     << endl;

	if(positive_counter != 0){
		cout << "Positive Average: "
	         << positive_sum / positive_counter
	         << endl;
		}
	else if (positive_counter == 0){//division by zero considered
		cout << "No positive elements\n"
	         << "Positive Average is zero by default\n";
	}
	else{
		cout << "Something went wrong!\n"
		     << "Check input.\n";
	}


    cout << "Negative sum: "
		 << negative_sum
		 << endl;

	if(negative_counter != 0){
		cout << "Negative Average: "
	         << negative_sum / negative_counter
	         << endl;
	 }
	 else if(negative_counter == 0){//division by zero considered
		cout << "No negative elements\n"
	         << "Negative Average is zero by default\n";
	 }
	 else{
	 	cout << "Something went wrong!\n"
	 	     << "Check input.\n";
	 }


	cout << "Total Sum: "
         << positive_sum + negative_sum
         << endl;

    cout << "Average of all inputs: "
         << ( positive_sum + negative_sum ) / ( positive_counter + negative_counter + zero_counter )
         << endl;

	return 0;
}
