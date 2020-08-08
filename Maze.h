#ifndef MAZE_H
#define MAZE_H

class Maze{
	public:
		Maze();
		char *getMaze();
		void setMaze(); //This should be private?
		void setMazeLevel(int);
		int getMazeLevel();
	private:
		char maze[50][50];
		int level; //How strong is the maze
};

#endif
