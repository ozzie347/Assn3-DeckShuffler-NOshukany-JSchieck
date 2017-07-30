#include <iostream>
#include <vector>
#include "Cards.h"
#include <algorithm>
#include <ctime>
#include <cstdlib> 

int random (int i) { return std::rand() % i; }

using namespace std;

class deck {
public:
	//build the deck
	deck() {
		int currentCard = 0;
		for (int currentSuit = 1; currentSuit < 5; currentSuit++) {
			for (int currentValue = 2; currentValue < 15; currentValue++) {
				card temp = card(currentCard, currentSuit);
				cards.push_back(temp);
			}
		}
	}

	string display() {
		string output = "{";
		for (int i = 0; i < cards.size(); i++){
			output.append(cards.at(i).getDisplay());
			if (i != cards.size() - 1) {
				output.append(",");
			}
		}
		output.append("}");
		return output;
	}

	void shuffle() {
		srand(unsigned(std::time(0)));
		vector<int> vectorRandomizer;

		for (int i = 1; i<cards.size; ++i) vectorRandomizer.push_back(i);

		random_shuffle(vectorRandomizer.begin(), vectorRandomizer.end(), random);
	}

private:
	vector<card> cards;
};