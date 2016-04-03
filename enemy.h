#ifndef __ENEMY_H__
#define __ENEMY_H__
#include <string>
#include "character.h"

using std::string;

class Enemy : public Character {
	int _type;
	// 0 - Grid Bug, 1 - Goblin, 2 - Merchant, 3 - Orc, 4 - Dragon
	string _name;
	char _display;
	bool _canWalk = false, _dead = false, _canMove;
	
 public:
 	bool _hostile;
	Enemy( char c );

	char getType();
	string getName();
	bool isHostile();
	bool canWalk();
	bool dead();
	int detect( **Cell grid );

	void move();
	void attack( &Player p );
	void use();
	void becomeHostile();
	void setAttack( int a );
	void setDefense( int d );
	void setHealth( int h );
	void gainPotion();
	void die();
};
#endif
