#include "Computer.hh"
#include <stdlib.h>
#include <time.h>


namespace checkers {

Computer::Computer( CheckersBoard *board ) 
{
    board_ = board;
}

Computer::~Computer()
{}

void Computer::move()
{
    srand(time(NULL));
    //generate a random number from 1-64
    //uint32_t current = rand() % 64 + 1;
    uint32_t current = 8;

    for(;;)
    {
        if( board_->hasPiece(current, 88) )
        {
            uint32_t move = rand() % 2;
            //disallow illegal move if at edge of board
            if( move == 0 || current % 8 == 0 )
            {
                board_->setPositions(current, current + 7);
            }
            //disallow illegal move if at edge of board
            else if( move == 1 || current % 8 == 1 )
            {
                board_->setPositions(current, current + 9);
            }
            break;
        }
        current = rand() % 64 + 1;
    }

}

}
