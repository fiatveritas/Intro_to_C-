//Written by:           Jesse Gallegos
//Assignment:           Midterm Project Take Home
//Date:                 2 November 2018
/*Description:          This program computes the price
                        of ordering a drink. The program
                        allows for the user to add
                        accessories to the drink selection
                        and rewards the user once a threshold
                        of accessories are purchased.*/

#include <iostream>
//#include <cstdlib> //commented out for linux compiler gcc (gnu compiler)
using namespace std;

/*The variables below are set by specification. 
  They represent the cost of a drink or a string that holds the item and its price*/

const string COFFEE_DRINK = "Coffee ($2.89)", ESPRESSO_DRINK = "Espresso ($3.23)",
	         CAPPUCCINO_DRINK = "Cappuccino ($3.75)", HOT_CHOCOLATE_DRINK = "Hot Chocolate ($2.25)",
	         COFFEE_MUG_OPTION = "Coffee mug ($16.97)", COFFEE_PRESS_OPTION = "Coffee press ($22.90)",
	         COFFEE_SCOOP_OPTION = "Coffee scoop ($6.05)", COFFEE_GRINDER_OPTION = "Coffee grinder ($24.99)",
	         COFFEE_MUG_WARMER_OPTION = "Coffee mug warmer ($10.99)";

const double COFFEE(2.89), ESPRESSO(3.23), CAPPUCCINO(3.75),
             HOT_CHOCOLATE(2.25), COFFEE_MUG(16.97),
             COFFEE_PRESS(22.90), COFFEE_SCOOP(6.05),
             COFFEE_GRINDER(24.99), COFFEE_MUG_WARMER(10.99),
             TAX_RATE(.1025);

void displayGreetings(); //this function says hello world to user
void displayMainMenu();//this function displays main menu to user
void displayCustomerInfoMenu();//this function allows input of user information: name, address, telephone
void displayMainSelection();//this function allows selection for main drink
void displayOptions();//this function allows selection for accessories. deselection also allowed
void displayPaymentMethod();//this function prompts the user for payment information
void displayOrder(string name, string phoneNumber, string address, 
	              string drink, double drinkPrices, string paymentChoice, 
	              string cardNumber, string optionChoice, double optionPrice,
	              int optionCounter);//this method displays the order the user requested
void displayErrors(string name, string phoneNumber, string address, 
	               string drink, string paymentChoice);//this function prompts the user to fill out required fields for order confirmation
void displaySecretBonus(int optionCounter);//this function outputs if user gets a secret bonus item.
bool isOrderComplete(string name, string phoneNumber, string address, 
	                 string drink, string paymentChoice);//this function checks if the order is complete
double getTotal(double drinkPrice, double optionPrice);//this function computes the total price of the order. Tax included.
string getName();//this method asks the user for name. Returns name.
string getNumber();//this method asks the user for telephone. Returns telephone.
string getAddress();//this method asks the user for address. Returns address.
string getDrink();//this method asks the user for drink selection. Returns drink.
string getCardNumber();//this method asks the user to input card number if paying with card. Returns card number.

