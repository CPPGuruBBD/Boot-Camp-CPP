#include "stdafx.h"
#include "Board.h"


Board::Board()
{
}


Board::~Board()
{
}

int Board::place(int x, int y)
{
	if (x < 3 && y < 3 && board[y][x] == 0 && !gameFinished())
	{
		board[y][x] = activePlayer;
		rounds++;
		checkWin();
		activePlayer = (activePlayer == 1) ? 2 : 1;
	}
	else
		return (-1);
	return (0);
}

bool Board::gameFinished()
{
	return (gameState == P1_WON || gameState == P2_WON || gameState == DRAW);
}

bool Board::checkWin()
{
	int countX(0);
	int countY(0);

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (board[y][x] == activePlayer)
				countX++;
			if (board[x][y] == activePlayer)
				countY++;
		}
		if (countX == 3 || countY == 3)
		{
			if (activePlayer == 1)
				gameState = P1_WON;
			else
				gameState = P2_WON;
		}
		countX = 0;
		countY = 0;
	}
	if (board[1][1] == activePlayer && board[0][0] == activePlayer && board[2][2] == activePlayer)
	{
		if (activePlayer == 1)
			gameState = P1_WON;
		else
			gameState = P2_WON;
	}
	if (board[1][1] == activePlayer && board[2][0] == activePlayer && board[0][2] == activePlayer)
	{
		if (activePlayer == 1)
			gameState = P1_WON;
		else
			gameState = P2_WON;
	}
	if (rounds == 10)
		gameState = DRAW;
	return false;
}

void Board::drawBoard()
{
	system("cls");
	printf(
		"Player : %c\t Rounds : %d\n"
		"\t    A   B   C\n"
		"\t  ~~~~~~~~~~~~~\n"
		"\t0 | %c | %c | %c |\n"
		"\t1 | %c | %c | %c |\n"
		"\t2 | %c | %c | %c |\n"
		"\t  ~~~~~~~~~~~~~\n",
		XO(activePlayer), rounds - 1,
		XO(board[0][0]), XO(board[0][1]), XO(board[0][2]),
		XO(board[1][0]), XO(board[1][1]), XO(board[1][2]),
		XO(board[2][0]), XO(board[2][1]), XO(board[2][2])
	);
}

char Board::XO(int num)
{
	if (num == 1)
		return ('O');
	else if (num == 2)
		return ('X');
	else
		return (' ');
}
