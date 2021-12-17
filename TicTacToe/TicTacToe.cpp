#include <iostream>
#include "TicTacToe.h"

int main()
{
    //std::cout << "1. Start Game\n2. Abort Game\n3. Make next move\n\n";
    int input, x, y;

    TicTacToe* game = new TicTacToe(3);
    game->startGame();

    while (1)
    {

        int next_player = game->getNextPlayer();
        char move_char = game->getPlayer(next_player)->getMoveType();

        std::cout << "Player " << next_player << " is playing and the move is "
            << move_char << "\n";
        game->showBoard();

        std::cout << "Enter X Y" << std::endl;
        std::cin >> x >> y;

        Player* player = game->getPlayer(next_player);
        player->makeMove(x, y, move_char, game->getBoard());
        game->changeNextPlayer();
    }
    
}


TicTacToe::~TicTacToe()
{
    delete board;
    delete[] players;
}

TicTacToe::TicTacToe(int boardSize)
{
    board = new Board(boardSize);
    players[0] = new Player("1", 'X');
    players[1] = new Player("2", 'O');
}

void TicTacToe::startGame()
{
    
}

void TicTacToe::abortGame()
{
    board->resetBoard();
}

void TicTacToe::changeNextPlayer()
{
    nextPlayer = nextPlayer == 0? 1: 0;
}

int TicTacToe::getNextPlayer()
{
    return nextPlayer;
}

Player* TicTacToe::getPlayer(int index)
{
    return players[index];
}

void TicTacToe::showBoard()
{
    for (int i = 0; i < board->getSize(); i++)
    {
        for (int j = 0; j < board->getSize(); j++)
        {
            std::cout << board->getBoard()[i][j].getCellValue() << " ";
        }
        std::cout << std::endl;
    }
}

Board* TicTacToe::getBoard()
{
    return board;
}
