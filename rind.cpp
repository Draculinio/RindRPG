#include <iostream>
#include <stdlib.h>
#include "Character.h"

using namespace std;

void presentacion();
int giveOrder();
int throwDice(int);
int main(){
	int strength,defense,magic,hp,mana;
	int posx=0;
	int posy=0;
	int order;
	int dice;
	int steps=0;
	int points=20;
	int gamePoints=0;
	string name;
	presentacion();
	cout<<"Enter your name, adventurer: ";
	getline(cin,name);
	cout<<"You have 20 points to distribute in Strength, Defense and Magical Power\n";
	do{
		cout<<"Give points to Strength ("<<points<<" left): ";
		cin>>strength;
		
	}while(strength>points);
	points = points-strength;
	do{
		cout<<"Give points to Defense ("<<points<<" left): ";
		cin>>defense;
	}while(defense>points);
	points = points -defense;
	magic = points;
	points = 0;
	Character character(name,strength,defense,magic);
	cout<<magic<<" points assigned to magic."<<endl;
	hp = 4*strength + 3*defense + 2*magic;
	mana = 4*magic + 3*defense + 2*strength;
	cout<<"NAME: Draculinio // STR: "<<character.getStrength()<<"// DEF: "<<character.getDefense()<<
	" // MGK: "<<character.getMagic()<<" // HP: "<<character.getHp()<<" // MANA: "<<character.getMana()<<endl;
	do{
		cout<<"POINTS: "<<gamePoints<<endl;
		cout<<"PosX: "<<posx<<" PosY: "<<posy<<endl;
		order = giveOrder();
		switch(order){
			case 1:
				cout<<"Me muevo hacia arriba"<<endl;
				posx++;
				steps++;
				break;
			case 2: 
				cout<<"Me muevo hacia abajo"<<endl;
				posx--;
				steps++;
				break;
			case 3:
				cout<<"Me muevo a la izquierda"<<endl;
				posy++;
				steps++;
				break;
			case 4:
				cout<<"Me muevo a la derecha"<<endl;
				posy--;
				steps++;
				break;
			case 5:
				dice = throwDice(6);
				cout<<"Tirando un D6: "<<dice<<endl;
				break;
			case 0:
				cout<<"Thank you for playing Rindelia"<<endl;
				break;
			default:
				cout<<"Orden no incorporada"<<endl;
		}
	if(steps==100){
		gamePoints++;
		steps=0;
	}
	}while(order!=0);
	return 0;
}

void presentacion(){
	cout<<"----------------"<<endl;
	cout<<" RINDELIA - RPG "<<endl;
	cout<<"----------------"<<endl;
}

int giveOrder(){
	int order;
	cout<<"Where should I move?: ";
	cin>>order;
	return order;
}

int throwDice(int faces){
	return rand() % faces +1;
}
