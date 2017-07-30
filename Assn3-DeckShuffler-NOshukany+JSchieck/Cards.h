#pragma once

#include <iostream>
#include <string>
#include "Deck.h"

using namespace std;

enum suits { clubs = 1, diamonds = 2, hearts = 3, spades = 4 };

const int Jack = 11;
const int Queen = 12;
const int King = 13;
const int Ace = 14;
const string clubsSymbol = "♣";
const string diamondsSymbol = "♦";
const string heartsSymbol = "♥";
const string spadesSymbol = "♠";

suits getSuit(int cardSuit) {
	switch (cardSuit) {
	case clubs:
		return clubs;
	case diamonds:
		return diamonds;
	case hearts:
		return hearts;
	case spades:
		return spades;
	}

class card {
public:
	card();
	card(int cardValue, int cardSuit) {
		suit = getSuit(cardSuit);
		value = cardValue;
	}
	void display() {
		cout << getDisplay() << endl;
	}
	string getDisplay() {
		string fullCard;
		string cardValue;
		string cardSuit;

		if(value > 1 && value < 11)
		{
			cardValue = to_string(value);
		}
		else if (value == 11) {
			cardValue = "J";
		}
		else if (value == 12) {
			cardValue = "Q";
		}
		else if (value == 13) {
			cardValue = "K";
		}
		else if (value == 14) {
			cardValue = "A";
		}

		if (cardSuit == "clubs") {
			cardSuit = clubsSymbol;
		}
		else if (cardSuit == "diamonds") {
			cardSuit = diamondsSymbol;
		}
		else if (cardSuit == "hearts") {
			cardSuit = heartsSymbol;
		}
		else if (cardSuit == "spades") {
			cardSuit = spadesSymbol;
		}

		fullCard = cardValue + cardSuit;
		return fullCard;
	}

private:
	int value;
	suits suit;
};