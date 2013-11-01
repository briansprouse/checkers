#include "CheckersBoard.hh"
#include "Human.hh"
#include "Computer.hh"
#include <iostream>

int main(int argc, const char* argv[])
{
    checkers::CheckersBoard board;
    checkers::Human human(board);
    checkers::Computer computer(board);

    uint32_t currentX = 0;
    uint32_t currentY = 0;
    uint32_t nextX = 0;
    uint32_t nextY = 0;
    std::cin >> currentX >> currentY >> nextX >> nextY;

    human.move(currentX, currentY, nextX, nextY);
    board.displayBoard();

    return 0;
}

