#include "stdafx.h"
#include "Board.h"
#include <iostream>
#include <string>

using namespace std;

bool	validInput(string s)
{
	if (s == "q")
		exit(EXIT_SUCCESS);
	if ((s[0] != 'A' && s[0] != 'B' && s[0] != 'C')
		|| s[1] != ' ' || s[2] > '2' || s[2] < '0')
	{
		cerr << "Invalid input : you must enter the x and y coordinates seperated by a space.\n";
		return (false);
	}
	else
		return (true);
}

inline void	trimInput(string &input)
{
	while (input[0] == ' ')
		input.erase(0, 1);
	while (input[input.length()] == ' ')
		input.erase(input.length(), 1);
}

void	announceWinner(Board game)
{
	if (game.getState() == Board::P1_WON)
		cout << "O Won!\n";
	if (game.getState() == Board::P2_WON)
		cout << "X Won!\n";
	if (game.getState() == Board::DRAW)
		cout << "Game Draw!\n";
}

int main()
{
	Board	game;
	int		x = 0;
	int		y;

	game.drawBoard();
	while (!game.gameFinished())
	{
		string input;
		do
		{
			getline(cin, input);
			trimInput(input);
		} while (!validInput(input));
		switch (input[0])
		{
			case 'A': x = 0;
				break;
			case 'B': x = 1;
				break;
			case 'C': x = 2;
		}
		y = input[2] - 48;
		if (game.place(x, y) == -1)
			cout << "Invalid selection\n";
		else
			game.drawBoard();
	}
	announceWinner(game);
    return 0;
}

