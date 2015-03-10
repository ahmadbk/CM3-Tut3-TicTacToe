#include "TTT.h"
#include "TTT.h"
#include<iostream>
#include<string>

using namespace std;

TTT::TTT()
{
	for (int i = 1; i <= 3; i++)
		for (int j = 1; j <= 3; j++)
			grid[i][j] = ' ';
	
};


TTT::~TTT()
{
};

void TTT::restart()
{
	for (int i = 1; i <= 3; i++)
		for (int j = 1; j <= 3; j++)
			grid[i][j] = ' ';
};

bool TTT::move(int r, int c,int p)
{
	bool flag = 0;
	if (r < 3 && c < 3)
	{
		if (grid[r][c] != ' ')
		{
			flag = 1;
			if (p == 1)
			{
				grid[r][c] = 'x';
			}
			else
			{
				grid[r][c] = 'o';
			};

		};
	};
	return flag;
};

void TTT::print()
{
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			cout << grid[i][j]<<"\t";
		};
		cout << "\n";
	};
};

int TTT::isWon()
{
	int checkp1 = 0;
	int checkp2 = 0;

	//check rows
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			if (grid[i][j] == 'x')
				checkp1++;
			if (grid[i][j] == 'o')
				checkp2++;
		};
		if (checkp1 == 3)
			return 1;
		if (checkp2 == 3)
			return 0;
	};
	checkp1 = 0;
	checkp2 = 0;

	//check columns
	for (int i = 1; i <=3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			if (grid[j][i] == 'x')
				checkp1++;
			if (grid[j][i] == 'o')
				checkp2++;
		};
		if (checkp1 == 3)
			return 1;
		if (checkp2 == 3)
			return 0;
	};
	checkp1 = 0;
	checkp2 = 0;

	//check diagnol
	for (int i = 1; i <= 3; i++)
	{
		if (grid[i][i] == 'x')
			checkp1++;
		if (grid[i][i] == 'o')
			checkp2++;
	};
	if (checkp1 == 3)
		return 1;
	if (checkp2 == 3)
		return 0;

	return 0;
};

