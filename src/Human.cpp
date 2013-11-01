#include "Human.hh"
#include "CheckersExceptions.hh"

namespace checkers {

Human::Human( CheckersBoard *board ) 
{
    board_ = board;
}

Human::~Human()
{}

void Human::move( 
    uint32_t currentX, 
    uint32_t currentY, 
    uint32_t nextX, 
    uint32_t nextY)
{
    if( board_->hasPiece(currentX, currentY, 79) )
    {
        if( !( nextX == (currentX + 1) ||
               nextX == (currentX -1) ) )
        {
            throw MoveException("Invalid x coordinate.\n");
        }
        if( currentY - nextY != 1 )
        {
            throw MoveException("Invalid y coordinate.\n");
        }
        if( board_->hasPiece(nextX, nextY, 79) )
        {
            throw MoveException("Invalid move location. Contains human "
            "player's piece.\n");
        }
        board_->setPositions(nextX, nextY, 79);
        board_->setPositions(currentX, currentY, 46);
    }
    else
    {
        throw MoveException("Invalid move choice. Position does not contain"
            " your piece.\n");
    }
}

}
