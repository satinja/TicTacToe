#pragma once
#include "Board.h"
#include "Player.h"

class TicTacToe
{
	Board *board;
	Player *players[2];
	int nextPlayer = 0;
public:
	~TicTacToe();
	TicTacToe(int boardSize);
	void startGame();
	void abortGame();
	void changeNextPlayer();
	int getNextPlayer();
	Player* getPlayer(int index);
	void showBoard();
	Board* getBoard();
};

