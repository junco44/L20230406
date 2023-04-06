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



int main()
{
	
	return 0;
}