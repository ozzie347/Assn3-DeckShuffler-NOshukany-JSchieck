//Name:	Nicholas Oshukany 200329674
//		Justin Schieck 200328630
//OS:	Windows 10
//IDE:	Microsoft Visual Studio

// main.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Cards.h"
#include "Deck.h"
#include "GameRules.h"

using namespace std;

int main() {

	gameRules match = gameRules();

	match.run();

	system("pause");

	return 0;
}