#include "Player.h"

Player::Player():moveType('_')
{
}

Player::Player(std::string id, char move)
{
	playerId = id;
	moveType = move;
}

void Player::makeMove(int x, int y, char c, Board* board)
{
	board->setValue(x, y, c);
}

char Player::getMoveType()
{
	return moveType;
}
