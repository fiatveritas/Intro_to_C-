//Written by:           Jesse Gallegos
//Assignment:           LAB Practice Problem Page 172 #1
//Date:                 26 September 2018
/*Description:          This program implements the 
                        game rock, paper, scissors.
                        The game asks the user to input
                        'R' for rock, 'S' for scissor,
                        and 'P' for paper. The input is
                        case insensitive. Any invalid input
                        is caught and the user is asked to
                        play again if wanted.*/

#include <iostream>
using namespace std;

int main(){
	/*Variables Explained:
	try_again denotes whether the user wants to play again.
	player_1 denotes the choice player one.
	player_2 denotes the choice of player two.*/
	char try_again, player_1, player_2;

	cout << "This is a Rock, Paper, Scissor Game\n"
	     << "============\n";
	cout << "Press \'R\' for rock \'P\' for paper\n"
	     << "or \'S\' for scissor.\n";	//not case sensitive

	do{
		cout << "Player 1 Enter choice: ";
		cin >> player_1;
		cout << "Player 2 Enter choice: ";
		cin >> player_2;
		if(player_1 == 's' || player_1 == 'S'){ //player 1 chooses scissor
			if(player_2 == 'p' || player_2 == 'P'){
				cout << "Player 1 Wins!\n";
			}
			else if(player_2 == 'r' || player_2 == 'R'){
				cout << "Player 2 Wins!\n";
			}
			else if(player_2 == 's' || player_2 == 'S'){
				cout <<"No one Wins. Draw!\n";
			}
			else{
				cout <<"Invalid Input!\n";
			}
		}
		else if(player_1 == 'p' || player_1 == 'P'){//player 1 chooses paper
			if(player_2 == 'p' || player_2 == 'P'){
				cout <<"No one Wins. Draw!\n";
			}
			else if(player_2 == 'r' || player_2 == 'R'){
				cout << "Player 1 Wins!\n";
			}
			else if(player_2 == 's' || player_2 == 'S'){
				cout << "Player 2 Wins!\n";
			}
			else{
				cout << "Invalid Input!\n";
			}
		}
		else if(player_1 == 'r' || player_1 == 'R'){//player 1 chooses rock
			if(player_2 == 'p' || player_2 == 'P'){
				cout << "Player 2 Wins!\n";
			}
			else if(player_2 == 'r' || player_2 == 'R'){
				cout << "No one Wins. Draw!\n";
			}
			else if(player_2 == 's' || player_2 == 'S'){
				cout << "Player 1 Wins.\n";
			}
			else{
				cout << "Invalid Input!\n";
			}
		}
		else{//invalid input
			cout << "Invalid Input\n";
		}
		cout << "Woud you like to go again?\n\'Y\' for yes. ";
		cin >> try_again;
	}while(try_again == 'y' || try_again == 'Y');

	return 0;
}