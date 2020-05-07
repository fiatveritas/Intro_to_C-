//Written by:           Jesse Gallegos
//Assignment:           LAB Problem One
//Date:                 12 September 2018
/*Description:          This program converts the weight of a 
                        cereal box in ounces to metric tons.
                        The number of boxes to reach a metric ton
                        is also computed with the same weight of
                        the cereal box.*/
#include <iostream>
using namespace std;

int main(){
	double weight;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);

	cout <<"\nHello world, this program converts \nthe weight of a" 
	     <<" cereal box in ounces \nto metric tons. It also tells"
	     <<" you how \nmany boxes of the mentioned cereal \nweighs"
	     <<" a metric ton."<<endl<<endl;

	cout << "Please enter the weight of the cereal box in ounces: ";
	cin >> weight;

	cout.precision(10);
	cout << "\nThe weight of the cereal box is: "
	     << weight / 35273.92 //divide the box weight by 35273.92 to metric weight
	     << " metric tons.\n";

	cout.precision(1);
	cout << "You need " 
	     << 35273.92 / weight //divide 35273.92 by the weight of box to get number of boxes needed
	     << " boxes of cereal to make one metric ton."
	     <<endl<<endl;

	return 0;
}