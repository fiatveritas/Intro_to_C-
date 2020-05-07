//Written by:           Jesse Gallegos
//Assignment:           Homework Problem FOUR
//Date:                 12 September 2018
/*Description:          The program reports the distance
                        by an object in freefall given the
                        the time in seconds the object is
                        falling*/
#include <iostream>
using namespace std;

int main(){
	double seconds;
	cout << "Please enter the seconds a projectile is in free fall: ";
	cin >> seconds;
	cout << "The projectile travels "; 
	cout << 32.0 * seconds * seconds / 2;
	cout << " ft.\n";
	return 0;
}