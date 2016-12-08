#pragma once 

#include<iostream>
#include "OrderedList.h"
#include "UnoCard.h"
using namespace std;


//template<card>
class player {
public:
	string p_name;
	OrderedList<Card> m_hand;
	player(string name) {
		p_name = name;

	}
	player() {};
	Card cardmatch(Card comparingcard) {

		Card fake(black, N2);
		for (int i = 1; i < (m_hand.getLength()); i++) {

			if (comparingcard.getcolor() == m_hand.retrieve(i).getcolor()) {
				return m_hand.retrieve(i);
			}
			else if (comparingcard.getrank() == m_hand.retrieve(i).getrank()) {

				return m_hand.retrieve(i);
			}
			return m_hand.retrieve(i);
		}
		return fake;
	}
	//need to pass the upface card ftom the deck (stack) 
	//loop through the hand to check if there is a match





	/*a name and a hand
	the hand is an orderedlist of cards or card pointers
	plus a match function
	that finds if the card passed to it is in their hand and if so returns it*/
};
#pragma once
