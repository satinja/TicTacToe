#pragma once
#include <string>
#include <vector>
#include "Board.h"

class Player
{
	std::string playerId;
	char moveType = '_';
public:
	Player();
	Player(std::string id, char move);
	void makeMove(int x, int y, char c, Board* board);
	char getMoveType();
};

