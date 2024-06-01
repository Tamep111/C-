
#include <iostream>  
#include <algorithm> 
using namespace std;

class player
{
	string name;
	int points = 0;
public:
	friend bool point_sorter(const player&, const player&);
	string get_name()const 
	{
		return name; 
	}
	int get_points()const 
	{ 
		return points; 
	}
	void set_name(string n) 
	{ 
		name = n; 
	}
	void set_points(int n) 
	{ 
		points = n; 
	}
};
bool point_sorter(const player& l, const player& r)
{
	return l.points > r.points;
}
int main() {
	size_t P_numbr;
	cout << "insert number of players ";
	cin >> P_numbr;

	player* players = new player[P_numbr];
	for (size_t i = 0; i < P_numbr; i++)
	{
		string name;
		int point;
		cout << "Insert name of player " << i+1 << " (name points):";
		cin >> name >> point;
		players[i].set_name(name);
		players[i].set_points(point);
	}

	sort(players, players + P_numbr, point_sorter);
	for (size_t i = 0; i < P_numbr; i++)
	{
		cout << players[i].get_name() << " " << players[i].get_points() << '\n';
	}

	delete[] players;
}

