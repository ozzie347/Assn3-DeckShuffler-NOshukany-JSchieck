#include <iostream>
#include "Cards.h"
#include "Hand.h"

using namespace std;

class player {
private:
	int playerNum;
	string name;
	int score;

public:
	hand cards; //hand yet to be implemented
	hand crib; //hand yet to be implemented
	card lastPlayed; //method to keep track of last card played not yet implemented	
	bool dealer;

	player() {
		playerNum = 0;
		name = " ";
		score = 0;
		//cards = create card hand method
		//crib = create crib method
		dealer = false;
	}

	//TODO add a way to call in the name entered in Play.h and player # set		
	//TODO add a method to keep score of points and another to increase points amount by points earned as played
	//TODO add a method to remove cards from visible hand after playing
	//TODO add a method to display last card played by each player
};