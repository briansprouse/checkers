#ifndef HUMAN
#define HUMAN

#include <stdint.h>
#include "Player.hh"

#include "CheckersBoard.hh"

namespace checkers {

class Human : public Player
{
public:
    Human( CheckersBoard &board );
    ~Human();

    void move(
        int currentX, 
        int currentY, 
        int nextX, 
        int nextY);

private:
    CheckersBoard board_;
};

} //checkers namespace

#endif //HUMAN
