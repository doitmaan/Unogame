#include<iostream>
#include"OrdedList.h"
#include"UnoCard.cpp"
using namespace std;


template<card card>
class player {
public:
	player(string name, OrderedList<Card>* hand) {
		p_name = name;
		m_hand = hand;
	}
	auto cardmatch()
		//need to pass the upface card ftom the deck (stack) 
		//loop through the hand to check if there is a match 




private:

	string p_name;
	orderdList<card>* m_hand;



	/*a name and a hand
the hand is an orderedlist of cards or card pointers
plus a match function
that finds if the card passed to it is in their hand and if so returns it*/








};
