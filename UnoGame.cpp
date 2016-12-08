#pragma once
#include <iostream>
#include<memory>
#include"Stack.h"
#include<OrderedList.h>
#include"Queue.h"
#include"UnoPlayer2.h"
#include"UnoCard.h"
#include"Bag.h"
#define NUM_Of_player 3

class UnoGame
{
public:
	UnoGame();
	~UnoGame();
	//void play() {};
	void play();
	player players[3];


private:
	Stack<Card> u_deck;
	Queue<Card> d_deck;
	Bag<Card> m_bag;





};

UnoGame::UnoGame() : m_bag(40)
{
	cout << "welcome to the game" << endl; //constructor


	for (int j = 0.; j < 5; j++) {
		m_bag.add( Card (YELLOW, j));
		m_bag.add(Card(GREEN, j));
		m_bag.add(Card(RED, j));
		m_bag.add(Card(BLUE, N2));

	}

	for (int i = 1; i <= 40; i++) {
		d_deck.enqueue(m_bag.getOne());
	}

	for (int i = 0; i <= 2; i++) {


		for (int j = 1; j <= 7; j++) {

			players[i].m_hand.insert(d_deck.dequeue());
		}
	}
	u_deck.peek();

}

UnoGame::~UnoGame()
{
}
void UnoGame::play() {
	bool flag = false;
	Card fake(black,N1);

	while (!flag) {
		if (!(d_deck.isEmpty())) {
			for (int x = 0; x <= 2; x++) {
				Card card1 = players[x].cardmatch(u_deck.peek());
				if (card1.getcolor() != fake.getcolor())
				{
					u_deck.push(card1);
					if (players[x].m_hand.isEmpty() == 0) {
						flag = true;
					}
				}
				else {
					players[x].m_hand.insert(d_deck.dequeue());
				}//pulling a card from the deck
			}
			if (d_deck.isEmpty())
			{

				for (int s = 0; s <= u_deck.size(); s++)
				{
					d_deck.enqueue(u_deck.pop());
				}
			}
		}//coverte the stack to the qeue 



	}



};
//heck the deck size if===0 converte from the stack to queue 

//check the o=player turn match if equall to the upper card 
//if yes so remove from the hand
