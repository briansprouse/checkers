#ifndef PLAYER
#define PLAYER

#include <stdint.h>
#include <string>

namespace checkers {

class Player
{
public: 
    Player(); 

    virtual ~Player();

    virtual void move(
        int currentX, 
        int currentY, 
        int nextX, 
        int nextY) = 0;

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

