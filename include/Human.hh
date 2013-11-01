#ifndef HUMAN
#define HUMAN

#include "Player.hh"

namespace checkers {

class Human : public Player
{
public:
    Human( CheckersBoard *board );
    ~Human();

    void move(
        uint32_t currentX, 
        uint32_t currentY, 
        uint32_t nextX, 
        uint32_t nextY);

private:
    CheckersBoard *board_;
};

} //checkers namespace

#endif //HUMAN
