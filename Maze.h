#ifndef MAZE_H
#define MAZE_H

class Maze{
	public:
		Maze();
		int *getMaze();
		void setMaze(); //This should be private?
		void setMazeLevel(int);
		int getMazeLevel();
	private:
		int maze[2500];
		int level; //How strong is the maze
};

#endif
