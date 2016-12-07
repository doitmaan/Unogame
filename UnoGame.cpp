/*-This class represents a game of uno.
- It has defines for represent number of players, number of cards players start with, and number
of numbers cards can have(ie #define NUM_OF_PLAYERS 3).
- It has a Stack representing the face up cards.
- It has a Queue representing the face down cards or deck.
- Its Constructor will initialize the game :
a) Create all the cards place them in a bag.
b) Randomly pull cards from the bag and place them into the deck.
c) Create players.(NOTE THESE SHOULD BE STORED IN A CONTAINER SO SOMEONE COULD
MAKE THE GAME HAVE MORE PLAYERS IF THEY WANTED)
d) Draw cards for each player and place them into their hands.
e) Draw a starting card for the face up pile.
- It will have a play() method that will play the game(see game simulation above)*/
#include<iostream>
//#include<unoplayer>
//#include<unocard>
//include<bag.h>
#define NUM_Of_player 3

class UnoGame
{
public:
	UnoGame();
	~UnoGame();

private:
	stack<card> u_deck;
	qeue<card> d_deck;



};

UnoGame::UnoGame()
{
	cout << "welcome to the game //constructor" << endl;

}

UnoGame::~UnoGame()
{
} 
	void getAHand(unsigned int n, List<shared_ptr<Card>> &hand) {
		// make a bag add all the cards to it
		Bag<shared_ptr<Card>> bag(40);
COLOR COLOR[] = { RED,BLUE,GREEN,YELLOW};
		RANK RANK[] = { 1,2,3,4,5 };,
		for (int i = 0; i < 4; i+,+) {
			for (int j = 0; j < 13; j++) {
				bag.add(make_shared<Card>(s[i], d[j]));
			}
		}
		//put some cards in hand
		for (int i = 0; i < n; i++) {
			hand.append(bag.getOne());
		}
	}



}
