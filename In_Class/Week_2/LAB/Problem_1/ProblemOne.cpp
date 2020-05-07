//Written by:           Jesse Gallegos
//Assignment:           LAB Problem One
//Date:                 5 September 2018
/*Description:          This program takes in two integers
                        and reports the sum and product of
                        the two numbers respectively.*/



#include <iostream>
using namespace std;

int main(){
	int numberOne, numberTwo, summedNumbers, productNumbers;
	
	cout << "Please enter an integer\n";
	cin >> numberOne;

	cout << "Please enter another integer:\n";
	cin >> numberTwo;


    summedNumbers = numberOne + numberTwo;
	cout << "The sum of " << numberOne << " and " << numberTwo << " is " << summedNumbers << endl;

	productNumbers = numberOne * numberTwo;
	cout << "The product of " << numberOne << " and " << numberTwo << " is " << productNumbers << endl;
	
	return 0;

}