#pragma once
#ifndef TTT_H
#define TTT_H

class TTT
{

private:
	char grid[3][3] = { {' ',' ',' '}, {' ',' ',' '}, {' ',' ',' '} };
	int player;

public:
	TTT();
	~TTT();
	void restart();
	bool move(int , int ,int );
	void print();
	int isWon();
};
#endif

