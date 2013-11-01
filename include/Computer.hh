#ifndef COMPUTER
#define COMPUTER

#include "Player.hh"

namespace checkers {

class Computer : public Player
{
public:
    Computer( CheckersBoard *board );
    ~Computer();

    void move();

private:
    CheckersBoard *board_;
};

} //checkers namespace

#endif //COMPUTER
