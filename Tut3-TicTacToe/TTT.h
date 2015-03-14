#pragma once
#ifndef TTT_H
#define TTT_H
#include<string>

using namespace std;

class TTT
{

private:
	char grid[3][2];
	//int player;

public:
	TTT();
	~TTT();
	void restart();
	bool move(int , int ,int );
	void print();
	int isWon();
};
#endif