int main(){
	string name = "", phoneNumber = "", missingInfo = "",
	       address = "", drink = "", paymentChoice = "",
	       cardNumber = "", optionChoice = "";
	double total = 0, drinkPrice = 0, optionPrice = 0;
	int choice, subChoice, optionCounter(0);
    bool mugSelected = 0, pressSelected = 0, scoopSelected = 0,
         grinderSelected = 0, mugWarmerSelected = 0;

    displayGreetings();

	do{
		cout << "\nMain Menu\n";
		displayMainMenu();
		cin >> choice;
		switch(choice){
			case 1:
			    do{
			    	cout << "\nCustomer Information Menu\n";
			    	displayCustomerInfoMenu();
			    	cin >> subChoice;
			    	switch(subChoice){
			    		case 1:
			    		    name = getName();
			    		    cout << "****************\n";
			    		    break;
			    		case 2:
			    		    phoneNumber = getNumber();
			    		    cout << "****************\n";
			    		    break;
			    		case 3:
			    		    address = getAddress();
			    		    cout << "****************\n";
			    		    break;
			    		case 4:
			    		    break;
			    		default:
			    		    cout << "\nNot a valid choice.\n"
			    		         << "Choose again.\n\n";
			    	}
			    }while(subChoice != 4);
			    break;
			case 2:
			    do{
			    	cout << "\nDrinks Menu\n";
			    	displayMainSelection();
			    	cin >> subChoice;
			    	switch(subChoice){
			    		case 1:
			    		    drink = COFFEE_DRINK;
			    		    drinkPrice = COFFEE;
			    		    cout << drink << endl;
			    		    cout << "****************\n";
			    		    break;
			    		case 2:
			    		    drink = ESPRESSO_DRINK;
			    		    drinkPrice = ESPRESSO;
			    		    cout << drink << endl;
			    		    cout << "****************\n";
			    		    break;
			    		case 3:
			    		    drink = CAPPUCCINO_DRINK;
			    		    drinkPrice = CAPPUCCINO;
			    		    cout << drink << endl;
			    		    cout << "****************\n";
			    		    break;
			    		case 4:
			    		    drink = HOT_CHOCOLATE_DRINK;
			    		    drinkPrice = HOT_CHOCOLATE;
			    		    cout << drink << endl;
			    		    cout << "****************\n";
			    		    break;
			    		case 5:
			    		    break;
			    		default:
			    		    cout << "\nNot a valid choice.\n"
			    		         << "Choose again.\n\n";
			        }
			    }while(subChoice != 5);
			    break;
			case 3:
			    do{
			    	cout << "\nOptions/Accessories\n";
			    	displayOptions();
			    	cin >> subChoice;
			    	switch(subChoice){
			    		case 1:
			    		    if(mugSelected == 0){
			    		    	cout << COFFEE_MUG_OPTION << endl
			    		    	     << "****************\n";
			    		    	optionChoice = optionChoice + COFFEE_MUG_OPTION + "\n";
			    		    	optionPrice += COFFEE_MUG;
			    		    	optionCounter += 1;
			    		    	mugSelected = 1;
			    		    }
			    		    else
			    		    	cout << "Already selected this.\n";
			    		    break;
			    		case 2:
			    		    if(pressSelected == 0){
			    		    	cout << COFFEE_PRESS_OPTION << endl
			    		    	     << "****************\n";
			    		    	optionChoice = optionChoice + COFFEE_PRESS_OPTION + "\n";
			    		    	optionPrice += COFFEE_PRESS;
			    		    	optionCounter += 1;
			    		    	pressSelected = 1;
			    		    }
			    		    else
			    		    	cout << "Already selected this.\n";
			    		    break;
			    		case 3:
			    		    if(scoopSelected == 0){
			    		    	cout << COFFEE_SCOOP_OPTION << endl
			    		    	     << "****************\n";
			    		    	optionChoice = optionChoice + COFFEE_SCOOP_OPTION + "\n";
			    		    	optionPrice += COFFEE_SCOOP;
			    		    	optionCounter += 1;
			    		    	scoopSelected = 1;
			    		    }
			    		    else
			    		    	cout << "Already selected this.\n";
			    		    break;
			    		case 4:
			    		    if(grinderSelected == 0){
			    		    	cout << COFFEE_GRINDER_OPTION << endl
			    		    	     << "****************\n";
			    		    	optionChoice = optionChoice + COFFEE_GRINDER_OPTION + "\n";
			    		    	optionPrice += COFFEE_GRINDER;
			    		    	optionCounter += 1;
			    		    	grinderSelected = 1;
			    		    }
			    		    else
			    		    	cout << "Already selected this.\n";
			    		    break;
			    		case 5:
			    		    if(mugWarmerSelected == 0){
			    		    	cout << COFFEE_MUG_WARMER_OPTION << endl
			    		    	     << "****************\n";
			    		    	optionChoice = optionChoice + COFFEE_MUG_WARMER_OPTION + "\n";
			    		    	optionPrice += COFFEE_MUG_WARMER;
			    		    	optionCounter += 1;
			    		    	mugWarmerSelected = 1;
			    		    }
			    		    else
			    		    	cout << "Options Cleared!\n";
			    		    break;
			    		case 6:
			    		    cout << "Options/Acessories removed\n"
			    		         << "****************\n";
			    		    mugSelected = 0, pressSelected = 0, scoopSelected = 0,
			    		    grinderSelected = 0, mugWarmerSelected = 0, optionPrice = 0.0,
			    		    optionCounter = 0, optionChoice = "";
			    		    break;
			    		case 7:
			    		    break;
			    		default:
			    		    cout << "\nNot a valid choice.\n"
			    		         << "Choose again.\n\n";
			    	}
			    }while(subChoice != 7);
			    break;
			case 4:
			    do{
			    	cout <<"\nPayment Method\n";
			    	displayPaymentMethod();
			    	cin >> subChoice;
			    	switch(subChoice){
			    	    case 1:
			    	        paymentChoice = "Visa";
			    	        cout << paymentChoice;
			    	        cardNumber = getCardNumber();
			    	        cout << "****************\n";
			    	        if(cardNumber == "Q" || cardNumber == "q"){//this condition resets choices
			    	        	paymentChoice = "";
			    	        	cardNumber = "";
			    	        	subChoice = 5;//hard coded 5 to break out of the loop
			    	        	break;
			    	        }
			    	        break;
			    	    case 2:
			    	        paymentChoice = "MasterCard";
			    	        cout << paymentChoice;
			    	        cardNumber = getCardNumber();
			    	        cout << "****************\n";
			    	        if(cardNumber == "Q" || cardNumber == "q"){//reset condition choices
			    	        	paymentChoice = "";
			    	        	cardNumber = "";
			    	        	subChoice = 5;//hard coded 5 to break switch
			    	        	break;
			    	        }
			    	        break;
			    	    case 3:
			    	        paymentChoice = "Cash";
			    	        cout << paymentChoice << endl
			    	             << "****************\n";
			    	        cardNumber = "";
			    	        break;
			    	    case 4:
			    	        break;
			    	    default:
			    	        cout << "\nNot a valid choice.\n"
			    	             << "Choose again.\n\n";
			    	}
			    }while(subChoice != 4);
			    break;
			case 5:
			    if(isOrderComplete(name, phoneNumber, address, drink, paymentChoice)){
			    	cout << "\nOrder Confirmation\n";
			    	displayOrder(name, phoneNumber, address, 
			    		         drink, drinkPrice, paymentChoice, 
			    		         cardNumber, optionChoice, optionPrice,
			    		         optionCounter);
			    }
			    else{
			    	cout << "\nError\n";
			    	displayErrors(name, phoneNumber, address, drink, paymentChoice);
			    }
			    break;
			case 6:
			    break;
			default:
			    cout << "\nNot a valid choice.\n"
			         << "Choose again.\n";
		}
	}while(choice != 6);

	cout << "----------------\n"
	     << "Thank you.\n";
	//system("PAUSE"); //commented out for linux compiler gcc (gnu compiler)
	return 0;
}

