#include<iostream>
#include<string.h>
#include<assert.h>
#include "Character.h"

using std::string;

Character::Character(string n,int str,int def,int mag){
	name=n;
	strength=10;
	defense=5;
	magic=5;
	hp=strength*4+defense*3+magic*2;
	mana=magic*4+defense*3+strength*4;
	money = 0;
	level = 1;
	experience = 0;
}

void Character::setStrength(int st){
	strength = st;
	setMana();
	setHp();
}

int Character::getStrength(){
	return strength;
}

void Character::setDefense(int df){ 
	defense = df;
	setMana();
	setHp(); 
}

int Character::getDefense(){ return defense; }

void Character::setMagic(int mgk){ 
	magic = mgk; 
	setMana();
	setHp();
}

int Character::getMagic(){ return magic; }

string Character::getName(){ return name; }

int Character::getHp(){ return hp; }

int Character::getMana() {return mana;}

void Character::addExperience(unsigned int exp){experience+=exp;}

unsigned int Character::getExperience(){return experience;}

void Character::setLevel(int lvl){level = lvl;}

int Character::getLevel(){return level;}

void Character::addMoney(int mny){money = mny;}

int Character::getMoney(){return money;}
