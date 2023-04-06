#include <iostream>

using namespace std;

class Player
{
private:
	string PlayerName;
	int HP;
	int MP;

public:
	Player();
	Player(string PlayerName, int HP, int MP);
	void Move();
	void Attack();
};
void Player::Move()
{
	
}
void Player::Attack()
{
	
}

class Monster
{
private:
	string MonsterName;
	int HP;

public:
	Monster();
	Monster(string MonsterName, int HP);
	void Move();
	void Attack();
};
void Monster::Move()
{

}
void Monster::Attack()
{

}

class Map
{
private:
	const int SizeX = 10;
	const int SizeY = 10;

public:
	Map();
	void Display();
};
Map::Map()
{

}
void Map::Display()
{

}

int main()
{
	
	return 0;
}