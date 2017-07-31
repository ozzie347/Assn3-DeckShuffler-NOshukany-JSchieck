#include <iostream>
#include <string>

using namespace std;

string name;

class Play {
private:
	int player;


public:
	void setup() {
		cout << "How many players? (2-4)" << endl;
		cin >> player;
		if (player < 2 || player > 4) {
			cout << "Please enter a number between 2 and 4.";
			cin.clear();
			cin.ignore();
		}
		for (int i = 0; i < player; i++) {
			cout << "Please enter a name for player" << i + 1 << endl;
			cin >> name;
		}
	}
};