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

    /*
     * @brief Displays how to play the game.
     */
    void displayRules();
    /*
     * @brief Displays the board game.
     */
    void displayBoard();

    /*
     * @brief Subtracts a piece from either the human or computer player.
     * Once a player has zero pieces, the other players wins.
     *
     * @param [in] piece - ASCII code for either X or O.
     */
    bool subtractPiece( char piece );
    /*
     * @brief Verify the x-y coordinate of the board has the given piece.
     *
     * @param [in] x - x coordinate
     * @param [in] y - y coordinate
     * @param [in] piece - ASCII code for either X or O.
     */
    bool hasPiece( uint32_t x, uint32_t y, char piece );
    /*
     * @brief Verify the position in the positions_ map has the given piece.
     *
     * @param [in] position - position in the map to check.
     * @param [in] piece - ASCII code for either X or O.
     */
    bool hasPiece( uint32_t position, char piece );
    /*
     * @brief Set the piece value in the positions_ map by calculating its value
     * from the boards x-y position.
     *
     * @param [in] x - x coordinate
     * @param [in] y - y coordinate
     * @param [in] piece - ASCII code for either X or O.
     */
    void setPositions( uint32_t x, uint32_t y, char piece );
    /*
     * @brief Set the piece value in the positions_ map for the current and
     * next values.
     *
     * @param [in] current - current position the piece is located.
     * @param [in] next - position the piece is moved to.
     */
    void setPositions( uint32_t current, uint32_t next );

private:
    uint32_t getPosition_( uint32_t x, uint32_t y);
    bool hasPiece_( uint32_t position, char hasPiece );

    std::map<uint32_t, char> positions_;
    uint32_t computerPieces_;
    uint32_t humanPieces_;

}; //CheckersBoard 
} //checkers namespace

#endif //CHECKERSBOARD
