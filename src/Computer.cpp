#include "Computer.hh"
#include <iostream>


namespace checkers {

Computer::Computer( CheckersBoard &board ) :
    board_(board)
{}

Computer::~Computer()
{}

void Computer::move(
    int currentX, 
    int currentY, 
    int nextX, 
    int nextY)
{
    std::cout << "Move\n";
}

}
