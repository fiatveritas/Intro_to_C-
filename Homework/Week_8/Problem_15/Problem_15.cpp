//Written by:           Jesse Gallegos
//Assignment:           Homework Project Problem Page 170 #15 (8th Edition Savitch)
//Date:                 9 October 2018
/*Description:          This program computes
                        the buoyant force of
                        a sphere and determines
                        if the object will float
                        or sink.*/
#include <iostream>
using namespace std;

/*Variables Explained:
    gamma is predefined constant (given) 
    pi is another predefined constant (given)
    buoyant is the buoyant force (formula given)
    weight is input by user
    radius of the sphere is input by user */

const double gamma(62.4), pi(3.14);
double buoyant, weight, radius;
bool weight_correct, radius_correct;
int main(){
	cout << "This program determines if a\n"
	     << "sphere will sink or float.\n";
	do{
		cout << "Please enter the weight of\n"
	     << "of the spehere in lbs: ";
		cin >> weight;
		if(weight >= 0)//check for incorrect inputs
			weight_correct = true;
		else{
			weight_correct = false;
			cout << "Input Error.\n";
		}
	}while(!weight_correct);
	
	do{
		cout << "Please enter the radius of\n"
		     << "the sphere in ft: ";
		cin >> radius;
		if(radius >= 0)//check for incorrect inputs
			radius_correct = true;
		else{
			radius_correct = false;
		    cout << "Input Error.\n";
	}
	}while(!radius_correct);

	if(weight > 0 && radius > 0){//make sure that object has weight and mass
		buoyant = (4 / 3) * pi * radius * radius * radius * gamma;
		if(buoyant >= weight)
			cout << "The object floats!\n";
		else if (buoyant < weight)
			cout << "The object sinks!\n";
		else//account for anything weird that gets through
		cout << "Error: Check Inputs.\n";
		}
	else//clause for weird scenarious or incorrect inputs
		cout << "Error: Check Inputs.\n";
	
	return 0;
}