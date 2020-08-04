#include <iostream>

using namespace std;

void presentacion();
int giveOrder();
int move(int direction);

int main(){
	int points=20;
	int strength,defense,magic,hp,mana;
	int posx=0;
	int posy=0;
	int order;
	presentacion();
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
	cout<<magic<<" points assigned to magic."<<endl;
	hp = 4*strength + 3*defense + 2*magic;
	mana = 4*magic + 3*defense + 2*strength;
	cout<<"NAME: Draculinio // STR: "<<strength<<"// DEF: "<<defense<<" // MGK: "<<magic<<" // HP: "<<hp<<" // MANA: "<<mana<<endl;
	do{
		order = giveOrder();
		switch(order){
			case 1:
				cout<<"Me muevo hacia arriba"<<endl;
				break;
			case 2: 
				cout<<"Me muevo hacia abajo"<<endl;
				break;
			case 3:
				cout<<"Me muevo a la izquierda"<<endl;
				break;
			case 4:
				cout<<"Me muevo a la derecha"<<endl;
				break;
			case 0:
				cout<<"Saliendo del sistema..."<<endl;
				cout<<"Gracias por jugar Rindelia"<<endl;
				break;
			default:
				cout<<"Orden no incorporada"<<endl;
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

int move(int direction){
	return 0;	
}
