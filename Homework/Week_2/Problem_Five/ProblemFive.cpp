//Written by:           Jesse Gallegos
//Assignment:           HOMEWORK Problem Five
//Date:                 12 September 2018
/*Description:          The program print a block of character
                        via user input.*/
#include <iostream>
using namespace std;

int main(){
	char letter;
	cout << "Please insert a letter: ";
	cin >> letter;
	cout << " "<< " "<< letter<<" "<<letter<<" "<<letter<<"\n";
	cout << " "<<letter<<" "<<" "<<" "<<" "<<letter<<"\n";
	cout << letter<<" "<<" "<<" "<<" "<<"\n";
	cout << letter<<" "<<" "<<" "<<" "<<"\n";
	cout << letter<<" "<<" "<<" "<<" "<<"\n";
	cout << letter<<" "<<" "<<" "<<" "<<"\n";
	cout << letter<<" "<<" "<<" "<<" "<<"\n";
	cout << " "<<letter<<" "<<" "<<" "<<" "<<letter<<"\n";
	cout << " "<< " "<< letter<<" "<<letter<<" "<<letter<<"\n";

	return 0;
}