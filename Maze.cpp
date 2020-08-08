#include<iostream>
#include "Maze.h"

Maze::Maze(){
	//TODO: Call a maze generator 
}

char *Maze::getMaze(){
	return *maze;
}

void Maze::setMaze(){
	std::cout<<"Generate a map!";
	//TODO: Is this the maze generator?
}

void Maze::setMazeLevel(int lvl){
	level = lvl;
}

int Maze::getMazeLevel(){
	return level;
}
