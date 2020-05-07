//in class practice

#include <iostream>
using namespace std;

int main(){
	int width, height, perimeter;
	
	cout << "Please enter the width of the fence:\n";
	cin >> width;

	cout << "Please enter the height of the fence:\n";
	cin >> height;

	perimeter = 2 * width + 2 * height;

	cout << "Total length of fence needed is:\n";
	cout << perimeter << endl;

	return 0;
}