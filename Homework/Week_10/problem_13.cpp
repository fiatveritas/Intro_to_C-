//Written by:           Jesse Gallegos
//Assignment:           Homework Project Problem Page #13 pg. 296 (8th Edition Savitch)
//Date:                 7 November 2018
/*Description:          This program returns
                        the area and perimeter
                        of a triangle. The program
                        asks the user to enter the
                        lengths of the sides of an
                        arbitrary triangle.*/

#include <iostream>
#include <cmath>
using namespace std;

void greetings();//this function says hello world to user
void get_user_input(double& side_one, double& side_two, double& side_three);//this program asks the user for lengths of side of triangle
bool check_sides(double, double, double);//this function checks if two sides of a triangle add to more than the other
void compute_vitals(double side_one, double side_two, double side_three, double& area, double& perimeter);//computes area and perimeter
double compute_area(double, double, double);//computes the area of the triangle
double compute_perimeter(double, double, double);//this method computes the perimeter of a triangle
void display_outputs(double perimeter, double area);

int main(){
	double side_one(0), side_two(0), side_three(0),
	       area(0), perimeter(0);

	greetings();
	get_user_input(side_one, side_two, side_three);//gets sides of a triangle from user. function checks if sides meet criteria specified for triangles.
	compute_vitals(side_one, side_two, side_three, area, perimeter);
	display_outputs(perimeter, area);

	return 0;
}

void greetings(){
	cout << "This program returns the\n"
	     << "are of an arbitrary triangle.\n";
}

void get_user_input(double& side_one, double& side_two, double& side_three){
	bool correct_input;
	do{
		do{//check if side is less than or equal to zero. continues to ask user for correct input
			cout << "Please enter first side of triangle: ";
			cin >> side_one;
			if(side_one <= 0)
				cout << "Please enter number greater than zero.\n";
		}while(side_one <= 0);

		do{//check if side is less than or equal to zero. continues to ask user for correct input
			cout << "Please enter second side of triangle: ";
			cin >> side_two;
			if(side_two <= 0)
				cout << "Please enter number greater than zero.\n";
		}while(side_two <= 0);

		do{//check if side is less than or equal to zero. continues to ask user for correct input
			cout << "Please enter third side of triangle: ";
			cin >> side_three;
			if(side_three <= 0)
				cout << "Please enter number greater than zero.\n";
		}while(side_three <= 0);

		correct_input = check_sides(side_one, side_two, side_three);

		if(correct_input == false)
			cout << "!!!!!!!!!!!!!!!!\n"
		         << "Error!\n"
		         << "Sum of two sides less\n"
		         << "than or equal to third side.\n"
		         << "!!!!!!!!!!!!!!!!\n";

	}while(!correct_input);
}

bool check_sides(double side_one, double side_two, double side_three){
	if(side_one + side_two <= side_three)//check if sum of two sides exceed the third. Check permutations
		return false;
	if(side_one + side_three <= side_two)
		return false;
	if(side_two + side_three <= side_one)
		return false;
    return true;//if the conditions make it this far congrats
}

void compute_vitals(double side_one, double side_two, double side_three, double& area, double& perimeter){
	area = compute_area(side_one, side_two, side_three);
	perimeter = compute_perimeter(side_one, side_two, side_three);
}

double compute_area(double side_one, double side_two, double side_three){
	double semi_perimeter(0), area(0);

	semi_perimeter = (side_one + side_two + side_three) / 2;
	area = sqrt(semi_perimeter * (semi_perimeter - side_one) * (semi_perimeter - side_two) * (semi_perimeter - side_three));
	return area;
}

double compute_perimeter(double side_one, double side_two, double side_three){
	return side_one + side_two + side_three;
}

void display_outputs(double perimeter, double area){
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Area: " << area << endl;
	cout << "Perimeter: " << perimeter << endl;
}