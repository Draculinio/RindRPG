#ifndef CHARACTER_H
#define CHARACTER_H

class Character{
	public:
		Character();
		void setStrength(int);
	private:
		char name[20];
		int strength;
		int defense;
		int magic;
		int hp;
		int mana;
};

#endif
