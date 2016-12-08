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
#iclude<memory>
#include<unoplayer>
#include<unocard>
#include<bag.h>
#define NUM_Of_player 3

class UnoGame
{
public:
	UnoGame();
	~UnoGame();
	void addtohand();
	unoplayer players[3];


private:
	stack<UnoCard> u_deck;
	qeue<UnoCard> d_deck;
	bag m_bag;



};

UnoGame::UnoGame()
{
	cout << "welcome to the game //constructor" << endl;
	

	Bag<shared_ptr<Card>> bag(40);
COLOR COLOR[] = { RED,BLUE,GREEN,YELLOW};
		RANK RANK[] = { 1,2,3,4,5 };,
		for (int i = 0; i < 4; i+,+) {
			for (int j = 0; j < 5; j++) {
				bag.add(make_shared<Card>(s[i], d[j]));
			}
		} 
		for(int i=1;i<=40;i++){
		d_deck.enqueue(bag.getOne());}

for(int i=0;i<=2;i++){


                 for(int j=1;j<=7;j++){

	player[i]->m_hand.insert(d_deck.dequeue());
}
                                            }
u_deck.peek(bag.getone());

}

UnoGame::~UnoGame()
{
}
void play(){
	bool flag = false;
	while(!flag)
		if(!d_deck.isEmpty()){
			for(int x=0;x<=2;x++){
				UnoCard card1  = player[x].cardmatch(u_deck.peek();
				if(card != null)
				{
					u_deck.push(card1);
					if(m_hand.isEmpty()==0){
						flag=true;
					}
				}
				else{
					player[x].insert(d_deck.dequeue());
				}//pulling a card from the deck

        else {
        	for(int s=0;s<=u_deck.size();s++)
                
                 {d_deck.enque(u_deck.pop());}   }//coverte the stack to the qeue 
}


}



};
//heck the deck size if===0 converte from the stack to queue 

//check the o=player turn match if equall to the upper card 
//if yes so remove from the hand 

