#include<iostream>
#include "TTT.h"
#include "stdafx.h"

using namespace std;

int main()
{
	int cPlayer = 1;
	int n = 0;
	TTT game;

	game.print();

	for (int i = 1; i <= 9; i++)
	{
		int r, c;
		bool m;
		char sp;
		cout << "Player " << cPlayer << ": Enter co-ordinates (r,c):";
		cin >> r >> sp >> c;
		m = game.move(r, c, cPlayer);
		while (!m)
		{
			cout << "Invalid Entry! Try Again " << endl;
			cout << "Player " << cPlayer << ": Enter co-ordinates (r,c):";
			cin >> r >> sp >> c;
			m = game.move(r, c, cPlayer);
		}

		if (i > 3)
		{
			int result;
			result = game.isWon();
			if (result != 0 && result != 3)
			{
				cout << "\nThe winner of the game is: Player " << result << endl;
				exit(1);
			}
			else if (result == 0)
				cout << "\nThe game ended a draw\n";
			else
				cout << "\nThe game is still being played\n";
		}

		if (cPlayer == 1)
			cPlayer = 2;
		else
			cPlayer = 1;

		system("CLS");
		game.print();

	};
}