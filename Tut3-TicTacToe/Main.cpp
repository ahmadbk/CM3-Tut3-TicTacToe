#include<iostream>
#include "TTT.h"
#include "stdafx.h"

using namespace std;

int main()
{
	int cPlayer = 1;
	int n = 0;
	TTT game;
	for (int i = 1; i <= 9; i++)
	{
		int r, c;
		bool m;
		cout << "Player " << cPlayer << ": Enter co-ordinates (r,c):";
		cin >> r >> n >> c;
		m = move(r, c, cPlayer);
		while (!m)
		{
			cout << "Invalid Entry! Try Again " << endl;
			cout << "Player " << cPlayer << ": Enter co-ordinates (r,c):";
			cin >> r >> n >> c;
			m = game.move(r, c, cPlayer);
		}

		cPlayer = 1 ? cPlayer = 2 : cPlayer = 1;

		game.print();

		if (i == 9)
		{
			int result;
			result = game.isWon();
			if (result != 0)
				cout << "The winner of the game is: Player " << result << endl;
			else
				cout << "The game ended a draw";
		};
	};
}