void displayGreetings(){
	cout << "This program takes\n"
	     << "your coffee order.\n"
	     << "You can add options\n"
	     << "or accessories to \n"
	     << "your order.\n";
}

void displayMainMenu(){
	cout << "----------------\n"
	     << "1. Input Customer Information\n"
	     << "2. Main Selection\n"
	     << "3. Options\n"
	     << "4. Payment Method\n"
	     << "5. Display Order Confirmation\n"
	     << "6. Exit\n"
	     << "\nYour selection: ";
}

void displayCustomerInfoMenu(){
	cout << "----------------\n"
	     << "1. Name\n"
	     << "2. Phone Number\n"
	     << "3. Address\n"
	     << "4. Main Menu\n"
	     << "\nYour selection: ";
}

void displayMainSelection(){
	cout << "----------------\n"
	     << "1. " << COFFEE_DRINK << endl
	     << "2. " << ESPRESSO_DRINK << endl
	     << "3. " << CAPPUCCINO_DRINK << endl
	     << "4. " << HOT_CHOCOLATE_DRINK << endl
	     << "5. Main Menu\n"
	     << "\nYour selection: ";
}

void displayOptions(){
	cout << "----------------\n"
	     << "1. " << COFFEE_MUG_OPTION << endl
	     << "2. " << COFFEE_PRESS_OPTION << endl
	     << "3. " << COFFEE_SCOOP_OPTION << endl
	     << "4. " << COFFEE_GRINDER_OPTION << endl
	     << "5. " << COFFEE_MUG_WARMER_OPTION << endl
	     << "6. Clear all options\n"
	     << "7. Main Menu\n"
	     << "\nYour selection: ";
}

