// Assn3-DeckShuffler-NOshukany+JSchieck.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

//enum
enum suits{clubs = '♣', diamonds = '♦', hearts = '♥', spades = '♠'};

//constant variables
const int Jack = 11;
const int Queen = 12;
const int King = 13;
const int Ace = 14;
const int DeckSize = 52;
int cardValue;
string cardSuit;
int currentCard;
string cardDisplay;

string fullCard;

//card class
class card {
public:
	//default constructor
	card();
	//constructor
	card(int cardValue, string cardSuit);
	//display

	string fullCard = displayCard(cardValue, cardSuit);
	string displayCard(int cardValue, string cardSuit) {
		string fullString;
		string value;
		string suit;
		if (cardValue > 1 && cardValue < 11)
		{
			value = cardValue;
		}
		else if(cardValue == 11) {
			value = "J";
		}
		else if (cardValue == 12) {
			value = "Q";
		}
		else if (cardValue == 13) {
			value = "K";
		}
		else if (cardValue == 14) {
			value = "A";
		}

		if (cardSuit == "Clubs") {
			suit = clubs;
		}
		else if (cardSuit == "Diamonds") {
			suit = diamonds;
		}
		else if (cardSuit == "Hearts") {
			suit = hearts;
		}
		else if (cardSuit == "Spades") {
			suit = spades;
		}

		fullString = value + suit;
		return fullString;
	}
	string print();

private:
	int face;
	string suit;
};

//deckOfCards class
class deckOfCards {
public:
	deckOfCards();
	void shuffle();
	card deal();

private:
	card deck[DeckSize];
	int currentCard;
};


//main function
int main()
{
	deckOfCards deck;
	deck.shuffle();
	for (int i = 0; i <= 2; i++)
	{
		currentCard = deck.deal();
		cout << currentCard.print() << endl;
		return 0;
	}
}

//file implementation
//default constructor
card::card() {

}

//constructor with parameters
card::card(int cardValue, string cardSuit) {
	face = cardValue;
	suit = cardSuit;
}

//print function
string card::print() {
	string cardDisplay = std::to_string(face) + suit;
	return (cardDisplay);
}

//create the deck of 52 cards
deckOfCards::deckOfCards() {
	int faces[] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
	string suits[] = { "Clubs", "Hearts", "Diamonds", "Spades" };
	deck = new card[DeckSize];
	currentCard = 0;
	for (int count = 0; count < DeckSize; count++) {
		DeckSize[count] = card(faces[count % 13], suits[count / 13]);
	}
}

//shuffles the deck once all the cards are assigned
//suffles by creating a temp and swapping first and second
void deckOfCards::shuffle()
{
	currentCard = 0;
	for (int first = 0; first < DeckSize; first++)
	{
		int second = (rand() + time(0)) % DeckSize;
		card temp = deck[first];
		deck[first] = deck[second];
		deck[second] = temp;
	}
}

//deal a card
card deckOfCards::deal()
{
	if (currentCard > DeckSize)
	{
		shuffle();
	}
	if (currentCard < DeckSize)
	{
		return (deck[currentCard++]);
	}
	return (deck[0]);
}