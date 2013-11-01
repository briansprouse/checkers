#ifndef COMPUTER
#define COMPUTER

#include "Player.hh"
#include "CheckersBoard.hh"

namespace checkers {

class Computer : public Player
{
public:
    Computer( CheckersBoard &board );
    ~Computer();

    void move(
        int currentX, 
        int currentY, 
        int nextX, 
        int nextY);

private:
    CheckersBoard board_;
};

} //checkers namespace

#endif //COMPUTER
