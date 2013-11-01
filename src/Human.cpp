#include "Human.hh"
#include "CheckersExceptions.hh"

namespace checkers {

Human::Human( CheckersBoard &board ) :
    board_(board)
{}

Human::~Human()
{}

void Human::move( 
    int currentX, 
    int currentY, 
    int nextX, 
    int nextY)
{
std::cout << currentX << std::endl;
std::cout << currentY << std::endl;
std::cout << nextX << std::endl;
std::cout << nextY << std::endl;
    if( currentX - nextX != 1 )
    {
        throw MoveException("Invalid x coordinate.\n");
    }
    if( !( nextY == (currentY + 1) ||
           nextY == (currentY -1) ) )
    {
        throw MoveException("Invalid y coordinate.\n");
    }
    
    board_.setPositions(nextX, nextY, 79);
    board_.setPositions(currentX, currentY, 46);
}
}
