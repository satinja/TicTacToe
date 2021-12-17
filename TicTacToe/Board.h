#pragma once
#include <vector>
#include "Cell.h"

class Board
{
	int size;
	std::vector<std::vector<Cell>> board;
public:
	Board();
	Board(int size);
	void resetBoard();
	int getSize();
	std::vector<std::vector<Cell>> getBoard();
	void setValue(int x, int y, char c);
};

