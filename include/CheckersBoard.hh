#ifndef CHECKERSBOARD
#define CHECKERSBOARD

#include <stdint.h>
#include <map>

namespace checkers
{

class CheckersBoard
{
public:
    CheckersBoard();
    ~CheckersBoard(){}

    void displayRules();
    void displayBoard();

    bool subtractPiece( char piece );
    void setPositions( uint32_t x, uint32_t y, char piece );

private:
    std::map<uint32_t, char> positions_;
    uint32_t computerPieces_;
    uint32_t humanPieces_;

}; //CheckersBoard 
} //checkers namespace

#endif //CHECKERSBOARD
