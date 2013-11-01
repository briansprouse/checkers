#ifndef PLAYER
#define PLAYER

#include <stdint.h>
#include <string>
#include "CheckersBoard.hh"

namespace checkers {

class Player
{
public: 
    Player(); 

    virtual ~Player();

    bool subtractPiece()
    {
        return --pieces_;
    }

    uint32_t numberOfPieces()
    {
        return pieces_;
    }

private:
    uint32_t pieces_;
};

} //checkers namespace
#endif //PLAYER