void displayPaymentMethod(){
	cout << "----------------\n"
	     << "1. Visa\n"
	     << "2. Mastercard\n"
	     << "3. Cash\n"
	     << "4. Main Menu\n"
	     << "\nYour selection: ";
}

void displayOrder(string name, string phoneNumber, string address, 
	              string drink, double drinkPrice, string paymentChoice, 
	              string cardNumber, string optionChoice, double optionPrice,
	              int optionCounter){
	cout << "You have placed an order for\n" << drink << endl;
	if (optionChoice != ""){
		cout << "With the following options:\n" 
		     << optionChoice;
	}

	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "\nTotal price: $" << getTotal(drinkPrice, optionPrice) << endl;
	displaySecretBonus(optionCounter);
	cout << "\nSold to: " << name << endl
	     << "Telephone: " << phoneNumber << endl
	     << "Address: " << address << endl;
	if(paymentChoice == "Visa" || paymentChoice == "MasterCard"){
		cout << "Paid by: " << paymentChoice << " number " << cardNumber << endl;
	}
	else{
		cout << "Paid by: " << paymentChoice << endl;
	}
}

void displayErrors(string name, string phoneNumber, string address, 
	               string drink, string paymentChoice){
	string errors;
	cout << "XXXXXXXXXXXX\n"
	     << "Please complete:\n";
	if(name == ""){
		errors = "Name\n";
		cout << errors;
	}
	if(phoneNumber == ""){
		errors = "Phone Number\n";
	    cout << errors;
	}
	if(address == ""){
		errors = "Address\n";
	    cout << errors;
	}
	if(drink == ""){
		errors = "Drink\n";
		cout << errors;
	}
	if(paymentChoice == ""){
		errors = "Payment Method\n";
		cout << errors;
	}
	cout << "XXXXXXXXXXXX\n";
}

void displaySecretBonus(int optionCounter){
	if(optionCounter == 2)
		cout << "Congratulations: You get one Free Cup of Coffee.\n";
	else if(optionCounter == 3)
		cout << "Congratulations: You get one free Coffee Mug.\n";
	else if(optionCounter >= 4)
		cout << "Congratulations: You get a $5.00 Gift Card.\n";
}

bool isOrderComplete(string name, string phoneNumber, string address, 
	                 string drink, string paymentChoice){
	bool status = true;

	if(name == "")
		status = false;
	if(phoneNumber == "")
		status = false;
	if(address == "")
		status = false;
	if(drink == "")
		status = false;
	if(paymentChoice == "")
		status = false;
	return status;
}

double getTotal(double drinkPrice, double optionPrice){
	return (drinkPrice + optionPrice) * (1 + TAX_RATE);
}

string getName(){
	string customerName;
	cout << "Enter name: ";
	cin.ignore();
	getline(cin, customerName);
	return customerName;
}

string getNumber(){
	string phoneNumber;
	cout << "Enter Phone Number: ";
	cin.ignore();
	getline(cin, phoneNumber);
	return phoneNumber;
}

string getAddress(){
	string address = "";
	cout << "Enter Address: ";
	cin.ignore();
	getline(cin, address);
	return address;
}
string getCardNumber(){
	string cardNumber = "";
	bool do_over = false;

	cout << "\n";
	do{
		cout << "\nPlease enter card number\n"
		     << "Press \'Q\' or \'q\' to change\n"
		     << "payment option.\n";
		cin.ignore();
		getline(cin, cardNumber);
		if(cardNumber == ""){
			cout << "\nYou didn't enter card number.\n"; // triggers when user doesn't input something into card number
			do_over = true;
		}
		else if (cardNumber == "Q" || cardNumber == "q")
			do_over = false;
		else
			do_over = false;
	}while(do_over);
	return cardNumber;
}