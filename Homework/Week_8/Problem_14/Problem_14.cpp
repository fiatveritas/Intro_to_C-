//Written by:           Jesse Gallegos
//Assignment:           Homework Project Problem Page 170 #14 (8th Edition Savitch)
//Date:                 9 October 2018
/*Description:          This program computes the 
                        primes from 3 up to 100. */

#include <iostream>
using namespace std;

int main(){
	/*Variables Explained:
	    j is a temporary / dummy variable
	    k is variable that is automatically set to at each iteration*/
	int j, k;
	cout << "This program finds the\n"
	     << "the primes between 3 &\n"
	     << "100.\n";

	for(int i = 3; i <= 100; i++){
		k = 2;
		j = i;
		for(k; k <= j-1; k++) // go up to the j-1 iteration
			if(i % k == 0)
			    break;

		if(k == j) // if you get here without trigger previous condition, then prime
			cout << i << ", ";
	}

	return 0;
}