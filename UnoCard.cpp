#include <iostream>

// User defined color and rank types (user-defined integers) 
enum color{ RED = 1, BLUE = 2, GREEN = 3, YELLOW = 4 };
enum rank { N1=1,N2 = 2, N3 = 3, N4 = 4, N5 = 5};

class Card
{
public:
	Card(color COLOR= RED, rank rank = N1); // constructor with some default values
	~Card(); // destructor
	inline color getcolor(void) const { return m_color; }
	inline rank getrank(void) const { return m_rank; }
	char toCharcolor(void ); // returns a char that "describes" card's color
	char toCharrank(void); // returns a char that "describes" card's rank

private:
	color m_color; // private storage of color
	rank m_rank; // private storage of rank
	friend std::ostream& operator<<(std::ostream& os, const Card &c);
};

// global operator functions comparing ranks of two cards
// The cards a and b are passed by reference
inline bool operator<(const Card& a, const Card& b) {
	if (a.getcolor() == b.getcolor()) return (a.getrank()<b.getrank());
	else                            return (a.getcolor()<b.getcolor());
}
inline bool operator>(const Card& a, const Card& b) {
	if (a.getcolor() == b.getcolor()) return (a.getrank()>b.getrank());//ASK??
	else                            return (a.getcolor()>b.getcolor());
}

// checks equality of colors and ranks for two cards
inline bool operator==(Card& a, Card& b) { return (a.getrank() == b.getrank() && a.getcolor() == b.getcolor()); }
Card::Card(color color, rank rank)
	: m_color(color)
	, m_rank(rank)
{
}

// destructor
Card::~Card()
{
}

char Card::toCharcolor()
{
	if (m_color == RED)   return 'R';
	else if (m_color == BLUE)    return 'B';
	else if (m_color == GREEN)   return 'G';
	else                       return 'Y';

}
char Card::toCharrank()
{
	if (m_rank == N2)	return '2';
	else if (m_rank == N3)	return '3';
	else if (m_rank == N4)	return '4';
	else if (m_rank == N5)	return '5';

	else                            return '1';
}
std::ostream& operator<<(std::ostream& os, const Card &c) {
	int color = c.getcolor();
	int demo = c.getrank();
	switch (rank) {
	case 1:
		os << "1";
		break;
	case 2:
		os << "2";
		break;
	case 3:
		os << "3";
		break;
	case 4:
		os << "4";
		break;
//	default:
	//	os << m_rank;
	}
	switch (color) {
	case 1:
		os << " of RED";
		break;
	case 2:
		os << " of BLUE";
		break;
	case 3:
		os << " of GREEN";
		break;
	default:
		os << " of YELLOW";
	}
	return os;
}