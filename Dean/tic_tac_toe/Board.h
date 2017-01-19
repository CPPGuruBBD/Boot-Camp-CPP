#pragma once
#include <iostream>
using namespace std;
class Board
{
	
	private:
		
		int		board[3][3] = 
		{
			{0, 0, 0},
			{0, 0, 0},
			{0, 0, 0}
		};
		int		activePlayer = 1;
		int		rounds = 1;
		int		gameState = IN_PROGRESS;
	public:
		enum { IN_PROGRESS, P1_WON, P2_WON, DRAW };
		Board();
		virtual ~Board();

		int		place(int x, int y);
		int		getState() { return gameState; }
		bool	gameFinished();
		bool	checkWin();
		void	drawBoard();
		char	XO(int num);

};

