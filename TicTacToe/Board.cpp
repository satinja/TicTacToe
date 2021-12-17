#include "Board.h"

Board::Board():size(0)
{
}

Board::Board(int size):size(size)
{
	std::vector<Cell> row(size, Cell('_'));
	std::vector<std::vector<Cell>> b(size, row);
	board = b;
}

void Board::resetBoard()
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			board[i][j] = '_';
		}
	}
}

int Board::getSize()
{
	return size;
}

std::vector<std::vector<Cell>> Board::getBoard()
{
	return board;
}

void Board::setValue(int x, int y, char c)
{
	Cell cell(c);
	board[x][y] = cell;
}
