#ifndef CHARACTER_H
#define CHARACTER_H

class Character{
	public:
		Character(std::string, int, int, int);
		void setStrength(int);
		int getStrength();
		void setDefense(int);
		int getDefense();
		void setMagic(int);
		int getMagic();
		std::string getName();
		int getHp();
		int getMana();
		void addExperience(unsigned int);
		unsigned int getExperience();
		void setLevel(int); //Should this be private?
		int getLevel();
		void addMoney(int);
		int getMoney();
	private:
		std::string name;
		int strength;
		int defense;
		int magic;
		int hp;
		int mana;
		long int money;
		unsigned int experience;
		int level;
		void setMana(){mana = 4*magic + 3*defense + 2*strength;}
		void setHp(){hp = 4*strength + 3*defense + 2*magic;}
};

#endif
