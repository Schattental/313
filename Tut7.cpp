#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

string getCard(int randomSuit, int randomCard);
bool compareCard(char & userCard, int randomSuit, int randomCard, string & result);

int main()
{
	srand(time(NULL));
	
	char card[2];
	bool complete = false;
	while(!complete){
		
		cout << "Please enter a card: ";
		cin >> card;
		
		int randomSuit = rand() % 4 + 1;
		int randomCard = rand() % 13 + 1;
		
		if((int)card[0] == randomSuit && (int)card[1] == randomCard){
			cout << "Match! You Won!" << endl;
			complete = true;
		}else{
			cout << "Not a match, card was " << getCard(randomSuit, randomCard) << endl;
		}
	}
	
}

bool compareCard(char & userCard, int randomSuit, int randomCard, string & result){
	
	string card;
	
	result = "Card was not a match";
	return false;
}

string getCard(int randomSuit, int randomCard){
	string card;
	int userCard_card, userCard_suit;
	
	switch(userCard[1]){
		case 'A':
		card = "Ace";
		userCard_card = 1;
		break;
		case 'J':
		card = "Jack";
		userCard_card = 2;
		break;
		case 'Q':
		card = "Queen";
		userCard_card = 3;
		break;
		case 'K':
		card = "King";
		userCard_card = 4;
		break;
		default:
		card = to_string(randomCard);
		
	
	switch(userCard[0]){
		case 'S':
		card = "Spades";
		break;
		case 'C':
		card = "Clubs";
		break;
		case 'D':
		card = "Diamond";
		break;
		case 'H':
		card = "Hearts";
		break;
		default:
		card = to_string(randomCard);
		
	
	//get card value
	switch(randomCard){
		case 1:
		card = "Ace";
		break;
		case 11:
		card = "Jack";
		break;
		case 12:
		card = "Queen";
		break;
		case 13:
		card = "King";
		break;
		default:
		card = to_string(randomCard);
		
	}
	
	card += " of ";
	switch(randomSuit){
		case 1:
		card += "Spades";
		break;
		case 2:
		card += "Clubs";
		break;
		case 3:
		card += "Diamond";
		break;
		case 4:
		card += "Hearts";
		break;
		default:
		cerr << "You messed up. Suit does not exist. " << endl;
		card += "??";
		
	}
	return card;
}