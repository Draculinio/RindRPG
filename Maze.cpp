#include<iostream>
#include<stdlib.h>
#include "Maze.h"

Maze::Maze(){
	//TODO: Call a maze generator 
}

int *Maze::getMaze(){
	return maze;
}

void Maze::setMaze(){
	
	for(int i=0;i<2500;i++){
		if(rand()%2==0){
			maze[i]=0;
		}else{
			maze[i]=1;
		}
	}	
	
}

void Maze::setMazeLevel(int lvl){
	level = lvl;
}

int Maze::getMazeLevel(){
	return level;
}
