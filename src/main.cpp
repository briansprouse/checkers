#include "CheckersBoard.hh"
#include "CheckersExceptions.hh"
#include "Human.hh"
#include "Computer.hh"
#include <iostream>

int main(int argc, const char* argv[])
{
    checkers::CheckersBoard *board = new checkers::CheckersBoard();
    checkers::Human human(board);
    checkers::Computer computer(board);

    uint32_t currentX = 0;
    uint32_t currentY = 0;
    uint32_t nextX = 0;
    uint32_t nextY = 0;

    int x = 0;
    while( x < 5 )
    {
        std::cin >> currentX >> currentY >> nextX >> nextY;
        try
        {
            human.move(currentX, currentY, nextX, nextY);
            computer.move();
        }
        catch (checkers::MoveException &e)
        {
            std::cout << e.what();
        }
        board->displayBoard();
        x++;
    }

    delete board;
    board = nullptr;
    return 0;
}

