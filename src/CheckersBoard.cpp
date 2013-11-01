#include "CheckersBoard.hh"
#include <iostream>

namespace checkers
{

CheckersBoard::CheckersBoard() 
{
    positions_ = { 
    {1,  46}, {2,  88}, {3,  46}, {4,  88}, {5,  46}, {6,  88}, {7,  46}, {8,  88},
    {9,  88}, {10, 46}, {11, 88}, {12, 46}, {13, 88}, {14, 46}, {15, 88}, {16, 46},
    {17, 46}, {18, 88}, {19, 46}, {20, 88}, {21, 46}, {22, 88}, {23, 46}, {24, 88},
    {25, 46}, {26, 46}, {27, 46}, {28, 46}, {29, 46}, {30, 46}, {31, 46}, {32, 46},
    {33, 46}, {34, 46}, {35, 46}, {36, 46}, {37, 46}, {38, 46}, {39, 46}, {40, 46},
    {41, 79}, {42, 46}, {43, 79}, {44, 46}, {45, 79}, {46, 46}, {47, 79}, {48, 46},
    {49, 46}, {50, 79}, {51, 46}, {52, 79}, {53, 46}, {54, 79}, {55, 46}, {56, 79},
    {57, 79}, {58, 46}, {59, 79}, {60, 46}, {61, 79}, {62, 46}, {63, 79}, {64, 46}};
    displayRules();
    displayBoard();
}

void CheckersBoard::displayRules()
{
    std::cout << "To move a checker piece, type the x-y coordinate\n"
    "of the piece you want to move and the x-y coordinate of where\n"
    "you want to move.\n\n\n\n\n";

}

void CheckersBoard::displayBoard()
{
    std::cout << "\t\t";
    for(const auto &x : positions_)
    {
        (x.first % 8 == 0 ? std::cout << " " << x.second << std::endl << "\t\t":
                            std::cout << " " << x.second);
    }
    std::cout << std::endl;
}

bool CheckersBoard::subtractPiece( char piece )
{
    if( piece == 88 )
    {
        return --computerPieces_;
    }
    else if ( piece == 79 )
    {
        return --humanPieces_;
    }
}

void CheckersBoard::setPositions( uint32_t x, uint32_t y, char piece )
{
    uint32_t position = x + ( 8 * ( y - 1 ) );
    positions_[position] = piece;

    std::cout << "Piece: " << piece << " position: " << position << std::endl;
}

} //checkers namespace
