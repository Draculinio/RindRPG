#include<iostream>
#include<string.h>
#include "Character.h"

Character::Character(){
	strcpy(name,"Draculinio");
	strength=10;
	defense=5;
	magic=5;
	hp=strength*4+defense*3+magic*2;
	mana=magic*4+defense*3+strength*4;
}

void Character::setStrength(int st){
	strength = st;
}
